// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from shisen_interfaces:msg/CaptureSetting.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "shisen_interfaces/msg/detail/capture_setting__rosidl_typesupport_introspection_c.h"
#include "shisen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "shisen_interfaces/msg/detail/capture_setting__functions.h"
#include "shisen_interfaces/msg/detail/capture_setting__struct.h"


// Include directives for member types
// Member `brightness`
// Member `contrast`
// Member `saturation`
// Member `temperature`
// Member `hue`
// Member `gain`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shisen_interfaces__msg__CaptureSetting__init(message_memory);
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_fini_function(void * message_memory)
{
  shisen_interfaces__msg__CaptureSetting__fini(message_memory);
}

size_t shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__brightness(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__brightness(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__brightness(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__brightness(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__brightness(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__brightness(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__brightness(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__brightness(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__contrast(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__contrast(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__contrast(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__contrast(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__contrast(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__contrast(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__contrast(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__contrast(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__saturation(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__saturation(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__saturation(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__saturation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__saturation(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__saturation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__saturation(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__saturation(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__temperature(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__temperature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__temperature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__temperature(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__temperature(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__temperature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__hue(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__hue(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__hue(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__hue(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__hue(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__hue(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__hue(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__hue(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__gain(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__gain(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__gain(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__gain(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__gain(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__gain(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__gain(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__gain(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_message_member_array[6] = {
  {
    "brightness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__msg__CaptureSetting, brightness),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__brightness,  // size() function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__brightness,  // get_const(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__brightness,  // get(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__brightness,  // fetch(index, &value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__brightness,  // assign(index, value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__brightness  // resize(index) function pointer
  },
  {
    "contrast",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__msg__CaptureSetting, contrast),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__contrast,  // size() function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__contrast,  // get_const(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__contrast,  // get(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__contrast,  // fetch(index, &value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__contrast,  // assign(index, value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__contrast  // resize(index) function pointer
  },
  {
    "saturation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__msg__CaptureSetting, saturation),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__saturation,  // size() function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__saturation,  // get_const(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__saturation,  // get(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__saturation,  // fetch(index, &value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__saturation,  // assign(index, value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__saturation  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__msg__CaptureSetting, temperature),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__temperature,  // size() function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__temperature,  // get_const(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__temperature,  // get(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__temperature,  // fetch(index, &value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__temperature,  // assign(index, value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__temperature  // resize(index) function pointer
  },
  {
    "hue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__msg__CaptureSetting, hue),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__hue,  // size() function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__hue,  // get_const(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__hue,  // get(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__hue,  // fetch(index, &value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__hue,  // assign(index, value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__hue  // resize(index) function pointer
  },
  {
    "gain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__msg__CaptureSetting, gain),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__size_function__CaptureSetting__gain,  // size() function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_const_function__CaptureSetting__gain,  // get_const(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__get_function__CaptureSetting__gain,  // get(index) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__fetch_function__CaptureSetting__gain,  // fetch(index, &value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__assign_function__CaptureSetting__gain,  // assign(index, value) function pointer
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__resize_function__CaptureSetting__gain  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_message_members = {
  "shisen_interfaces__msg",  // message namespace
  "CaptureSetting",  // message name
  6,  // number of fields
  sizeof(shisen_interfaces__msg__CaptureSetting),
  shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_message_member_array,  // message members
  shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_init_function,  // function to initialize message memory (memory has to be allocated)
  shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_message_type_support_handle = {
  0,
  &shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__msg__CaptureSetting__get_type_hash,
  &shisen_interfaces__msg__CaptureSetting__get_type_description,
  &shisen_interfaces__msg__CaptureSetting__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shisen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, msg, CaptureSetting)() {
  if (!shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_message_type_support_handle.typesupport_identifier) {
    shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shisen_interfaces__msg__CaptureSetting__rosidl_typesupport_introspection_c__CaptureSetting_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
