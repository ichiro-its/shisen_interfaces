// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shisen_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__IMAGE__TRAITS_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shisen_interfaces/msg/detail/image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shisen_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Image & msg,
  std::ostream & out)
{
  out << "{";
  // member: cols
  {
    out << "cols: ";
    rosidl_generator_traits::value_to_yaml(msg.cols, out);
    out << ", ";
  }

  // member: rows
  {
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << ", ";
  }

  // member: channels
  {
    out << "channels: ";
    rosidl_generator_traits::value_to_yaml(msg.channels, out);
    out << ", ";
  }

  // member: quality
  {
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::character_value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Image & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cols
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cols: ";
    rosidl_generator_traits::value_to_yaml(msg.cols, out);
    out << "\n";
  }

  // member: rows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << "\n";
  }

  // member: channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channels: ";
    rosidl_generator_traits::value_to_yaml(msg.channels, out);
    out << "\n";
  }

  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Image & msg, bool use_flow_style = false)
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
  const shisen_interfaces::msg::Image & msg,
  std::ostream & out, size_t indentation = 0)
{
  shisen_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shisen_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const shisen_interfaces::msg::Image & msg)
{
  return shisen_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<shisen_interfaces::msg::Image>()
{
  return "shisen_interfaces::msg::Image";
}

template<>
inline const char * name<shisen_interfaces::msg::Image>()
{
  return "shisen_interfaces/msg/Image";
}

template<>
struct has_fixed_size<shisen_interfaces::msg::Image>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shisen_interfaces::msg::Image>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<shisen_interfaces::msg::Image>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHISEN_INTERFACES__MSG__DETAIL__IMAGE__TRAITS_HPP_
