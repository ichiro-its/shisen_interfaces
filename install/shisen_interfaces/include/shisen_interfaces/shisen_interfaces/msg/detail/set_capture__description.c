// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from shisen_interfaces:msg/SetCapture.idl
// generated code does not contain a copyright notice

#include "shisen_interfaces/msg/detail/set_capture__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_shisen_interfaces
const rosidl_type_hash_t *
shisen_interfaces__msg__SetCapture__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0x7d, 0x71, 0x85, 0x6a, 0xb1, 0xee, 0xe0,
      0xd1, 0x2d, 0x99, 0x29, 0x91, 0xd3, 0x4d, 0x06,
      0x99, 0x21, 0xf2, 0xed, 0x69, 0xcc, 0x4b, 0xeb,
      0xca, 0x3a, 0x97, 0x67, 0x9a, 0x9c, 0xc9, 0x8f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char shisen_interfaces__msg__SetCapture__TYPE_NAME[] = "shisen_interfaces/msg/SetCapture";

// Define type names, field names, and default values
static char shisen_interfaces__msg__SetCapture__FIELD_NAME__json_capture[] = "json_capture";

static rosidl_runtime_c__type_description__Field shisen_interfaces__msg__SetCapture__FIELDS[] = {
  {
    {shisen_interfaces__msg__SetCapture__FIELD_NAME__json_capture, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
shisen_interfaces__msg__SetCapture__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {shisen_interfaces__msg__SetCapture__TYPE_NAME, 32, 32},
      {shisen_interfaces__msg__SetCapture__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string json_capture";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
shisen_interfaces__msg__SetCapture__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {shisen_interfaces__msg__SetCapture__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 20, 20},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
shisen_interfaces__msg__SetCapture__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *shisen_interfaces__msg__SetCapture__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
