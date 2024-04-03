// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from shisen_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#include "shisen_interfaces/msg/detail/image__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_shisen_interfaces
const rosidl_type_hash_t *
shisen_interfaces__msg__Image__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0x0c, 0xaa, 0x35, 0x51, 0x3d, 0x02, 0xa5,
      0xfe, 0x6e, 0xa2, 0xba, 0x09, 0xc4, 0x4b, 0xc7,
      0x84, 0x7d, 0x85, 0x99, 0xa8, 0x7d, 0xae, 0xac,
      0x57, 0x60, 0xae, 0x75, 0xba, 0x16, 0x63, 0x51,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char shisen_interfaces__msg__Image__TYPE_NAME[] = "shisen_interfaces/msg/Image";

// Define type names, field names, and default values
static char shisen_interfaces__msg__Image__FIELD_NAME__cols[] = "cols";
static char shisen_interfaces__msg__Image__DEFAULT_VALUE__cols[] = "320";
static char shisen_interfaces__msg__Image__FIELD_NAME__rows[] = "rows";
static char shisen_interfaces__msg__Image__DEFAULT_VALUE__rows[] = "240";
static char shisen_interfaces__msg__Image__FIELD_NAME__channels[] = "channels";
static char shisen_interfaces__msg__Image__DEFAULT_VALUE__channels[] = "3";
static char shisen_interfaces__msg__Image__FIELD_NAME__quality[] = "quality";
static char shisen_interfaces__msg__Image__DEFAULT_VALUE__quality[] = "-1";
static char shisen_interfaces__msg__Image__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field shisen_interfaces__msg__Image__FIELDS[] = {
  {
    {shisen_interfaces__msg__Image__FIELD_NAME__cols, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {shisen_interfaces__msg__Image__DEFAULT_VALUE__cols, 3, 3},
  },
  {
    {shisen_interfaces__msg__Image__FIELD_NAME__rows, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {shisen_interfaces__msg__Image__DEFAULT_VALUE__rows, 3, 3},
  },
  {
    {shisen_interfaces__msg__Image__FIELD_NAME__channels, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {shisen_interfaces__msg__Image__DEFAULT_VALUE__channels, 1, 1},
  },
  {
    {shisen_interfaces__msg__Image__FIELD_NAME__quality, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {shisen_interfaces__msg__Image__DEFAULT_VALUE__quality, 2, 2},
  },
  {
    {shisen_interfaces__msg__Image__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BYTE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
shisen_interfaces__msg__Image__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {shisen_interfaces__msg__Image__TYPE_NAME, 27, 27},
      {shisen_interfaces__msg__Image__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 cols 320\n"
  "int32 rows 240\n"
  "int32 channels 3\n"
  "int32 quality -1\n"
  "byte[] data\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
shisen_interfaces__msg__Image__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {shisen_interfaces__msg__Image__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 78, 78},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
shisen_interfaces__msg__Image__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *shisen_interfaces__msg__Image__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
