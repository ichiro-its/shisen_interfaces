// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shisen_interfaces:msg/CameraConfig.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__BUILDER_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shisen_interfaces/msg/detail/camera_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shisen_interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraConfig_h_angle
{
public:
  explicit Init_CameraConfig_h_angle(::shisen_interfaces::msg::CameraConfig & msg)
  : msg_(msg)
  {}
  ::shisen_interfaces::msg::CameraConfig h_angle(::shisen_interfaces::msg::CameraConfig::_h_angle_type arg)
  {
    msg_.h_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shisen_interfaces::msg::CameraConfig msg_;
};

class Init_CameraConfig_v_angle
{
public:
  explicit Init_CameraConfig_v_angle(::shisen_interfaces::msg::CameraConfig & msg)
  : msg_(msg)
  {}
  Init_CameraConfig_h_angle v_angle(::shisen_interfaces::msg::CameraConfig::_v_angle_type arg)
  {
    msg_.v_angle = std::move(arg);
    return Init_CameraConfig_h_angle(msg_);
  }

private:
  ::shisen_interfaces::msg::CameraConfig msg_;
};

class Init_CameraConfig_height
{
public:
  explicit Init_CameraConfig_height(::shisen_interfaces::msg::CameraConfig & msg)
  : msg_(msg)
  {}
  Init_CameraConfig_v_angle height(::shisen_interfaces::msg::CameraConfig::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_CameraConfig_v_angle(msg_);
  }

private:
  ::shisen_interfaces::msg::CameraConfig msg_;
};

class Init_CameraConfig_width
{
public:
  Init_CameraConfig_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraConfig_height width(::shisen_interfaces::msg::CameraConfig::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_CameraConfig_height(msg_);
  }

private:
  ::shisen_interfaces::msg::CameraConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shisen_interfaces::msg::CameraConfig>()
{
  return shisen_interfaces::msg::builder::Init_CameraConfig_width();
}

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__BUILDER_HPP_
