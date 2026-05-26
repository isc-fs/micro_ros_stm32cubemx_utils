// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dv_msgs:action/RuntimeControl.idl
// generated code does not contain a copyright notice

#ifndef DV_MSGS__ACTION__DETAIL__RUNTIME_CONTROL__STRUCT_H_
#define DV_MSGS__ACTION__DETAIL__RUNTIME_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RuntimeControl in the package dv_msgs.
typedef struct dv_msgs__action__RuntimeControl_Goal
{
  uint8_t structure_needs_at_least_one_member;
} dv_msgs__action__RuntimeControl_Goal;

// Struct for a sequence of dv_msgs__action__RuntimeControl_Goal.
typedef struct dv_msgs__action__RuntimeControl_Goal__Sequence
{
  dv_msgs__action__RuntimeControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dv_msgs__action__RuntimeControl_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'outcome'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RuntimeControl in the package dv_msgs.
typedef struct dv_msgs__action__RuntimeControl_Result
{
  rosidl_runtime_c__String outcome;
  /// Human-readable diagnostic; empty unless outcome=="error".
  rosidl_runtime_c__String message;
} dv_msgs__action__RuntimeControl_Result;

// Struct for a sequence of dv_msgs__action__RuntimeControl_Result.
typedef struct dv_msgs__action__RuntimeControl_Result__Sequence
{
  dv_msgs__action__RuntimeControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dv_msgs__action__RuntimeControl_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RuntimeControl in the package dv_msgs.
typedef struct dv_msgs__action__RuntimeControl_Feedback
{
  /// [-1.0, 1.0] — negative = regen
  float throttle;
  /// [-1.0, 1.0] — left positive
  float steering;
  /// true -> request EBS
  bool emergency;
  /// true -> mission complete
  bool finished;
  builtin_interfaces__msg__Time stamp;
} dv_msgs__action__RuntimeControl_Feedback;

// Struct for a sequence of dv_msgs__action__RuntimeControl_Feedback.
typedef struct dv_msgs__action__RuntimeControl_Feedback__Sequence
{
  dv_msgs__action__RuntimeControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dv_msgs__action__RuntimeControl_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "dv_msgs/action/detail/runtime_control__struct.h"

/// Struct defined in action/RuntimeControl in the package dv_msgs.
typedef struct dv_msgs__action__RuntimeControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  dv_msgs__action__RuntimeControl_Goal goal;
} dv_msgs__action__RuntimeControl_SendGoal_Request;

// Struct for a sequence of dv_msgs__action__RuntimeControl_SendGoal_Request.
typedef struct dv_msgs__action__RuntimeControl_SendGoal_Request__Sequence
{
  dv_msgs__action__RuntimeControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dv_msgs__action__RuntimeControl_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RuntimeControl in the package dv_msgs.
typedef struct dv_msgs__action__RuntimeControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} dv_msgs__action__RuntimeControl_SendGoal_Response;

// Struct for a sequence of dv_msgs__action__RuntimeControl_SendGoal_Response.
typedef struct dv_msgs__action__RuntimeControl_SendGoal_Response__Sequence
{
  dv_msgs__action__RuntimeControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dv_msgs__action__RuntimeControl_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RuntimeControl in the package dv_msgs.
typedef struct dv_msgs__action__RuntimeControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} dv_msgs__action__RuntimeControl_GetResult_Request;

// Struct for a sequence of dv_msgs__action__RuntimeControl_GetResult_Request.
typedef struct dv_msgs__action__RuntimeControl_GetResult_Request__Sequence
{
  dv_msgs__action__RuntimeControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dv_msgs__action__RuntimeControl_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "dv_msgs/action/detail/runtime_control__struct.h"

/// Struct defined in action/RuntimeControl in the package dv_msgs.
typedef struct dv_msgs__action__RuntimeControl_GetResult_Response
{
  int8_t status;
  dv_msgs__action__RuntimeControl_Result result;
} dv_msgs__action__RuntimeControl_GetResult_Response;

// Struct for a sequence of dv_msgs__action__RuntimeControl_GetResult_Response.
typedef struct dv_msgs__action__RuntimeControl_GetResult_Response__Sequence
{
  dv_msgs__action__RuntimeControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dv_msgs__action__RuntimeControl_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "dv_msgs/action/detail/runtime_control__struct.h"

/// Struct defined in action/RuntimeControl in the package dv_msgs.
typedef struct dv_msgs__action__RuntimeControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  dv_msgs__action__RuntimeControl_Feedback feedback;
} dv_msgs__action__RuntimeControl_FeedbackMessage;

// Struct for a sequence of dv_msgs__action__RuntimeControl_FeedbackMessage.
typedef struct dv_msgs__action__RuntimeControl_FeedbackMessage__Sequence
{
  dv_msgs__action__RuntimeControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dv_msgs__action__RuntimeControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DV_MSGS__ACTION__DETAIL__RUNTIME_CONTROL__STRUCT_H_
