// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shisen_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_H_
#define SHISEN_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Image in the package shisen_interfaces.
typedef struct shisen_interfaces__msg__Image
{
  int32_t cols;
  int32_t rows;
  int32_t channels;
  int32_t quality;
  rosidl_runtime_c__octet__Sequence data;
} shisen_interfaces__msg__Image;

// Struct for a sequence of shisen_interfaces__msg__Image.
typedef struct shisen_interfaces__msg__Image__Sequence
{
  shisen_interfaces__msg__Image * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shisen_interfaces__msg__Image__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHISEN_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_H_
