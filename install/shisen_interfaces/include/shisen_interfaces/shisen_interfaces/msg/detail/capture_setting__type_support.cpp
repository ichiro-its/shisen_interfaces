// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from shisen_interfaces:msg/CaptureSetting.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "shisen_interfaces/msg/detail/capture_setting__functions.h"
#include "shisen_interfaces/msg/detail/capture_setting__struct.hpp"
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

void CaptureSetting_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) shisen_interfaces::msg::CaptureSetting(_init);
}

void CaptureSetting_fini_function(void * message_memory)
{
  auto typed_message = static_cast<shisen_interfaces::msg::CaptureSetting *>(message_memory);
  typed_message->~CaptureSetting();
}

size_t size_function__CaptureSetting__brightness(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CaptureSetting__brightness(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CaptureSetting__brightness(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CaptureSetting__brightness(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__CaptureSetting__brightness(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__CaptureSetting__brightness(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__CaptureSetting__brightness(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__CaptureSetting__brightness(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CaptureSetting__contrast(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CaptureSetting__contrast(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CaptureSetting__contrast(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CaptureSetting__contrast(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__CaptureSetting__contrast(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__CaptureSetting__contrast(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__CaptureSetting__contrast(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__CaptureSetting__contrast(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CaptureSetting__saturation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CaptureSetting__saturation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CaptureSetting__saturation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CaptureSetting__saturation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__CaptureSetting__saturation(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__CaptureSetting__saturation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__CaptureSetting__saturation(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__CaptureSetting__saturation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CaptureSetting__temperature(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CaptureSetting__temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CaptureSetting__temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CaptureSetting__temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__CaptureSetting__temperature(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__CaptureSetting__temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__CaptureSetting__temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__CaptureSetting__temperature(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CaptureSetting__hue(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CaptureSetting__hue(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CaptureSetting__hue(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CaptureSetting__hue(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__CaptureSetting__hue(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__CaptureSetting__hue(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__CaptureSetting__hue(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__CaptureSetting__hue(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CaptureSetting__gain(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CaptureSetting__gain(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CaptureSetting__gain(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CaptureSetting__gain(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__CaptureSetting__gain(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__CaptureSetting__gain(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__CaptureSetting__gain(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__CaptureSetting__gain(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CaptureSetting_message_member_array[6] = {
  {
    "brightness",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::msg::CaptureSetting, brightness),  // bytes offset in struct
    nullptr,  // default value
    size_function__CaptureSetting__brightness,  // size() function pointer
    get_const_function__CaptureSetting__brightness,  // get_const(index) function pointer
    get_function__CaptureSetting__brightness,  // get(index) function pointer
    fetch_function__CaptureSetting__brightness,  // fetch(index, &value) function pointer
    assign_function__CaptureSetting__brightness,  // assign(index, value) function pointer
    resize_function__CaptureSetting__brightness  // resize(index) function pointer
  },
  {
    "contrast",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::msg::CaptureSetting, contrast),  // bytes offset in struct
    nullptr,  // default value
    size_function__CaptureSetting__contrast,  // size() function pointer
    get_const_function__CaptureSetting__contrast,  // get_const(index) function pointer
    get_function__CaptureSetting__contrast,  // get(index) function pointer
    fetch_function__CaptureSetting__contrast,  // fetch(index, &value) function pointer
    assign_function__CaptureSetting__contrast,  // assign(index, value) function pointer
    resize_function__CaptureSetting__contrast  // resize(index) function pointer
  },
  {
    "saturation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::msg::CaptureSetting, saturation),  // bytes offset in struct
    nullptr,  // default value
    size_function__CaptureSetting__saturation,  // size() function pointer
    get_const_function__CaptureSetting__saturation,  // get_const(index) function pointer
    get_function__CaptureSetting__saturation,  // get(index) function pointer
    fetch_function__CaptureSetting__saturation,  // fetch(index, &value) function pointer
    assign_function__CaptureSetting__saturation,  // assign(index, value) function pointer
    resize_function__CaptureSetting__saturation  // resize(index) function pointer
  },
  {
    "temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::msg::CaptureSetting, temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__CaptureSetting__temperature,  // size() function pointer
    get_const_function__CaptureSetting__temperature,  // get_const(index) function pointer
    get_function__CaptureSetting__temperature,  // get(index) function pointer
    fetch_function__CaptureSetting__temperature,  // fetch(index, &value) function pointer
    assign_function__CaptureSetting__temperature,  // assign(index, value) function pointer
    resize_function__CaptureSetting__temperature  // resize(index) function pointer
  },
  {
    "hue",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::msg::CaptureSetting, hue),  // bytes offset in struct
    nullptr,  // default value
    size_function__CaptureSetting__hue,  // size() function pointer
    get_const_function__CaptureSetting__hue,  // get_const(index) function pointer
    get_function__CaptureSetting__hue,  // get(index) function pointer
    fetch_function__CaptureSetting__hue,  // fetch(index, &value) function pointer
    assign_function__CaptureSetting__hue,  // assign(index, value) function pointer
    resize_function__CaptureSetting__hue  // resize(index) function pointer
  },
  {
    "gain",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces::msg::CaptureSetting, gain),  // bytes offset in struct
    nullptr,  // default value
    size_function__CaptureSetting__gain,  // size() function pointer
    get_const_function__CaptureSetting__gain,  // get_const(index) function pointer
    get_function__CaptureSetting__gain,  // get(index) function pointer
    fetch_function__CaptureSetting__gain,  // fetch(index, &value) function pointer
    assign_function__CaptureSetting__gain,  // assign(index, value) function pointer
    resize_function__CaptureSetting__gain  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CaptureSetting_message_members = {
  "shisen_interfaces::msg",  // message namespace
  "CaptureSetting",  // message name
  6,  // number of fields
  sizeof(shisen_interfaces::msg::CaptureSetting),
  CaptureSetting_message_member_array,  // message members
  CaptureSetting_init_function,  // function to initialize message memory (memory has to be allocated)
  CaptureSetting_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CaptureSetting_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CaptureSetting_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__msg__CaptureSetting__get_type_hash,
  &shisen_interfaces__msg__CaptureSetting__get_type_description,
  &shisen_interfaces__msg__CaptureSetting__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace shisen_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shisen_interfaces::msg::CaptureSetting>()
{
  return &::shisen_interfaces::msg::rosidl_typesupport_introspection_cpp::CaptureSetting_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shisen_interfaces, msg, CaptureSetting)() {
  return &::shisen_interfaces::msg::rosidl_typesupport_introspection_cpp::CaptureSetting_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
