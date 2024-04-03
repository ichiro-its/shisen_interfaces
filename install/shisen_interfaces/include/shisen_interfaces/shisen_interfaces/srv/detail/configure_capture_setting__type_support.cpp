// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from shisen_interfaces:srv/ConfigureCaptureSetting.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
#include "shisen_interfaces/srv/detail/configure_capture_setting__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace shisen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ConfigureCaptureSetting_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) shisen_interfaces::srv::ConfigureCaptureSetting_Request(_init);
}

void ConfigureCaptureSetting_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<shisen_interfaces::srv::ConfigureCaptureSetting_Request *>(message_memory);
  typed_message->~ConfigureCaptureSetting_Request();
}

size_t size_function__ConfigureCaptureSetting_Request__capture_setting(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<shisen_interfaces::msg::CaptureSetting> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConfigureCaptureSetting_Request__capture_setting(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<shisen_interfaces::msg::CaptureSetting> *>(untyped_member);
  return &member[index];
}

void * get_function__ConfigureCaptureSetting_Request__capture_setting(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<shisen_interfaces::msg::CaptureSetting> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConfigureCaptureSetting_Request__capture_setting(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const shisen_interfaces::msg::CaptureSetting *>(
    get_const_function__ConfigureCaptureSetting_Request__capture_setting(untyped_member, index));
  auto & value = *reinterpret_cast<shisen_interfaces::msg::CaptureSetting *>(untyped_value);
  value = item;
}

void assign_function__ConfigureCaptureSetting_Request__capture_setting(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<shisen_interfaces::msg::CaptureSetting *>(
    get_function__ConfigureCaptureSetting_Request__capture_setting(untyped_member, index));
  const auto & value = *reinterpret_cast<const shisen_interfaces::msg::CaptureSetting *>(untyped_value);
  item = value;
}

void resize_function__ConfigureCaptureSetting_Request__capture_setting(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<shisen_interfaces::msg::CaptureSetting> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConfigureCaptureSetting_Request_message_member_array[1] = {
  {
    "capture_setting",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shisen_interfaces::msg::CaptureSetting>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::srv::ConfigureCaptureSetting_Request, capture_setting),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConfigureCaptureSetting_Request__capture_setting,  // size() function pointer
    get_const_function__ConfigureCaptureSetting_Request__capture_setting,  // get_const(index) function pointer
    get_function__ConfigureCaptureSetting_Request__capture_setting,  // get(index) function pointer
    fetch_function__ConfigureCaptureSetting_Request__capture_setting,  // fetch(index, &value) function pointer
    assign_function__ConfigureCaptureSetting_Request__capture_setting,  // assign(index, value) function pointer
    resize_function__ConfigureCaptureSetting_Request__capture_setting  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConfigureCaptureSetting_Request_message_members = {
  "shisen_interfaces::srv",  // message namespace
  "ConfigureCaptureSetting_Request",  // message name
  1,  // number of fields
  sizeof(shisen_interfaces::srv::ConfigureCaptureSetting_Request),
  ConfigureCaptureSetting_Request_message_member_array,  // message members
  ConfigureCaptureSetting_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureCaptureSetting_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConfigureCaptureSetting_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureCaptureSetting_Request_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace shisen_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting_Request>()
{
  return &::shisen_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureCaptureSetting_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shisen_interfaces, srv, ConfigureCaptureSetting_Request)() {
  return &::shisen_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureCaptureSetting_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace shisen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ConfigureCaptureSetting_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) shisen_interfaces::srv::ConfigureCaptureSetting_Response(_init);
}

void ConfigureCaptureSetting_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<shisen_interfaces::srv::ConfigureCaptureSetting_Response *>(message_memory);
  typed_message->~ConfigureCaptureSetting_Response();
}

size_t size_function__ConfigureCaptureSetting_Response__capture_setting(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<shisen_interfaces::msg::CaptureSetting> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConfigureCaptureSetting_Response__capture_setting(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<shisen_interfaces::msg::CaptureSetting> *>(untyped_member);
  return &member[index];
}

void * get_function__ConfigureCaptureSetting_Response__capture_setting(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<shisen_interfaces::msg::CaptureSetting> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConfigureCaptureSetting_Response__capture_setting(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const shisen_interfaces::msg::CaptureSetting *>(
    get_const_function__ConfigureCaptureSetting_Response__capture_setting(untyped_member, index));
  auto & value = *reinterpret_cast<shisen_interfaces::msg::CaptureSetting *>(untyped_value);
  value = item;
}

void assign_function__ConfigureCaptureSetting_Response__capture_setting(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<shisen_interfaces::msg::CaptureSetting *>(
    get_function__ConfigureCaptureSetting_Response__capture_setting(untyped_member, index));
  const auto & value = *reinterpret_cast<const shisen_interfaces::msg::CaptureSetting *>(untyped_value);
  item = value;
}

void resize_function__ConfigureCaptureSetting_Response__capture_setting(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<shisen_interfaces::msg::CaptureSetting> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConfigureCaptureSetting_Response_message_member_array[1] = {
  {
    "capture_setting",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shisen_interfaces::msg::CaptureSetting>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::srv::ConfigureCaptureSetting_Response, capture_setting),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConfigureCaptureSetting_Response__capture_setting,  // size() function pointer
    get_const_function__ConfigureCaptureSetting_Response__capture_setting,  // get_const(index) function pointer
    get_function__ConfigureCaptureSetting_Response__capture_setting,  // get(index) function pointer
    fetch_function__ConfigureCaptureSetting_Response__capture_setting,  // fetch(index, &value) function pointer
    assign_function__ConfigureCaptureSetting_Response__capture_setting,  // assign(index, value) function pointer
    resize_function__ConfigureCaptureSetting_Response__capture_setting  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConfigureCaptureSetting_Response_message_members = {
  "shisen_interfaces::srv",  // message namespace
  "ConfigureCaptureSetting_Response",  // message name
  1,  // number of fields
  sizeof(shisen_interfaces::srv::ConfigureCaptureSetting_Response),
  ConfigureCaptureSetting_Response_message_member_array,  // message members
  ConfigureCaptureSetting_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureCaptureSetting_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConfigureCaptureSetting_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureCaptureSetting_Response_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace shisen_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting_Response>()
{
  return &::shisen_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureCaptureSetting_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shisen_interfaces, srv, ConfigureCaptureSetting_Response)() {
  return &::shisen_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureCaptureSetting_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace shisen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ConfigureCaptureSetting_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) shisen_interfaces::srv::ConfigureCaptureSetting_Event(_init);
}

void ConfigureCaptureSetting_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<shisen_interfaces::srv::ConfigureCaptureSetting_Event *>(message_memory);
  typed_message->~ConfigureCaptureSetting_Event();
}

size_t size_function__ConfigureCaptureSetting_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<shisen_interfaces::srv::ConfigureCaptureSetting_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConfigureCaptureSetting_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<shisen_interfaces::srv::ConfigureCaptureSetting_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ConfigureCaptureSetting_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<shisen_interfaces::srv::ConfigureCaptureSetting_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConfigureCaptureSetting_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const shisen_interfaces::srv::ConfigureCaptureSetting_Request *>(
    get_const_function__ConfigureCaptureSetting_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<shisen_interfaces::srv::ConfigureCaptureSetting_Request *>(untyped_value);
  value = item;
}

void assign_function__ConfigureCaptureSetting_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<shisen_interfaces::srv::ConfigureCaptureSetting_Request *>(
    get_function__ConfigureCaptureSetting_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const shisen_interfaces::srv::ConfigureCaptureSetting_Request *>(untyped_value);
  item = value;
}

void resize_function__ConfigureCaptureSetting_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<shisen_interfaces::srv::ConfigureCaptureSetting_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConfigureCaptureSetting_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<shisen_interfaces::srv::ConfigureCaptureSetting_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConfigureCaptureSetting_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<shisen_interfaces::srv::ConfigureCaptureSetting_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ConfigureCaptureSetting_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<shisen_interfaces::srv::ConfigureCaptureSetting_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConfigureCaptureSetting_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const shisen_interfaces::srv::ConfigureCaptureSetting_Response *>(
    get_const_function__ConfigureCaptureSetting_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<shisen_interfaces::srv::ConfigureCaptureSetting_Response *>(untyped_value);
  value = item;
}

void assign_function__ConfigureCaptureSetting_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<shisen_interfaces::srv::ConfigureCaptureSetting_Response *>(
    get_function__ConfigureCaptureSetting_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const shisen_interfaces::srv::ConfigureCaptureSetting_Response *>(untyped_value);
  item = value;
}

void resize_function__ConfigureCaptureSetting_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<shisen_interfaces::srv::ConfigureCaptureSetting_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConfigureCaptureSetting_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces::srv::ConfigureCaptureSetting_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::srv::ConfigureCaptureSetting_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConfigureCaptureSetting_Event__request,  // size() function pointer
    get_const_function__ConfigureCaptureSetting_Event__request,  // get_const(index) function pointer
    get_function__ConfigureCaptureSetting_Event__request,  // get(index) function pointer
    fetch_function__ConfigureCaptureSetting_Event__request,  // fetch(index, &value) function pointer
    assign_function__ConfigureCaptureSetting_Event__request,  // assign(index, value) function pointer
    resize_function__ConfigureCaptureSetting_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::srv::ConfigureCaptureSetting_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConfigureCaptureSetting_Event__response,  // size() function pointer
    get_const_function__ConfigureCaptureSetting_Event__response,  // get_const(index) function pointer
    get_function__ConfigureCaptureSetting_Event__response,  // get(index) function pointer
    fetch_function__ConfigureCaptureSetting_Event__response,  // fetch(index, &value) function pointer
    assign_function__ConfigureCaptureSetting_Event__response,  // assign(index, value) function pointer
    resize_function__ConfigureCaptureSetting_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConfigureCaptureSetting_Event_message_members = {
  "shisen_interfaces::srv",  // message namespace
  "ConfigureCaptureSetting_Event",  // message name
  3,  // number of fields
  sizeof(shisen_interfaces::srv::ConfigureCaptureSetting_Event),
  ConfigureCaptureSetting_Event_message_member_array,  // message members
  ConfigureCaptureSetting_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureCaptureSetting_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConfigureCaptureSetting_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureCaptureSetting_Event_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace shisen_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting_Event>()
{
  return &::shisen_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureCaptureSetting_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shisen_interfaces, srv, ConfigureCaptureSetting_Event)() {
  return &::shisen_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureCaptureSetting_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace shisen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ConfigureCaptureSetting_service_members = {
  "shisen_interfaces::srv",  // service namespace
  "ConfigureCaptureSetting",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ConfigureCaptureSetting_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureCaptureSetting_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<shisen_interfaces::srv::ConfigureCaptureSetting>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<shisen_interfaces::srv::ConfigureCaptureSetting>,
  &shisen_interfaces__srv__ConfigureCaptureSetting__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace shisen_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::shisen_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureCaptureSetting_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::shisen_interfaces::srv::ConfigureCaptureSetting_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::shisen_interfaces::srv::ConfigureCaptureSetting_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::shisen_interfaces::srv::ConfigureCaptureSetting_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shisen_interfaces, srv, ConfigureCaptureSetting)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<shisen_interfaces::srv::ConfigureCaptureSetting>();
}

#ifdef __cplusplus
}
#endif
