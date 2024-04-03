// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shisen_interfaces:msg/CaptureSetting.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__STRUCT_HPP_
#define SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__shisen_interfaces__msg__CaptureSetting __attribute__((deprecated))
#else
# define DEPRECATED__shisen_interfaces__msg__CaptureSetting __declspec(deprecated)
#endif

namespace shisen_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CaptureSetting_
{
  using Type = CaptureSetting_<ContainerAllocator>;

  explicit CaptureSetting_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CaptureSetting_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _brightness_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _brightness_type brightness;
  using _contrast_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _contrast_type contrast;
  using _saturation_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _saturation_type saturation;
  using _temperature_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _temperature_type temperature;
  using _hue_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _hue_type hue;
  using _gain_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _gain_type gain;

  // setters for named parameter idiom
  Type & set__brightness(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->brightness = _arg;
    return *this;
  }
  Type & set__contrast(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->contrast = _arg;
    return *this;
  }
  Type & set__saturation(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->saturation = _arg;
    return *this;
  }
  Type & set__temperature(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__hue(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->hue = _arg;
    return *this;
  }
  Type & set__gain(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->gain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shisen_interfaces::msg::CaptureSetting_<ContainerAllocator> *;
  using ConstRawPtr =
    const shisen_interfaces::msg::CaptureSetting_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shisen_interfaces__msg__CaptureSetting
    std::shared_ptr<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shisen_interfaces__msg__CaptureSetting
    std::shared_ptr<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureSetting_ & other) const
  {
    if (this->brightness != other.brightness) {
      return false;
    }
    if (this->contrast != other.contrast) {
      return false;
    }
    if (this->saturation != other.saturation) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->hue != other.hue) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureSetting_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureSetting_

// alias to use template instance with default allocator
using CaptureSetting =
  shisen_interfaces::msg::CaptureSetting_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__MSG__DETAIL__CAPTURE_SETTING__STRUCT_HPP_
