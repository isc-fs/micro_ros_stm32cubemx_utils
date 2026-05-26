# dv_msgs

Custom ROS 2 interface package for the IFS08 uDV node, defining the
mission-orchestration actions shared between the autonomy stack and the
STM32 driverless controller.

## Contents

- `action/SetMission.action` — autonomy → uDV; selects the mission and
  prepares autonomy for runtime
- `action/RuntimeControl.action` — autonomy → uDV; carries the control
  loop during the mission and terminates with `finished`, `emergency`,
  `cancelled`, or `error`

## Schema source of truth

This package was reconstructed from firmware usage in
`Core/Src/ros_interface.cpp` and the atomic types declared in
`Core/Inc/ros_globals.h`. Field names and types are pinned by what the
firmware reads — changing them here will break the firmware build.

## Used by

- Firmware (this repo): baked into `libmicroros.a` via the micro-ROS
  library_generation workflow that consumes this folder.
- Autonomy stack: depends on this package to publish goals / consume
  feedback.

When this package needs to be consumed from another repo, copy the
folder or split it into its own repo and update the consumer.
