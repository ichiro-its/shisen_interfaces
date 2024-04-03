// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shisen_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__shisen_interfaces__msg__Image __attribute__((deprecated))
#else
# define DEPRECATED__shisen_interfaces__msg__Image __declspec(deprecated)
#endif

namespace shisen_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Image_
{
  using Type = Image_<ContainerAllocator>;

  explicit Image_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->cols = 320l;
      this->rows = 240l;
      this->channels = 3l;
      this->quality = -1l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->cols = 0l;
      this->rows = 0l;
      this->channels = 0l;
      this->quality = 0l;
    }
  }

  explicit Image_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->cols = 320l;
      this->rows = 240l;
      this->channels = 3l;
      this->quality = -1l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->cols = 0l;
      this->rows = 0l;
      this->channels = 0l;
      this->quality = 0l;
    }
  }

  // field types and members
  using _cols_type =
    int32_t;
  _cols_type cols;
  using _rows_type =
    int32_t;
  _rows_type rows;
  using _channels_type =
    int32_t;
  _channels_type channels;
  using _quality_type =
    int32_t;
  _quality_type quality;
  using _data_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__cols(
    const int32_t & _arg)
  {
    this->cols = _arg;
    return *this;
  }
  Type & set__rows(
    const int32_t & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__channels(
    const int32_t & _arg)
  {
    this->channels = _arg;
    return *this;
  }
  Type & set__quality(
    const int32_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shisen_interfaces::msg::Image_<ContainerAllocator> *;
  using ConstRawPtr =
    const shisen_interfaces::msg::Image_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shisen_interfaces::msg::Image_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shisen_interfaces::msg::Image_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::msg::Image_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::msg::Image_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::msg::Image_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::msg::Image_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shisen_interfaces::msg::Image_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shisen_interfaces::msg::Image_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shisen_interfaces__msg__Image
    std::shared_ptr<shisen_interfaces::msg::Image_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shisen_interfaces__msg__Image
    std::shared_ptr<shisen_interfaces::msg::Image_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Image_ & other) const
  {
    if (this->cols != other.cols) {
      return false;
    }
    if (this->rows != other.rows) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    if (this->quality != other.quality) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Image_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Image_

// alias to use template instance with default allocator
using Image =
  shisen_interfaces::msg::Image_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_HPP_
