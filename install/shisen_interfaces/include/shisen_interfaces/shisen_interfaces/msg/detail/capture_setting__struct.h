// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shisen_interfaces:msg/CaptureSetting.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__STRUCT_H_
#define SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'brightness'
// Member 'contrast'
// Member 'saturation'
// Member 'temperature'
// Member 'hue'
// Member 'gain'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// brightness
enum
{
  shisen_interfaces__msg__CaptureSetting__brightness__MAX_SIZE = 1
};
// contrast
enum
{
  shisen_interfaces__msg__CaptureSetting__contrast__MAX_SIZE = 1
};
// saturation
enum
{
  shisen_interfaces__msg__CaptureSetting__saturation__MAX_SIZE = 1
};
// temperature
enum
{
  shisen_interfaces__msg__CaptureSetting__temperature__MAX_SIZE = 1
};
// hue
enum
{
  shisen_interfaces__msg__CaptureSetting__hue__MAX_SIZE = 1
};
// gain
enum
{
  shisen_interfaces__msg__CaptureSetting__gain__MAX_SIZE = 1
};

/// Struct defined in msg/CaptureSetting in the package shisen_interfaces.
typedef struct shisen_interfaces__msg__CaptureSetting
{
  rosidl_runtime_c__int32__Sequence brightness;
  rosidl_runtime_c__int32__Sequence contrast;
  rosidl_runtime_c__int32__Sequence saturation;
  rosidl_runtime_c__int32__Sequence temperature;
  rosidl_runtime_c__int32__Sequence hue;
  rosidl_runtime_c__int32__Sequence gain;
} shisen_interfaces__msg__CaptureSetting;

// Struct for a sequence of shisen_interfaces__msg__CaptureSetting.
typedef struct shisen_interfaces__msg__CaptureSetting__Sequence
{
  shisen_interfaces__msg__CaptureSetting * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shisen_interfaces__msg__CaptureSetting__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__STRUCT_H_
