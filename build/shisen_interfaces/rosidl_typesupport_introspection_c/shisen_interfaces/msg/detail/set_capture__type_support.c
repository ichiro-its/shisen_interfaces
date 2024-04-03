// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from shisen_interfaces:msg/SetCapture.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "shisen_interfaces/msg/detail/set_capture__rosidl_typesupport_introspection_c.h"
#include "shisen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "shisen_interfaces/msg/detail/set_capture__functions.h"
#include "shisen_interfaces/msg/detail/set_capture__struct.h"


// Include directives for member types
// Member `json_capture`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shisen_interfaces__msg__SetCapture__init(message_memory);
}

void shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_fini_function(void * message_memory)
{
  shisen_interfaces__msg__SetCapture__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_message_member_array[1] = {
  {
    "json_capture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces__msg__SetCapture, json_capture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_message_members = {
  "shisen_interfaces__msg",  // message namespace
  "SetCapture",  // message name
  1,  // number of fields
  sizeof(shisen_interfaces__msg__SetCapture),
  shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_message_member_array,  // message members
  shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_init_function,  // function to initialize message memory (memory has to be allocated)
  shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_message_type_support_handle = {
  0,
  &shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__msg__SetCapture__get_type_hash,
  &shisen_interfaces__msg__SetCapture__get_type_description,
  &shisen_interfaces__msg__SetCapture__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shisen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, msg, SetCapture)() {
  if (!shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_message_type_support_handle.typesupport_identifier) {
    shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shisen_interfaces__msg__SetCapture__rosidl_typesupport_introspection_c__SetCapture_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
