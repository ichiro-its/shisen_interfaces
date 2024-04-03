// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shisen_interfaces:msg/CaptureSetting.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__BUILDER_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shisen_interfaces/msg/detail/capture_setting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shisen_interfaces
{

namespace msg
{

namespace builder
{

class Init_CaptureSetting_gain
{
public:
  explicit Init_CaptureSetting_gain(::shisen_interfaces::msg::CaptureSetting & msg)
  : msg_(msg)
  {}
  ::shisen_interfaces::msg::CaptureSetting gain(::shisen_interfaces::msg::CaptureSetting::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shisen_interfaces::msg::CaptureSetting msg_;
};

class Init_CaptureSetting_hue
{
public:
  explicit Init_CaptureSetting_hue(::shisen_interfaces::msg::CaptureSetting & msg)
  : msg_(msg)
  {}
  Init_CaptureSetting_gain hue(::shisen_interfaces::msg::CaptureSetting::_hue_type arg)
  {
    msg_.hue = std::move(arg);
    return Init_CaptureSetting_gain(msg_);
  }

private:
  ::shisen_interfaces::msg::CaptureSetting msg_;
};

class Init_CaptureSetting_temperature
{
public:
  explicit Init_CaptureSetting_temperature(::shisen_interfaces::msg::CaptureSetting & msg)
  : msg_(msg)
  {}
  Init_CaptureSetting_hue temperature(::shisen_interfaces::msg::CaptureSetting::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_CaptureSetting_hue(msg_);
  }

private:
  ::shisen_interfaces::msg::CaptureSetting msg_;
};

class Init_CaptureSetting_saturation
{
public:
  explicit Init_CaptureSetting_saturation(::shisen_interfaces::msg::CaptureSetting & msg)
  : msg_(msg)
  {}
  Init_CaptureSetting_temperature saturation(::shisen_interfaces::msg::CaptureSetting::_saturation_type arg)
  {
    msg_.saturation = std::move(arg);
    return Init_CaptureSetting_temperature(msg_);
  }

private:
  ::shisen_interfaces::msg::CaptureSetting msg_;
};

class Init_CaptureSetting_contrast
{
public:
  explicit Init_CaptureSetting_contrast(::shisen_interfaces::msg::CaptureSetting & msg)
  : msg_(msg)
  {}
  Init_CaptureSetting_saturation contrast(::shisen_interfaces::msg::CaptureSetting::_contrast_type arg)
  {
    msg_.contrast = std::move(arg);
    return Init_CaptureSetting_saturation(msg_);
  }

private:
  ::shisen_interfaces::msg::CaptureSetting msg_;
};

class Init_CaptureSetting_brightness
{
public:
  Init_CaptureSetting_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureSetting_contrast brightness(::shisen_interfaces::msg::CaptureSetting::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_CaptureSetting_contrast(msg_);
  }

private:
  ::shisen_interfaces::msg::CaptureSetting msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shisen_interfaces::msg::CaptureSetting>()
{
  return shisen_interfaces::msg::builder::Init_CaptureSetting_brightness();
}

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__BUILDER_HPP_
