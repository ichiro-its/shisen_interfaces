// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shisen_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__IMAGE__BUILDER_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shisen_interfaces/msg/detail/image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shisen_interfaces
{

namespace msg
{

namespace builder
{

class Init_Image_data
{
public:
  explicit Init_Image_data(::shisen_interfaces::msg::Image & msg)
  : msg_(msg)
  {}
  ::shisen_interfaces::msg::Image data(::shisen_interfaces::msg::Image::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shisen_interfaces::msg::Image msg_;
};

class Init_Image_quality
{
public:
  explicit Init_Image_quality(::shisen_interfaces::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_data quality(::shisen_interfaces::msg::Image::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_Image_data(msg_);
  }

private:
  ::shisen_interfaces::msg::Image msg_;
};

class Init_Image_channels
{
public:
  explicit Init_Image_channels(::shisen_interfaces::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_quality channels(::shisen_interfaces::msg::Image::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return Init_Image_quality(msg_);
  }

private:
  ::shisen_interfaces::msg::Image msg_;
};

class Init_Image_rows
{
public:
  explicit Init_Image_rows(::shisen_interfaces::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_channels rows(::shisen_interfaces::msg::Image::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_Image_channels(msg_);
  }

private:
  ::shisen_interfaces::msg::Image msg_;
};

class Init_Image_cols
{
public:
  Init_Image_cols()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Image_rows cols(::shisen_interfaces::msg::Image::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_Image_rows(msg_);
  }

private:
  ::shisen_interfaces::msg::Image msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shisen_interfaces::msg::Image>()
{
  return shisen_interfaces::msg::builder::Init_Image_cols();
}

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__MSG__DETAIL__IMAGE__BUILDER_HPP_
