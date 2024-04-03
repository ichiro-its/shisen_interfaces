// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shisen_interfaces:msg/CameraConfig.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__STRUCT_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__shisen_interfaces__msg__CameraConfig __attribute__((deprecated))
#else
# define DEPRECATED__shisen_interfaces__msg__CameraConfig __declspec(deprecated)
#endif

namespace shisen_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraConfig_
{
  using Type = CameraConfig_<ContainerAllocator>;

  explicit CameraConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->width = 320l;
      this->height = 240l;
      this->v_angle = -1.0f;
      this->h_angle = -1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->width = 0l;
      this->height = 0l;
      this->v_angle = 0.0f;
      this->h_angle = 0.0f;
    }
  }

  explicit CameraConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->width = 320l;
      this->height = 240l;
      this->v_angle = -1.0f;
      this->h_angle = -1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->width = 0l;
      this->height = 0l;
      this->v_angle = 0.0f;
      this->h_angle = 0.0f;
    }
  }

  // field types and members
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
  using _v_angle_type =
    float;
  _v_angle_type v_angle;
  using _h_angle_type =
    float;
  _h_angle_type h_angle;

  // setters for named parameter idiom
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__v_angle(
    const float & _arg)
  {
    this->v_angle = _arg;
    return *this;
  }
  Type & set__h_angle(
    const float & _arg)
  {
    this->h_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shisen_interfaces::msg::CameraConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const shisen_interfaces::msg::CameraConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shisen_interfaces::msg::CameraConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shisen_interfaces::msg::CameraConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::msg::CameraConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::msg::CameraConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::msg::CameraConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::msg::CameraConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shisen_interfaces::msg::CameraConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shisen_interfaces::msg::CameraConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shisen_interfaces__msg__CameraConfig
    std::shared_ptr<shisen_interfaces::msg::CameraConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shisen_interfaces__msg__CameraConfig
    std::shared_ptr<shisen_interfaces::msg::CameraConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraConfig_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->v_angle != other.v_angle) {
      return false;
    }
    if (this->h_angle != other.h_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraConfig_

// alias to use template instance with default allocator
using CameraConfig =
  shisen_interfaces::msg::CameraConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__MSG__DETAIL__CAMERA_CONFIG__STRUCT_HPP_
