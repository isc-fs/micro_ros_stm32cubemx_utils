// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dv_msgs:action/SetMission.idl
// generated code does not contain a copyright notice

#ifndef DV_MSGS__ACTION__DETAIL__SET_MISSION__FUNCTIONS_H_
#define DV_MSGS__ACTION__DETAIL__SET_MISSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dv_msgs/action/detail/set_mission__struct.h"

/// Initialize action/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dv_msgs__action__SetMission_Goal
 * )) before or use
 * dv_msgs__action__SetMission_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Goal__init(dv_msgs__action__SetMission_Goal * msg);

/// Finalize action/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Goal__fini(dv_msgs__action__SetMission_Goal * msg);

/// Create action/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dv_msgs__action__SetMission_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_Goal *
dv_msgs__action__SetMission_Goal__create();

/// Destroy action/SetMission message.
/**
 * It calls
 * dv_msgs__action__SetMission_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Goal__destroy(dv_msgs__action__SetMission_Goal * msg);

/// Check for action/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Goal__are_equal(const dv_msgs__action__SetMission_Goal * lhs, const dv_msgs__action__SetMission_Goal * rhs);

/// Copy a action/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Goal__copy(
  const dv_msgs__action__SetMission_Goal * input,
  dv_msgs__action__SetMission_Goal * output);

/// Initialize array of action/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * dv_msgs__action__SetMission_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Goal__Sequence__init(dv_msgs__action__SetMission_Goal__Sequence * array, size_t size);

/// Finalize array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Goal__Sequence__fini(dv_msgs__action__SetMission_Goal__Sequence * array);

/// Create array of action/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * dv_msgs__action__SetMission_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_Goal__Sequence *
dv_msgs__action__SetMission_Goal__Sequence__create(size_t size);

/// Destroy array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Goal__Sequence__destroy(dv_msgs__action__SetMission_Goal__Sequence * array);

/// Check for action/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Goal__Sequence__are_equal(const dv_msgs__action__SetMission_Goal__Sequence * lhs, const dv_msgs__action__SetMission_Goal__Sequence * rhs);

/// Copy an array of action/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Goal__Sequence__copy(
  const dv_msgs__action__SetMission_Goal__Sequence * input,
  dv_msgs__action__SetMission_Goal__Sequence * output);

/// Initialize action/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dv_msgs__action__SetMission_Result
 * )) before or use
 * dv_msgs__action__SetMission_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Result__init(dv_msgs__action__SetMission_Result * msg);

/// Finalize action/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Result__fini(dv_msgs__action__SetMission_Result * msg);

/// Create action/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dv_msgs__action__SetMission_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_Result *
dv_msgs__action__SetMission_Result__create();

/// Destroy action/SetMission message.
/**
 * It calls
 * dv_msgs__action__SetMission_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Result__destroy(dv_msgs__action__SetMission_Result * msg);

/// Check for action/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Result__are_equal(const dv_msgs__action__SetMission_Result * lhs, const dv_msgs__action__SetMission_Result * rhs);

/// Copy a action/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Result__copy(
  const dv_msgs__action__SetMission_Result * input,
  dv_msgs__action__SetMission_Result * output);

/// Initialize array of action/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * dv_msgs__action__SetMission_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Result__Sequence__init(dv_msgs__action__SetMission_Result__Sequence * array, size_t size);

/// Finalize array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Result__Sequence__fini(dv_msgs__action__SetMission_Result__Sequence * array);

/// Create array of action/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * dv_msgs__action__SetMission_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_Result__Sequence *
dv_msgs__action__SetMission_Result__Sequence__create(size_t size);

/// Destroy array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Result__Sequence__destroy(dv_msgs__action__SetMission_Result__Sequence * array);

/// Check for action/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Result__Sequence__are_equal(const dv_msgs__action__SetMission_Result__Sequence * lhs, const dv_msgs__action__SetMission_Result__Sequence * rhs);

/// Copy an array of action/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Result__Sequence__copy(
  const dv_msgs__action__SetMission_Result__Sequence * input,
  dv_msgs__action__SetMission_Result__Sequence * output);

/// Initialize action/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dv_msgs__action__SetMission_Feedback
 * )) before or use
 * dv_msgs__action__SetMission_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Feedback__init(dv_msgs__action__SetMission_Feedback * msg);

/// Finalize action/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Feedback__fini(dv_msgs__action__SetMission_Feedback * msg);

/// Create action/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dv_msgs__action__SetMission_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_Feedback *
dv_msgs__action__SetMission_Feedback__create();

/// Destroy action/SetMission message.
/**
 * It calls
 * dv_msgs__action__SetMission_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Feedback__destroy(dv_msgs__action__SetMission_Feedback * msg);

/// Check for action/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Feedback__are_equal(const dv_msgs__action__SetMission_Feedback * lhs, const dv_msgs__action__SetMission_Feedback * rhs);

/// Copy a action/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Feedback__copy(
  const dv_msgs__action__SetMission_Feedback * input,
  dv_msgs__action__SetMission_Feedback * output);

/// Initialize array of action/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * dv_msgs__action__SetMission_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Feedback__Sequence__init(dv_msgs__action__SetMission_Feedback__Sequence * array, size_t size);

/// Finalize array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Feedback__Sequence__fini(dv_msgs__action__SetMission_Feedback__Sequence * array);

/// Create array of action/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * dv_msgs__action__SetMission_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_Feedback__Sequence *
dv_msgs__action__SetMission_Feedback__Sequence__create(size_t size);

/// Destroy array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_Feedback__Sequence__destroy(dv_msgs__action__SetMission_Feedback__Sequence * array);

/// Check for action/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Feedback__Sequence__are_equal(const dv_msgs__action__SetMission_Feedback__Sequence * lhs, const dv_msgs__action__SetMission_Feedback__Sequence * rhs);

/// Copy an array of action/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_Feedback__Sequence__copy(
  const dv_msgs__action__SetMission_Feedback__Sequence * input,
  dv_msgs__action__SetMission_Feedback__Sequence * output);

/// Initialize action/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dv_msgs__action__SetMission_SendGoal_Request
 * )) before or use
 * dv_msgs__action__SetMission_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Request__init(dv_msgs__action__SetMission_SendGoal_Request * msg);

/// Finalize action/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_SendGoal_Request__fini(dv_msgs__action__SetMission_SendGoal_Request * msg);

/// Create action/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dv_msgs__action__SetMission_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_SendGoal_Request *
dv_msgs__action__SetMission_SendGoal_Request__create();

/// Destroy action/SetMission message.
/**
 * It calls
 * dv_msgs__action__SetMission_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_SendGoal_Request__destroy(dv_msgs__action__SetMission_SendGoal_Request * msg);

/// Check for action/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Request__are_equal(const dv_msgs__action__SetMission_SendGoal_Request * lhs, const dv_msgs__action__SetMission_SendGoal_Request * rhs);

/// Copy a action/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Request__copy(
  const dv_msgs__action__SetMission_SendGoal_Request * input,
  dv_msgs__action__SetMission_SendGoal_Request * output);

/// Initialize array of action/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * dv_msgs__action__SetMission_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Request__Sequence__init(dv_msgs__action__SetMission_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_SendGoal_Request__Sequence__fini(dv_msgs__action__SetMission_SendGoal_Request__Sequence * array);

/// Create array of action/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * dv_msgs__action__SetMission_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_SendGoal_Request__Sequence *
dv_msgs__action__SetMission_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_SendGoal_Request__Sequence__destroy(dv_msgs__action__SetMission_SendGoal_Request__Sequence * array);

/// Check for action/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Request__Sequence__are_equal(const dv_msgs__action__SetMission_SendGoal_Request__Sequence * lhs, const dv_msgs__action__SetMission_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Request__Sequence__copy(
  const dv_msgs__action__SetMission_SendGoal_Request__Sequence * input,
  dv_msgs__action__SetMission_SendGoal_Request__Sequence * output);

/// Initialize action/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dv_msgs__action__SetMission_SendGoal_Response
 * )) before or use
 * dv_msgs__action__SetMission_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Response__init(dv_msgs__action__SetMission_SendGoal_Response * msg);

/// Finalize action/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_SendGoal_Response__fini(dv_msgs__action__SetMission_SendGoal_Response * msg);

/// Create action/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dv_msgs__action__SetMission_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_SendGoal_Response *
dv_msgs__action__SetMission_SendGoal_Response__create();

/// Destroy action/SetMission message.
/**
 * It calls
 * dv_msgs__action__SetMission_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_SendGoal_Response__destroy(dv_msgs__action__SetMission_SendGoal_Response * msg);

/// Check for action/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Response__are_equal(const dv_msgs__action__SetMission_SendGoal_Response * lhs, const dv_msgs__action__SetMission_SendGoal_Response * rhs);

/// Copy a action/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Response__copy(
  const dv_msgs__action__SetMission_SendGoal_Response * input,
  dv_msgs__action__SetMission_SendGoal_Response * output);

/// Initialize array of action/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * dv_msgs__action__SetMission_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Response__Sequence__init(dv_msgs__action__SetMission_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_SendGoal_Response__Sequence__fini(dv_msgs__action__SetMission_SendGoal_Response__Sequence * array);

/// Create array of action/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * dv_msgs__action__SetMission_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_SendGoal_Response__Sequence *
dv_msgs__action__SetMission_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_SendGoal_Response__Sequence__destroy(dv_msgs__action__SetMission_SendGoal_Response__Sequence * array);

/// Check for action/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Response__Sequence__are_equal(const dv_msgs__action__SetMission_SendGoal_Response__Sequence * lhs, const dv_msgs__action__SetMission_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_SendGoal_Response__Sequence__copy(
  const dv_msgs__action__SetMission_SendGoal_Response__Sequence * input,
  dv_msgs__action__SetMission_SendGoal_Response__Sequence * output);

/// Initialize action/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dv_msgs__action__SetMission_GetResult_Request
 * )) before or use
 * dv_msgs__action__SetMission_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Request__init(dv_msgs__action__SetMission_GetResult_Request * msg);

/// Finalize action/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_GetResult_Request__fini(dv_msgs__action__SetMission_GetResult_Request * msg);

/// Create action/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dv_msgs__action__SetMission_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_GetResult_Request *
dv_msgs__action__SetMission_GetResult_Request__create();

/// Destroy action/SetMission message.
/**
 * It calls
 * dv_msgs__action__SetMission_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_GetResult_Request__destroy(dv_msgs__action__SetMission_GetResult_Request * msg);

/// Check for action/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Request__are_equal(const dv_msgs__action__SetMission_GetResult_Request * lhs, const dv_msgs__action__SetMission_GetResult_Request * rhs);

/// Copy a action/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Request__copy(
  const dv_msgs__action__SetMission_GetResult_Request * input,
  dv_msgs__action__SetMission_GetResult_Request * output);

/// Initialize array of action/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * dv_msgs__action__SetMission_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Request__Sequence__init(dv_msgs__action__SetMission_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_GetResult_Request__Sequence__fini(dv_msgs__action__SetMission_GetResult_Request__Sequence * array);

/// Create array of action/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * dv_msgs__action__SetMission_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_GetResult_Request__Sequence *
dv_msgs__action__SetMission_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_GetResult_Request__Sequence__destroy(dv_msgs__action__SetMission_GetResult_Request__Sequence * array);

/// Check for action/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Request__Sequence__are_equal(const dv_msgs__action__SetMission_GetResult_Request__Sequence * lhs, const dv_msgs__action__SetMission_GetResult_Request__Sequence * rhs);

/// Copy an array of action/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Request__Sequence__copy(
  const dv_msgs__action__SetMission_GetResult_Request__Sequence * input,
  dv_msgs__action__SetMission_GetResult_Request__Sequence * output);

/// Initialize action/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dv_msgs__action__SetMission_GetResult_Response
 * )) before or use
 * dv_msgs__action__SetMission_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Response__init(dv_msgs__action__SetMission_GetResult_Response * msg);

/// Finalize action/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_GetResult_Response__fini(dv_msgs__action__SetMission_GetResult_Response * msg);

/// Create action/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dv_msgs__action__SetMission_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_GetResult_Response *
dv_msgs__action__SetMission_GetResult_Response__create();

/// Destroy action/SetMission message.
/**
 * It calls
 * dv_msgs__action__SetMission_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_GetResult_Response__destroy(dv_msgs__action__SetMission_GetResult_Response * msg);

/// Check for action/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Response__are_equal(const dv_msgs__action__SetMission_GetResult_Response * lhs, const dv_msgs__action__SetMission_GetResult_Response * rhs);

/// Copy a action/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Response__copy(
  const dv_msgs__action__SetMission_GetResult_Response * input,
  dv_msgs__action__SetMission_GetResult_Response * output);

/// Initialize array of action/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * dv_msgs__action__SetMission_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Response__Sequence__init(dv_msgs__action__SetMission_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_GetResult_Response__Sequence__fini(dv_msgs__action__SetMission_GetResult_Response__Sequence * array);

/// Create array of action/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * dv_msgs__action__SetMission_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_GetResult_Response__Sequence *
dv_msgs__action__SetMission_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_GetResult_Response__Sequence__destroy(dv_msgs__action__SetMission_GetResult_Response__Sequence * array);

/// Check for action/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Response__Sequence__are_equal(const dv_msgs__action__SetMission_GetResult_Response__Sequence * lhs, const dv_msgs__action__SetMission_GetResult_Response__Sequence * rhs);

/// Copy an array of action/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_GetResult_Response__Sequence__copy(
  const dv_msgs__action__SetMission_GetResult_Response__Sequence * input,
  dv_msgs__action__SetMission_GetResult_Response__Sequence * output);

/// Initialize action/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dv_msgs__action__SetMission_FeedbackMessage
 * )) before or use
 * dv_msgs__action__SetMission_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_FeedbackMessage__init(dv_msgs__action__SetMission_FeedbackMessage * msg);

/// Finalize action/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_FeedbackMessage__fini(dv_msgs__action__SetMission_FeedbackMessage * msg);

/// Create action/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dv_msgs__action__SetMission_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_FeedbackMessage *
dv_msgs__action__SetMission_FeedbackMessage__create();

/// Destroy action/SetMission message.
/**
 * It calls
 * dv_msgs__action__SetMission_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_FeedbackMessage__destroy(dv_msgs__action__SetMission_FeedbackMessage * msg);

/// Check for action/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_FeedbackMessage__are_equal(const dv_msgs__action__SetMission_FeedbackMessage * lhs, const dv_msgs__action__SetMission_FeedbackMessage * rhs);

/// Copy a action/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_FeedbackMessage__copy(
  const dv_msgs__action__SetMission_FeedbackMessage * input,
  dv_msgs__action__SetMission_FeedbackMessage * output);

/// Initialize array of action/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * dv_msgs__action__SetMission_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_FeedbackMessage__Sequence__init(dv_msgs__action__SetMission_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_FeedbackMessage__Sequence__fini(dv_msgs__action__SetMission_FeedbackMessage__Sequence * array);

/// Create array of action/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * dv_msgs__action__SetMission_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
dv_msgs__action__SetMission_FeedbackMessage__Sequence *
dv_msgs__action__SetMission_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/SetMission messages.
/**
 * It calls
 * dv_msgs__action__SetMission_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
void
dv_msgs__action__SetMission_FeedbackMessage__Sequence__destroy(dv_msgs__action__SetMission_FeedbackMessage__Sequence * array);

/// Check for action/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_FeedbackMessage__Sequence__are_equal(const dv_msgs__action__SetMission_FeedbackMessage__Sequence * lhs, const dv_msgs__action__SetMission_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dv_msgs
bool
dv_msgs__action__SetMission_FeedbackMessage__Sequence__copy(
  const dv_msgs__action__SetMission_FeedbackMessage__Sequence * input,
  dv_msgs__action__SetMission_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DV_MSGS__ACTION__DETAIL__SET_MISSION__FUNCTIONS_H_
