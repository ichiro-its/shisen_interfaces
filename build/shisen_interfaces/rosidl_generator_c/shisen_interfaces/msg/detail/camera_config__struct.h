// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shisen_interfaces:msg/CameraConfig.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__STRUCT_H_
#define SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CameraConfig in the package shisen_interfaces.
typedef struct shisen_interfaces__msg__CameraConfig
{
  int32_t width;
  int32_t height;
  float v_angle;
  float h_angle;
} shisen_interfaces__msg__CameraConfig;

// Struct for a sequence of shisen_interfaces__msg__CameraConfig.
typedef struct shisen_interfaces__msg__CameraConfig__Sequence
{
  shisen_interfaces__msg__CameraConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shisen_interfaces__msg__CameraConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__STRUCT_H_
