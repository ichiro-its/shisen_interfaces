// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shisen_interfaces:msg/SetCapture.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__STRUCT_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__shisen_interfaces__msg__SetCapture __attribute__((deprecated))
#else
# define DEPRECATED__shisen_interfaces__msg__SetCapture __declspec(deprecated)
#endif

namespace shisen_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetCapture_
{
  using Type = SetCapture_<ContainerAllocator>;

  explicit SetCapture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->json_capture = "";
    }
  }

  explicit SetCapture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : json_capture(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->json_capture = "";
    }
  }

  // field types and members
  using _json_capture_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _json_capture_type json_capture;

  // setters for named parameter idiom
  Type & set__json_capture(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->json_capture = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shisen_interfaces::msg::SetCapture_<ContainerAllocator> *;
  using ConstRawPtr =
    const shisen_interfaces::msg::SetCapture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shisen_interfaces::msg::SetCapture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shisen_interfaces::msg::SetCapture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::msg::SetCapture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::msg::SetCapture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::msg::SetCapture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::msg::SetCapture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shisen_interfaces::msg::SetCapture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shisen_interfaces::msg::SetCapture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shisen_interfaces__msg__SetCapture
    std::shared_ptr<shisen_interfaces::msg::SetCapture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shisen_interfaces__msg__SetCapture
    std::shared_ptr<shisen_interfaces::msg::SetCapture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCapture_ & other) const
  {
    if (this->json_capture != other.json_capture) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCapture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCapture_

// alias to use template instance with default allocator
using SetCapture =
  shisen_interfaces::msg::SetCapture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__MSG__DETAIL__SET_CAPTURE__STRUCT_HPP_
