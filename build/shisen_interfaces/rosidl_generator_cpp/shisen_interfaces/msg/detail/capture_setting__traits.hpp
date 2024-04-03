// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shisen_interfaces:msg/CaptureSetting.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__TRAITS_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shisen_interfaces/msg/detail/capture_setting__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shisen_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CaptureSetting & msg,
  std::ostream & out)
{
  out << "{";
  // member: brightness
  {
    if (msg.brightness.size() == 0) {
      out << "brightness: []";
    } else {
      out << "brightness: [";
      size_t pending_items = msg.brightness.size();
      for (auto item : msg.brightness) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contrast
  {
    if (msg.contrast.size() == 0) {
      out << "contrast: []";
    } else {
      out << "contrast: [";
      size_t pending_items = msg.contrast.size();
      for (auto item : msg.contrast) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: saturation
  {
    if (msg.saturation.size() == 0) {
      out << "saturation: []";
    } else {
      out << "saturation: [";
      size_t pending_items = msg.saturation.size();
      for (auto item : msg.saturation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: temperature
  {
    if (msg.temperature.size() == 0) {
      out << "temperature: []";
    } else {
      out << "temperature: [";
      size_t pending_items = msg.temperature.size();
      for (auto item : msg.temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hue
  {
    if (msg.hue.size() == 0) {
      out << "hue: []";
    } else {
      out << "hue: [";
      size_t pending_items = msg.hue.size();
      for (auto item : msg.hue) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gain
  {
    if (msg.gain.size() == 0) {
      out << "gain: []";
    } else {
      out << "gain: [";
      size_t pending_items = msg.gain.size();
      for (auto item : msg.gain) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CaptureSetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.brightness.size() == 0) {
      out << "brightness: []\n";
    } else {
      out << "brightness:\n";
      for (auto item : msg.brightness) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: contrast
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contrast.size() == 0) {
      out << "contrast: []\n";
    } else {
      out << "contrast:\n";
      for (auto item : msg.contrast) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: saturation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.saturation.size() == 0) {
      out << "saturation: []\n";
    } else {
      out << "saturation:\n";
      for (auto item : msg.saturation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperature.size() == 0) {
      out << "temperature: []\n";
    } else {
      out << "temperature:\n";
      for (auto item : msg.temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hue.size() == 0) {
      out << "hue: []\n";
    } else {
      out << "hue:\n";
      for (auto item : msg.hue) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gain.size() == 0) {
      out << "gain: []\n";
    } else {
      out << "gain:\n";
      for (auto item : msg.gain) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureSetting & msg, bool use_flow_style = false)
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
  const shisen_interfaces::msg::CaptureSetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  shisen_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shisen_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const shisen_interfaces::msg::CaptureSetting & msg)
{
  return shisen_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<shisen_interfaces::msg::CaptureSetting>()
{
  return "shisen_interfaces::msg::CaptureSetting";
}

template<>
inline const char * name<shisen_interfaces::msg::CaptureSetting>()
{
  return "shisen_interfaces/msg/CaptureSetting";
}

template<>
struct has_fixed_size<shisen_interfaces::msg::CaptureSetting>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shisen_interfaces::msg::CaptureSetting>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shisen_interfaces::msg::CaptureSetting>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__TRAITS_HPP_
