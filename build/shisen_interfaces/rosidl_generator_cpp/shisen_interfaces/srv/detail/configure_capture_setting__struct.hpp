// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shisen_interfaces:srv/ConfigureCaptureSetting.idl
// generated code does not contain a copyright notice

#ifndef SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__STRUCT_HPP_
#define SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'capture_setting'
#include "shisen_interfaces/msg/detail/capture_setting__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Request __attribute__((deprecated))
#else
# define DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Request __declspec(deprecated)
#endif

namespace shisen_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureCaptureSetting_Request_
{
  using Type = ConfigureCaptureSetting_Request_<ContainerAllocator>;

  explicit ConfigureCaptureSetting_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ConfigureCaptureSetting_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _capture_setting_type =
    rosidl_runtime_cpp::BoundedVector<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>>>;
  _capture_setting_type capture_setting;

  // setters for named parameter idiom
  Type & set__capture_setting(
    const rosidl_runtime_cpp::BoundedVector<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>>> & _arg)
  {
    this->capture_setting = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Request
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Request
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureCaptureSetting_Request_ & other) const
  {
    if (this->capture_setting != other.capture_setting) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureCaptureSetting_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureCaptureSetting_Request_

// alias to use template instance with default allocator
using ConfigureCaptureSetting_Request =
  shisen_interfaces::srv::ConfigureCaptureSetting_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace shisen_interfaces


// Include directives for member types
// Member 'capture_setting'
// already included above
// #include "shisen_interfaces/msg/detail/capture_setting__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Response __attribute__((deprecated))
#else
# define DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Response __declspec(deprecated)
#endif

namespace shisen_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureCaptureSetting_Response_
{
  using Type = ConfigureCaptureSetting_Response_<ContainerAllocator>;

  explicit ConfigureCaptureSetting_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ConfigureCaptureSetting_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _capture_setting_type =
    rosidl_runtime_cpp::BoundedVector<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>>>;
  _capture_setting_type capture_setting;

  // setters for named parameter idiom
  Type & set__capture_setting(
    const rosidl_runtime_cpp::BoundedVector<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shisen_interfaces::msg::CaptureSetting_<ContainerAllocator>>> & _arg)
  {
    this->capture_setting = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Response
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Response
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureCaptureSetting_Response_ & other) const
  {
    if (this->capture_setting != other.capture_setting) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureCaptureSetting_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureCaptureSetting_Response_

// alias to use template instance with default allocator
using ConfigureCaptureSetting_Response =
  shisen_interfaces::srv::ConfigureCaptureSetting_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace shisen_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Event __attribute__((deprecated))
#else
# define DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Event __declspec(deprecated)
#endif

namespace shisen_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureCaptureSetting_Event_
{
  using Type = ConfigureCaptureSetting_Event_<ContainerAllocator>;

  explicit ConfigureCaptureSetting_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ConfigureCaptureSetting_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shisen_interfaces::srv::ConfigureCaptureSetting_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<shisen_interfaces::srv::ConfigureCaptureSetting_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Event
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shisen_interfaces__srv__ConfigureCaptureSetting_Event
    std::shared_ptr<shisen_interfaces::srv::ConfigureCaptureSetting_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureCaptureSetting_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureCaptureSetting_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureCaptureSetting_Event_

// alias to use template instance with default allocator
using ConfigureCaptureSetting_Event =
  shisen_interfaces::srv::ConfigureCaptureSetting_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace shisen_interfaces

namespace shisen_interfaces
{

namespace srv
{

struct ConfigureCaptureSetting
{
  using Request = shisen_interfaces::srv::ConfigureCaptureSetting_Request;
  using Response = shisen_interfaces::srv::ConfigureCaptureSetting_Response;
  using Event = shisen_interfaces::srv::ConfigureCaptureSetting_Event;
};

}  // namespace srv

}  // namespace shisen_interfaces

#endif  // SHISEN_INTERFACES__SRV__DETAIL__CONFIGURE_CAPTURE_SETTING__STRUCT_HPP_
