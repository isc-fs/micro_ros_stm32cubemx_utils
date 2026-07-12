#include <rmw_microros/rmw_microros.h>

#include "main.h"
#include "cmsis_os.h"
#include "usbd_cdc_if.h"
#include "usbd_cdc.h"

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#ifdef RMW_UXRCE_TRANSPORT_CUSTOM

// --- USB CDC Handles ---
extern USBD_CDC_ItfTypeDef USBD_Interface_fops_HS;
extern USBD_HandleTypeDef hUsbDeviceHS;

// --- Reimplemented USB CDC callbacks ---
static int8_t CDC_TransmitCplt_HS(uint8_t *Buf, uint32_t *Len, uint8_t epnum);
static int8_t CDC_Control_HS(uint8_t cmd, uint8_t* pbuf, uint16_t length);
static int8_t CDC_Receive_HS(uint8_t* Buf, uint32_t *Len);

// Line coding: Rate: 115200bps; CharFormat: 1 Stop bit; Parity: None; Data: 8 bits
static uint8_t line_coding[7] = {0x00, 0xC2, 0x01, 0x00, 0x00, 0x00, 0x08};

// --- micro-ROS Transports ---
// Both rings MUST be powers of two (mask-wrap). USB_BUFFER_SIZE = RX ring.
#define USB_BUFFER_SIZE  4096u
#define USB_TX_RING_SIZE 4096u
#define WRITE_TIMEOUT_MS 10U

// ===================== RX ring (agent -> uDV) ============================
volatile uint8_t storage_buffer[USB_BUFFER_SIZE] = {0};
volatile size_t it_head = 0;   // read index (consumer: cubemx_transport_read, task)
volatile size_t it_tail = 0;   // write index (producer: CDC_Receive_HS, USB ISR)
// Count of RX packets DROPPED because the ring was full. Externally linked and
// ready to surface on a pit-diag health frame, but NOT yet wired (TODO #166).
// Dropping (vs silently overwriting unread bytes) keeps the XRCE parser in sync;
// a reliable stream re-delivers the lost frame, best-effort supersedes it.
volatile uint32_t g_rx_overflow_count = 0;

// ===================== TX ring (uDV -> agent) — ASYNC ====================
// Issue #166: the old TX was single-in-flight and BLOCKING — cubemx_transport_write
// busy-waited up to WRITE_TIMEOUT_MS per frame and DROPPED the frame if a transfer
// was already in flight (CDC_Transmit_HS -> USBD_BUSY). That stalled the one
// micro-ROS thread on every publish, starving inbound servicing (the /dv/status
// "cliff") and mangling the dense CREATE_SESSION burst (the handshake failure).
//
// Now: write() copies the frame into this SPSC ring and returns immediately (no
// USB wait). The USB IN-complete ISR (CDC_TransmitCplt_HS) drains the ring one
// contiguous chunk at a time. CDC_Transmit_HS only SetTxBuffer()s the pointer (no
// copy), so the in-flight region [tx_tail, tx_tail+tx_inflight) must stay stable
// until the transfer completes — the SPSC invariant (producer never overwrites
// unread bytes) guarantees exactly that.
// In RAM_D1 (not the 128 KB DTCM, which is full of stack/heap) — the linker's
// .ram_d1_bss "large buffers" section, zeroed by main.c at boot. OTG DMA is
// disabled so the core (not a DMA engine) copies this into the USB FIFO, so
// AXI-SRAM placement is fine (no cache/DMA coherency concern; D-cache is off).
static uint8_t tx_ring[USB_TX_RING_SIZE] __attribute__((section(".ram_d1_bss")));
static volatile uint16_t tx_head = 0;      // producer (task) write index
static volatile uint16_t tx_tail = 0;      // consumer (ISR) read index
static volatile uint16_t tx_inflight = 0;  // bytes handed to the live transfer; 0 = TX idle
// Count of TX frames dropped because the ring stayed full past WRITE_TIMEOUT_MS.
volatile uint32_t g_tx_drop_count = 0;

bool initialized = false;

// Critical section guarding the "is TX idle? start next chunk" check-and-act
// against the USB IN-complete ISR. Masks ONLY the USB (OTG_HS) interrupt, NOT
// all IRQs — FDCAN-RX and SysTick keep their latency (the ACU/AMS CAN bus is
// safety-critical, so it must not eat a few-us all-IRQ blackout ~700x/s).
// HAL_NVIC_DisableIRQ carries the DSB/ISB so the mask takes effect before the
// guarded region; save/restore the prior enable state for re-entrancy safety.
static inline uint32_t usb_lock(void)
{
    uint32_t en = NVIC_GetEnableIRQ(OTG_HS_IRQn);
    HAL_NVIC_DisableIRQ(OTG_HS_IRQn);
    return en;
}
static inline void usb_unlock(uint32_t en)
{
    if (en) HAL_NVIC_EnableIRQ(OTG_HS_IRQn);
}

// Start the next TX chunk if the link is idle and data is queued. Callable from
// the ISR directly, or from the task WITH usb_lock() held.
static void tx_pump(void)
{
    if (tx_inflight != 0u) return;                 // a transfer is already running
    uint16_t head = tx_head;
    uint16_t tail = tx_tail;
    if (head == tail) return;                      // ring empty
    // Send only the contiguous run up to the ring end; the wrap remainder goes
    // out on the next completion.
    uint16_t contig = (head > tail) ? (uint16_t)(head - tail)
                                    : (uint16_t)(USB_TX_RING_SIZE - tail);
    tx_inflight = contig;
    if (CDC_Transmit_HS(&tx_ring[tail], contig) != USBD_OK)
    {
        tx_inflight = 0u;                          // couldn't start; retry on next pump
    }
}

// Transmission-complete callback (USB IN-complete ISR context).
static int8_t CDC_TransmitCplt_HS(uint8_t *Buf, uint32_t *Len, uint8_t epnum)
{
    (void) Buf;
    (void) Len;
    (void) epnum;

    tx_tail = (uint16_t)((tx_tail + tx_inflight) & (USB_TX_RING_SIZE - 1u));
    tx_inflight = 0u;
    tx_pump();                                     // kick the next chunk (ISR ctx)
    return USBD_OK;
}

// USB CDC requests callback
static int8_t CDC_Control_HS(uint8_t cmd, uint8_t* pbuf, uint16_t length)
{
    switch(cmd)
    {
        case CDC_SET_LINE_CODING:
        memcpy(line_coding, pbuf, sizeof(line_coding));
        break;

        case CDC_GET_LINE_CODING:
        memcpy(pbuf, line_coding, sizeof(line_coding));
        break;

        case CDC_SEND_ENCAPSULATED_COMMAND:
        case CDC_GET_ENCAPSULATED_RESPONSE:
        case CDC_SET_COMM_FEATURE:
        case CDC_GET_COMM_FEATURE:
        case CDC_CLEAR_COMM_FEATURE:
        case CDC_SET_CONTROL_LINE_STATE:
        case CDC_SEND_BREAK:
        default:
            break;
    }

    return USBD_OK;
}

// Data received callback (USB OUT-complete ISR context)
static int8_t CDC_Receive_HS(uint8_t* Buf, uint32_t *Len)
{
	USBD_CDC_SetRxBuffer(&hUsbDeviceHS, &Buf[0]);

    // Overflow guard: if this packet would overrun the unread window it_head, DROP
    // it (and count it) instead of silently overwriting/reordering unread bytes,
    // which would desync the XRCE/HDLC parser for good. Re-arm RX regardless.
    size_t used = (it_tail + USB_BUFFER_SIZE - it_head) % USB_BUFFER_SIZE;
    size_t freeb = USB_BUFFER_SIZE - 1u - used;
    if (*Len > freeb)
    {
        g_rx_overflow_count++;
        USBD_CDC_ReceivePacket(&hUsbDeviceHS);
        return USBD_OK;
    }

    // Circular buffer. NOTE: '>=' (not '>') so an exact-fill packet
    // (it_tail + *Len == USB_BUFFER_SIZE) takes the wrap branch and lands
    // it_tail back at 0 — with '>' it_tail could equal USB_BUFFER_SIZE (out of
    // the [0, SIZE-1] index space), which then never compares equal to it_head
    // in read() and over-reads stale bytes until the next packet re-wraps it.
    if ((it_tail + *Len) >= USB_BUFFER_SIZE)
	{
        size_t first_section = USB_BUFFER_SIZE - it_tail;
        size_t second_section = *Len - first_section;

		memcpy((void*) &storage_buffer[it_tail] , Buf, first_section);
		memcpy((void*) &storage_buffer[0] , &Buf[first_section], second_section);
        it_tail = second_section;
	}
    else
    {
		memcpy((void*) &storage_buffer[it_tail] , Buf, *Len);
		it_tail += *Len;
    }

	USBD_CDC_ReceivePacket(&hUsbDeviceHS);

	return (USBD_OK);
}

bool cubemx_transport_open(struct uxrCustomTransport * transport){

    if (!initialized)
    {
        // USB is initialized on generated main code: Replace default callbacks here
        USBD_Interface_fops_HS.Control = CDC_Control_HS;
        USBD_Interface_fops_HS.Receive = CDC_Receive_HS;
        USBD_Interface_fops_HS.TransmitCplt = CDC_TransmitCplt_HS;
        initialized = true;
    }

    // Reset both rings on every (re)open so a reconnect starts from a clean parse
    // state — leftover mid-frame bytes from a dropped session used to desync the
    // next handshake (issue #166 reconnect wedge).
    //
    // BEFORE zeroing the indices, tear down any IN transfer still referencing
    // tx_ring: with OTG DMA off the core streams the transfer incrementally from
    // ep->xfer_buff (a live pointer into tx_ring) for its whole lifetime, and a
    // host-stalled transfer (agent died, no re-enumeration — the fix/20 warm
    // reconnect) never completes on its own, so it would keep referencing tx_ring
    // while the next session overwrites tx_ring[0..]. Flush the endpoint and clear
    // TxState so the SPSC invariant can't be violated across the reset.
    uint32_t p = usb_lock();
    USBD_LL_FlushEP(&hUsbDeviceHS, CDC_IN_EP);
    USBD_CDC_HandleTypeDef *hcdc = (USBD_CDC_HandleTypeDef*)hUsbDeviceHS.pClassData;
    if (hcdc) hcdc->TxState = 0;
    it_head = it_tail = 0;
    tx_head = tx_tail = 0;
    tx_inflight = 0u;
    usb_unlock(p);

    return true;
}

bool cubemx_transport_close(struct uxrCustomTransport * transport){
    return true;
}

size_t cubemx_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err){

    if (len == 0u) return 0u;
    // A single frame must fit in the ring (XRCE stream MTU << ring size); if not,
    // it can never be enqueued — drop rather than spin forever.
    if (len > (USB_TX_RING_SIZE - 1u)) { g_tx_drop_count++; return 0u; }

    // All-or-nothing at the frame level (partial writes would corrupt XRCE framing):
    // wait, bounded, until the whole frame fits, then enqueue it atomically.
    int64_t start = uxr_millis();
    for (;;)
    {
        uint16_t used  = (uint16_t)((tx_head - tx_tail) & (USB_TX_RING_SIZE - 1u));
        uint16_t freeb = (uint16_t)(USB_TX_RING_SIZE - 1u - used);
        if (freeb >= len) break;

        uint32_t p = usb_lock(); tx_pump(); usb_unlock(p);   // make sure the drain is running
        if ((uxr_millis() - start) >= WRITE_TIMEOUT_MS) { g_tx_drop_count++; return 0u; }
        taskYIELD();
    }

    uint16_t head  = tx_head;
    uint16_t first = (uint16_t)(((USB_TX_RING_SIZE - head) < len) ? (USB_TX_RING_SIZE - head) : len);
    memcpy(&tx_ring[head], buf, first);
    if (len > first) memcpy(&tx_ring[0], buf + first, len - first);
    __DMB();                                                 // ring data visible before head advances
    tx_head = (uint16_t)((head + len) & (USB_TX_RING_SIZE - 1u));

    uint32_t p = usb_lock(); tx_pump(); usb_unlock(p);       // start a transfer if idle
    return len;
}

size_t cubemx_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err){

    int64_t start = uxr_millis();
    size_t readed = 0;

    do
    {
        if (it_head != it_tail)
        {
            while ((it_head != it_tail) && (readed < len)){
                buf[readed] = storage_buffer[it_head];
                it_head = (it_head + 1) % USB_BUFFER_SIZE;
                readed++;
            }

            break;
        }

       taskYIELD();
    } while ((uxr_millis() -  start) < timeout);

    return readed;
}

#endif
