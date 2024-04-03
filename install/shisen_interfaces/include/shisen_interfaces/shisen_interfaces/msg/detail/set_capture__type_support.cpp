// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from shisen_interfaces:msg/SetCapture.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "shisen_interfaces/msg/detail/set_capture__functions.h"
#include "shisen_interfaces/msg/detail/set_capture__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace shisen_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SetCapture_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) shisen_interfaces::msg::SetCapture(_init);
}

void SetCapture_fini_function(void * message_memory)
{
  auto typed_message = static_cast<shisen_interfaces::msg::SetCapture *>(message_memory);
  typed_message->~SetCapture();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetCapture_message_member_array[1] = {
  {
    "json_capture",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces::msg::SetCapture, json_capture),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetCapture_message_members = {
  "shisen_interfaces::msg",  // message namespace
  "SetCapture",  // message name
  1,  // number of fields
  sizeof(shisen_interfaces::msg::SetCapture),
  SetCapture_message_member_array,  // message members
  SetCapture_init_function,  // function to initialize message memory (memory has to be allocated)
  SetCapture_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetCapture_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetCapture_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__msg__SetCapture__get_type_hash,
  &shisen_interfaces__msg__SetCapture__get_type_description,
  &shisen_interfaces__msg__SetCapture__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace shisen_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shisen_interfaces::msg::SetCapture>()
{
  return &::shisen_interfaces::msg::rosidl_typesupport_introspection_cpp::SetCapture_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shisen_interfaces, msg, SetCapture)() {
  return &::shisen_interfaces::msg::rosidl_typesupport_introspection_cpp::SetCapture_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
