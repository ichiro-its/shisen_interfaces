// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shisen_interfaces:msg/SetCapture.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__STRUCT_H_
#define SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'json_capture'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SetCapture in the package shisen_interfaces.
typedef struct shisen_interfaces__msg__SetCapture
{
  rosidl_runtime_c__String json_capture;
} shisen_interfaces__msg__SetCapture;

// Struct for a sequence of shisen_interfaces__msg__SetCapture.
typedef struct shisen_interfaces__msg__SetCapture__Sequence
{
  shisen_interfaces__msg__SetCapture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shisen_interfaces__msg__SetCapture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__STRUCT_H_
