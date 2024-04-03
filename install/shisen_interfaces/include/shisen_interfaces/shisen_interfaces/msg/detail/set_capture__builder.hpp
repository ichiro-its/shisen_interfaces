// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shisen_interfaces:msg/SetCapture.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__BUILDER_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shisen_interfaces/msg/detail/set_capture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shisen_interfaces
{

namespace msg
{

namespace builder
{

class Init_SetCapture_json_capture
{
public:
  Init_SetCapture_json_capture()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::shisen_interfaces::msg::SetCapture json_capture(::shisen_interfaces::msg::SetCapture::_json_capture_type arg)
  {
    msg_.json_capture = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shisen_interfaces::msg::SetCapture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shisen_interfaces::msg::SetCapture>()
{
  return shisen_interfaces::msg::builder::Init_SetCapture_json_capture();
}

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__BUILDER_HPP_
