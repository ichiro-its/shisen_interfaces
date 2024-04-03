// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from shisen_interfaces:msg/SetCapture.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "shisen_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "shisen_interfaces/msg/detail/set_capture__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace shisen_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shisen_interfaces
cdr_serialize(
  const shisen_interfaces::msg::SetCapture & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shisen_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  shisen_interfaces::msg::SetCapture & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shisen_interfaces
get_serialized_size(
  const shisen_interfaces::msg::SetCapture & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shisen_interfaces
max_serialized_size_SetCapture(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace shisen_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shisen_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, shisen_interfaces, msg, SetCapture)();

#ifdef __cplusplus
}
#endif

#endif  // SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
