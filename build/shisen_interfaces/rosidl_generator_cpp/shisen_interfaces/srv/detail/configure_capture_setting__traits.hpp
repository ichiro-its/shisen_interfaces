// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shisen_interfaces:srv/ConfigureCaptureSetting.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__TRAITS_HPP_
#define SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shisen_interfaces/srv/detail/configure_capture_setting__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'capture_setting'
#include "shisen_interfaces/msg/detail/capture_setting__traits.hpp"

namespace shisen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureCaptureSetting_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: capture_setting
  {
    if (msg.capture_setting.size() == 0) {
      out << "capture_setting: []";
    } else {
      out << "capture_setting: [";
      size_t pending_items = msg.capture_setting.size();
      for (auto item : msg.capture_setting) {
        to_flow_style_yaml(item, out);
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
  const ConfigureCaptureSetting_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: capture_setting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.capture_setting.size() == 0) {
      out << "capture_setting: []\n";
    } else {
      out << "capture_setting:\n";
      for (auto item : msg.capture_setting) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureCaptureSetting_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace shisen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use shisen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const shisen_interfaces::srv::ConfigureCaptureSetting_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  shisen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shisen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const shisen_interfaces::srv::ConfigureCaptureSetting_Request & msg)
{
  return shisen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<shisen_interfaces::srv::ConfigureCaptureSetting_Request>()
{
  return "shisen_interfaces::srv::ConfigureCaptureSetting_Request";
}

template<>
inline const char * name<shisen_interfaces::srv::ConfigureCaptureSetting_Request>()
{
  return "shisen_interfaces/srv/ConfigureCaptureSetting_Request";
}

template<>
struct has_fixed_size<shisen_interfaces::srv::ConfigureCaptureSetting_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shisen_interfaces::srv::ConfigureCaptureSetting_Request>
  : std::integral_constant<bool, has_bounded_size<shisen_interfaces::msg::CaptureSetting>::value> {};

template<>
struct is_message<shisen_interfaces::srv::ConfigureCaptureSetting_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'capture_setting'
// already included above
// #include "shisen_interfaces/msg/detail/capture_setting__traits.hpp"

namespace shisen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureCaptureSetting_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: capture_setting
  {
    if (msg.capture_setting.size() == 0) {
      out << "capture_setting: []";
    } else {
      out << "capture_setting: [";
      size_t pending_items = msg.capture_setting.size();
      for (auto item : msg.capture_setting) {
        to_flow_style_yaml(item, out);
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
  const ConfigureCaptureSetting_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: capture_setting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.capture_setting.size() == 0) {
      out << "capture_setting: []\n";
    } else {
      out << "capture_setting:\n";
      for (auto item : msg.capture_setting) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureCaptureSetting_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace shisen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use shisen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const shisen_interfaces::srv::ConfigureCaptureSetting_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  shisen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shisen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const shisen_interfaces::srv::ConfigureCaptureSetting_Response & msg)
{
  return shisen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<shisen_interfaces::srv::ConfigureCaptureSetting_Response>()
{
  return "shisen_interfaces::srv::ConfigureCaptureSetting_Response";
}

template<>
inline const char * name<shisen_interfaces::srv::ConfigureCaptureSetting_Response>()
{
  return "shisen_interfaces/srv/ConfigureCaptureSetting_Response";
}

template<>
struct has_fixed_size<shisen_interfaces::srv::ConfigureCaptureSetting_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shisen_interfaces::srv::ConfigureCaptureSetting_Response>
  : std::integral_constant<bool, has_bounded_size<shisen_interfaces::msg::CaptureSetting>::value> {};

template<>
struct is_message<shisen_interfaces::srv::ConfigureCaptureSetting_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace shisen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureCaptureSetting_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const ConfigureCaptureSetting_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureCaptureSetting_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace shisen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use shisen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const shisen_interfaces::srv::ConfigureCaptureSetting_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  shisen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shisen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const shisen_interfaces::srv::ConfigureCaptureSetting_Event & msg)
{
  return shisen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<shisen_interfaces::srv::ConfigureCaptureSetting_Event>()
{
  return "shisen_interfaces::srv::ConfigureCaptureSetting_Event";
}

template<>
inline const char * name<shisen_interfaces::srv::ConfigureCaptureSetting_Event>()
{
  return "shisen_interfaces/srv/ConfigureCaptureSetting_Event";
}

template<>
struct has_fixed_size<shisen_interfaces::srv::ConfigureCaptureSetting_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shisen_interfaces::srv::ConfigureCaptureSetting_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<shisen_interfaces::srv::ConfigureCaptureSetting_Request>::value && has_bounded_size<shisen_interfaces::srv::ConfigureCaptureSetting_Response>::value> {};

template<>
struct is_message<shisen_interfaces::srv::ConfigureCaptureSetting_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<shisen_interfaces::srv::ConfigureCaptureSetting>()
{
  return "shisen_interfaces::srv::ConfigureCaptureSetting";
}

template<>
inline const char * name<shisen_interfaces::srv::ConfigureCaptureSetting>()
{
  return "shisen_interfaces/srv/ConfigureCaptureSetting";
}

template<>
struct has_fixed_size<shisen_interfaces::srv::ConfigureCaptureSetting>
  : std::integral_constant<
    bool,
    has_fixed_size<shisen_interfaces::srv::ConfigureCaptureSetting_Request>::value &&
    has_fixed_size<shisen_interfaces::srv::ConfigureCaptureSetting_Response>::value
  >
{
};

template<>
struct has_bounded_size<shisen_interfaces::srv::ConfigureCaptureSetting>
  : std::integral_constant<
    bool,
    has_bounded_size<shisen_interfaces::srv::ConfigureCaptureSetting_Request>::value &&
    has_bounded_size<shisen_interfaces::srv::ConfigureCaptureSetting_Response>::value
  >
{
};

template<>
struct is_service<shisen_interfaces::srv::ConfigureCaptureSetting>
  : std::true_type
{
};

template<>
struct is_service_request<shisen_interfaces::srv::ConfigureCaptureSetting_Request>
  : std::true_type
{
};

template<>
struct is_service_response<shisen_interfaces::srv::ConfigureCaptureSetting_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__TRAITS_HPP_
