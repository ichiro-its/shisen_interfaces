// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from shisen_interfaces:msg/CameraConfig.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "shisen_interfaces/msg/detail/camera_config__functions.h"
#include "shisen_interfaces/msg/detail/camera_config__struct.hpp"
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

void CameraConfig_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) shisen_interfaces::msg::CameraConfig(_init);
}

void CameraConfig_fini_function(void * message_memory)
{
  auto typed_message = static_cast<shisen_interfaces::msg::CameraConfig *>(message_memory);
  typed_message->~CameraConfig();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraConfig_message_member_array[4] = {
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces::msg::CameraConfig, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces::msg::CameraConfig, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "v_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces::msg::CameraConfig, v_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "h_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces::msg::CameraConfig, h_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraConfig_message_members = {
  "shisen_interfaces::msg",  // message namespace
  "CameraConfig",  // message name
  4,  // number of fields
  sizeof(shisen_interfaces::msg::CameraConfig),
  CameraConfig_message_member_array,  // message members
  CameraConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraConfig_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraConfig_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraConfig_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__msg__CameraConfig__get_type_hash,
  &shisen_interfaces__msg__CameraConfig__get_type_description,
  &shisen_interfaces__msg__CameraConfig__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace shisen_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shisen_interfaces::msg::CameraConfig>()
{
  return &::shisen_interfaces::msg::rosidl_typesupport_introspection_cpp::CameraConfig_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shisen_interfaces, msg, CameraConfig)() {
  return &::shisen_interfaces::msg::rosidl_typesupport_introspection_cpp::CameraConfig_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
