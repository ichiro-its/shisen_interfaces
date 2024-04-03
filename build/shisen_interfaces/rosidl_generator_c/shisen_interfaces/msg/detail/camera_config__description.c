// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from shisen_interfaces:msg/CameraConfig.idl
// generated code does not contain a copyright notice

#include "shisen_interfaces/msg/detail/camera_config__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_shisen_interfaces
const rosidl_type_hash_t *
shisen_interfaces__msg__CameraConfig__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x39, 0xb8, 0x85, 0xfd, 0xa8, 0x3d, 0x97,
      0x53, 0xc8, 0x97, 0x17, 0x66, 0x7d, 0x1f, 0x55,
      0x44, 0xb9, 0x33, 0xe4, 0xea, 0xb4, 0xd7, 0xc6,
      0x4b, 0x67, 0xcf, 0x20, 0xa4, 0x36, 0x6c, 0xe8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char shisen_interfaces__msg__CameraConfig__TYPE_NAME[] = "shisen_interfaces/msg/CameraConfig";

// Define type names, field names, and default values
static char shisen_interfaces__msg__CameraConfig__FIELD_NAME__width[] = "width";
static char shisen_interfaces__msg__CameraConfig__DEFAULT_VALUE__width[] = "320";
static char shisen_interfaces__msg__CameraConfig__FIELD_NAME__height[] = "height";
static char shisen_interfaces__msg__CameraConfig__DEFAULT_VALUE__height[] = "240";
static char shisen_interfaces__msg__CameraConfig__FIELD_NAME__v_angle[] = "v_angle";
static char shisen_interfaces__msg__CameraConfig__DEFAULT_VALUE__v_angle[] = "-1.0";
static char shisen_interfaces__msg__CameraConfig__FIELD_NAME__h_angle[] = "h_angle";
static char shisen_interfaces__msg__CameraConfig__DEFAULT_VALUE__h_angle[] = "-1.0";

static rosidl_runtime_c__type_description__Field shisen_interfaces__msg__CameraConfig__FIELDS[] = {
  {
    {shisen_interfaces__msg__CameraConfig__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {shisen_interfaces__msg__CameraConfig__DEFAULT_VALUE__width, 3, 3},
  },
  {
    {shisen_interfaces__msg__CameraConfig__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {shisen_interfaces__msg__CameraConfig__DEFAULT_VALUE__height, 3, 3},
  },
  {
    {shisen_interfaces__msg__CameraConfig__FIELD_NAME__v_angle, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {shisen_interfaces__msg__CameraConfig__DEFAULT_VALUE__v_angle, 4, 4},
  },
  {
    {shisen_interfaces__msg__CameraConfig__FIELD_NAME__h_angle, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {shisen_interfaces__msg__CameraConfig__DEFAULT_VALUE__h_angle, 4, 4},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
shisen_interfaces__msg__CameraConfig__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {shisen_interfaces__msg__CameraConfig__TYPE_NAME, 34, 34},
      {shisen_interfaces__msg__CameraConfig__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 width 320\n"
  "int32 height 240\n"
  "float32 v_angle -1.0\n"
  "float32 h_angle -1.0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
shisen_interfaces__msg__CameraConfig__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {shisen_interfaces__msg__CameraConfig__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
shisen_interfaces__msg__CameraConfig__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *shisen_interfaces__msg__CameraConfig__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
