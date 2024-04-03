// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shisen_interfaces:msg/SetCapture.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__TRAITS_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shisen_interfaces/msg/detail/set_capture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shisen_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetCapture & msg,
  std::ostream & out)
{
  out << "{";
  // member: json_capture
  {
    out << "json_capture: ";
    rosidl_generator_traits::value_to_yaml(msg.json_capture, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCapture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: json_capture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "json_capture: ";
    rosidl_generator_traits::value_to_yaml(msg.json_capture, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCapture & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace shisen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use shisen_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const shisen_interfaces::msg::SetCapture & msg,
  std::ostream & out, size_t indentation = 0)
{
  shisen_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shisen_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const shisen_interfaces::msg::SetCapture & msg)
{
  return shisen_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<shisen_interfaces::msg::SetCapture>()
{
  return "shisen_interfaces::msg::SetCapture";
}

template<>
inline const char * name<shisen_interfaces::msg::SetCapture>()
{
  return "shisen_interfaces/msg/SetCapture";
}

template<>
struct has_fixed_size<shisen_interfaces::msg::SetCapture>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shisen_interfaces::msg::SetCapture>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<shisen_interfaces::msg::SetCapture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__TRAITS_HPP_
