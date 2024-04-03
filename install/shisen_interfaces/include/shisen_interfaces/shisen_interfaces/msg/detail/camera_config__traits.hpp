// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shisen_interfaces:msg/CameraConfig.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__TRAITS_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shisen_interfaces/msg/detail/camera_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shisen_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: v_angle
  {
    out << "v_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.v_angle, out);
    out << ", ";
  }

  // member: h_angle
  {
    out << "h_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.h_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: v_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.v_angle, out);
    out << "\n";
  }

  // member: h_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.h_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraConfig & msg, bool use_flow_style = false)
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
  const shisen_interfaces::msg::CameraConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  shisen_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shisen_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const shisen_interfaces::msg::CameraConfig & msg)
{
  return shisen_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<shisen_interfaces::msg::CameraConfig>()
{
  return "shisen_interfaces::msg::CameraConfig";
}

template<>
inline const char * name<shisen_interfaces::msg::CameraConfig>()
{
  return "shisen_interfaces/msg/CameraConfig";
}

template<>
struct has_fixed_size<shisen_interfaces::msg::CameraConfig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shisen_interfaces::msg::CameraConfig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shisen_interfaces::msg::CameraConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__TRAITS_HPP_
