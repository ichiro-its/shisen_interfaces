// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shisen_interfaces:srv/ConfigureCaptureSetting.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__STRUCT_H_
#define SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'capture_setting'
#include "shisen_interfaces/msg/detail/capture_setting__struct.h"

// constants for array fields with an upper bound
// capture_setting
enum
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__capture_setting__MAX_SIZE = 1
};

/// Struct defined in srv/ConfigureCaptureSetting in the package shisen_interfaces.
typedef struct shisen_interfaces__srv__ConfigureCaptureSetting_Request
{
  shisen_interfaces__msg__CaptureSetting__Sequence capture_setting;
} shisen_interfaces__srv__ConfigureCaptureSetting_Request;

// Struct for a sequence of shisen_interfaces__srv__ConfigureCaptureSetting_Request.
typedef struct shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'capture_setting'
// already included above
// #include "shisen_interfaces/msg/detail/capture_setting__struct.h"

// constants for array fields with an upper bound
// capture_setting
enum
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__capture_setting__MAX_SIZE = 1
};

/// Struct defined in srv/ConfigureCaptureSetting in the package shisen_interfaces.
typedef struct shisen_interfaces__srv__ConfigureCaptureSetting_Response
{
  shisen_interfaces__msg__CaptureSetting__Sequence capture_setting;
} shisen_interfaces__srv__ConfigureCaptureSetting_Response;

// Struct for a sequence of shisen_interfaces__srv__ConfigureCaptureSetting_Response.
typedef struct shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__request__MAX_SIZE = 1
};
// response
enum
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ConfigureCaptureSetting in the package shisen_interfaces.
typedef struct shisen_interfaces__srv__ConfigureCaptureSetting_Event
{
  service_msgs__msg__ServiceEventInfo info;
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence request;
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence response;
} shisen_interfaces__srv__ConfigureCaptureSetting_Event;

// Struct for a sequence of shisen_interfaces__srv__ConfigureCaptureSetting_Event.
typedef struct shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__STRUCT_H_
