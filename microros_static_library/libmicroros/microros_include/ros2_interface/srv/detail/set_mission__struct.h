// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:srv/SetMission.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__SRV__DETAIL__SET_MISSION__STRUCT_H_
#define ROS2_INTERFACE__SRV__DETAIL__SET_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetMission in the package ros2_interface.
typedef struct ros2_interface__srv__SetMission_Request
{
  int32_t mission_id;
} ros2_interface__srv__SetMission_Request;

// Struct for a sequence of ros2_interface__srv__SetMission_Request.
typedef struct ros2_interface__srv__SetMission_Request__Sequence
{
  ros2_interface__srv__SetMission_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__srv__SetMission_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetMission in the package ros2_interface.
typedef struct ros2_interface__srv__SetMission_Response
{
  bool accepted;
} ros2_interface__srv__SetMission_Response;

// Struct for a sequence of ros2_interface__srv__SetMission_Response.
typedef struct ros2_interface__srv__SetMission_Response__Sequence
{
  ros2_interface__srv__SetMission_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__srv__SetMission_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__SRV__DETAIL__SET_MISSION__STRUCT_H_
