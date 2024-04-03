// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shisen_interfaces:srv/ConfigureCaptureSetting.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__BUILDER_HPP_
#define SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shisen_interfaces/srv/detail/configure_capture_setting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shisen_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConfigureCaptureSetting_Request_capture_setting
{
public:
  Init_ConfigureCaptureSetting_Request_capture_setting()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::shisen_interfaces::srv::ConfigureCaptureSetting_Request capture_setting(::shisen_interfaces::srv::ConfigureCaptureSetting_Request::_capture_setting_type arg)
  {
    msg_.capture_setting = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shisen_interfaces::srv::ConfigureCaptureSetting_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shisen_interfaces::srv::ConfigureCaptureSetting_Request>()
{
  return shisen_interfaces::srv::builder::Init_ConfigureCaptureSetting_Request_capture_setting();
}

}  // namespace shisen_interfaces


namespace shisen_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConfigureCaptureSetting_Response_capture_setting
{
public:
  Init_ConfigureCaptureSetting_Response_capture_setting()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::shisen_interfaces::srv::ConfigureCaptureSetting_Response capture_setting(::shisen_interfaces::srv::ConfigureCaptureSetting_Response::_capture_setting_type arg)
  {
    msg_.capture_setting = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shisen_interfaces::srv::ConfigureCaptureSetting_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shisen_interfaces::srv::ConfigureCaptureSetting_Response>()
{
  return shisen_interfaces::srv::builder::Init_ConfigureCaptureSetting_Response_capture_setting();
}

}  // namespace shisen_interfaces


namespace shisen_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConfigureCaptureSetting_Event_response
{
public:
  explicit Init_ConfigureCaptureSetting_Event_response(::shisen_interfaces::srv::ConfigureCaptureSetting_Event & msg)
  : msg_(msg)
  {}
  ::shisen_interfaces::srv::ConfigureCaptureSetting_Event response(::shisen_interfaces::srv::ConfigureCaptureSetting_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shisen_interfaces::srv::ConfigureCaptureSetting_Event msg_;
};

class Init_ConfigureCaptureSetting_Event_request
{
public:
  explicit Init_ConfigureCaptureSetting_Event_request(::shisen_interfaces::srv::ConfigureCaptureSetting_Event & msg)
  : msg_(msg)
  {}
  Init_ConfigureCaptureSetting_Event_response request(::shisen_interfaces::srv::ConfigureCaptureSetting_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ConfigureCaptureSetting_Event_response(msg_);
  }

private:
  ::shisen_interfaces::srv::ConfigureCaptureSetting_Event msg_;
};

class Init_ConfigureCaptureSetting_Event_info
{
public:
  Init_ConfigureCaptureSetting_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureCaptureSetting_Event_request info(::shisen_interfaces::srv::ConfigureCaptureSetting_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ConfigureCaptureSetting_Event_request(msg_);
  }

private:
  ::shisen_interfaces::srv::ConfigureCaptureSetting_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shisen_interfaces::srv::ConfigureCaptureSetting_Event>()
{
  return shisen_interfaces::srv::builder::Init_ConfigureCaptureSetting_Event_info();
}

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__BUILDER_HPP_
