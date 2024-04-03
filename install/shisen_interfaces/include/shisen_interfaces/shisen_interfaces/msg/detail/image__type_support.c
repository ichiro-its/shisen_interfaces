// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from shisen_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "shisen_interfaces/msg/detail/image__rosidl_typesupport_introspection_c.h"
#include "shisen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "shisen_interfaces/msg/detail/image__functions.h"
#include "shisen_interfaces/msg/detail/image__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shisen_interfaces__msg__Image__init(message_memory);
}

void shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_fini_function(void * message_memory)
{
  shisen_interfaces__msg__Image__fini(message_memory);
}

size_t shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__size_function__Image__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__octet__Sequence * member =
    (const rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__get_const_function__Image__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__octet__Sequence * member =
    (const rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__get_function__Image__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__octet__Sequence * member =
    (rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__fetch_function__Image__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__get_const_function__Image__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__assign_function__Image__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__get_function__Image__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__resize_function__Image__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__octet__Sequence * member =
    (rosidl_runtime_c__octet__Sequence *)(untyped_member);
  rosidl_runtime_c__octet__Sequence__fini(member);
  return rosidl_runtime_c__octet__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_member_array[5] = {
  {
    "cols",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces__msg__Image, cols),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rows",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces__msg__Image, rows),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces__msg__Image, channels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces__msg__Image, quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces__msg__Image, data),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__size_function__Image__data,  // size() function pointer
    shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__get_const_function__Image__data,  // get_const(index) function pointer
    shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__get_function__Image__data,  // get(index) function pointer
    shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__fetch_function__Image__data,  // fetch(index, &value) function pointer
    shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__assign_function__Image__data,  // assign(index, value) function pointer
    shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__resize_function__Image__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_members = {
  "shisen_interfaces__msg",  // message namespace
  "Image",  // message name
  5,  // number of fields
  sizeof(shisen_interfaces__msg__Image),
  shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_member_array,  // message members
  shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_init_function,  // function to initialize message memory (memory has to be allocated)
  shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_type_support_handle = {
  0,
  &shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__msg__Image__get_type_hash,
  &shisen_interfaces__msg__Image__get_type_description,
  &shisen_interfaces__msg__Image__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shisen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, msg, Image)() {
  if (!shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_type_support_handle.typesupport_identifier) {
    shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shisen_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
