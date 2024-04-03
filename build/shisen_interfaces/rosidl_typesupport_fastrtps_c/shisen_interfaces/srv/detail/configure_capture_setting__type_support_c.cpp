// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from shisen_interfaces:srv/ConfigureCaptureSetting.idl
// generated code does not contain a copyright notice
#include "shisen_interfaces/srv/detail/configure_capture_setting__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "shisen_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "shisen_interfaces/srv/detail/configure_capture_setting__struct.h"
#include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "shisen_interfaces/msg/detail/capture_setting__functions.h"  // capture_setting

// forward declare type support functions
size_t get_serialized_size_shisen_interfaces__msg__CaptureSetting(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_shisen_interfaces__msg__CaptureSetting(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, msg, CaptureSetting)();


using _ConfigureCaptureSetting_Request__ros_msg_type = shisen_interfaces__srv__ConfigureCaptureSetting_Request;

static bool _ConfigureCaptureSetting_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigureCaptureSetting_Request__ros_msg_type * ros_message = static_cast<const _ConfigureCaptureSetting_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: capture_setting
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shisen_interfaces, msg, CaptureSetting
      )()->data);
    size_t size = ros_message->capture_setting.size;
    auto array_ptr = ros_message->capture_setting.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ConfigureCaptureSetting_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigureCaptureSetting_Request__ros_msg_type * ros_message = static_cast<_ConfigureCaptureSetting_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: capture_setting
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shisen_interfaces, msg, CaptureSetting
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->capture_setting.data) {
      shisen_interfaces__msg__CaptureSetting__Sequence__fini(&ros_message->capture_setting);
    }
    if (!shisen_interfaces__msg__CaptureSetting__Sequence__init(&ros_message->capture_setting, size)) {
      fprintf(stderr, "failed to create array for field 'capture_setting'");
      return false;
    }
    auto array_ptr = ros_message->capture_setting.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shisen_interfaces
size_t get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigureCaptureSetting_Request__ros_msg_type * ros_message = static_cast<const _ConfigureCaptureSetting_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name capture_setting
  {
    size_t array_size = ros_message->capture_setting.size;
    auto array_ptr = ros_message->capture_setting.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_shisen_interfaces__msg__CaptureSetting(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConfigureCaptureSetting_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shisen_interfaces
size_t max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: capture_setting
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_shisen_interfaces__msg__CaptureSetting(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = shisen_interfaces__srv__ConfigureCaptureSetting_Request;
    is_plain =
      (
      offsetof(DataType, capture_setting) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ConfigureCaptureSetting_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ConfigureCaptureSetting_Request = {
  "shisen_interfaces::srv",
  "ConfigureCaptureSetting_Request",
  _ConfigureCaptureSetting_Request__cdr_serialize,
  _ConfigureCaptureSetting_Request__cdr_deserialize,
  _ConfigureCaptureSetting_Request__get_serialized_size,
  _ConfigureCaptureSetting_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConfigureCaptureSetting_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigureCaptureSetting_Request,
  get_message_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Request)() {
  return &_ConfigureCaptureSetting_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "shisen_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__struct.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "shisen_interfaces/msg/detail/capture_setting__functions.h"  // capture_setting

// forward declare type support functions
size_t get_serialized_size_shisen_interfaces__msg__CaptureSetting(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_shisen_interfaces__msg__CaptureSetting(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, msg, CaptureSetting)();


using _ConfigureCaptureSetting_Response__ros_msg_type = shisen_interfaces__srv__ConfigureCaptureSetting_Response;

static bool _ConfigureCaptureSetting_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigureCaptureSetting_Response__ros_msg_type * ros_message = static_cast<const _ConfigureCaptureSetting_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: capture_setting
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shisen_interfaces, msg, CaptureSetting
      )()->data);
    size_t size = ros_message->capture_setting.size;
    auto array_ptr = ros_message->capture_setting.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ConfigureCaptureSetting_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigureCaptureSetting_Response__ros_msg_type * ros_message = static_cast<_ConfigureCaptureSetting_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: capture_setting
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shisen_interfaces, msg, CaptureSetting
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->capture_setting.data) {
      shisen_interfaces__msg__CaptureSetting__Sequence__fini(&ros_message->capture_setting);
    }
    if (!shisen_interfaces__msg__CaptureSetting__Sequence__init(&ros_message->capture_setting, size)) {
      fprintf(stderr, "failed to create array for field 'capture_setting'");
      return false;
    }
    auto array_ptr = ros_message->capture_setting.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shisen_interfaces
size_t get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigureCaptureSetting_Response__ros_msg_type * ros_message = static_cast<const _ConfigureCaptureSetting_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name capture_setting
  {
    size_t array_size = ros_message->capture_setting.size;
    auto array_ptr = ros_message->capture_setting.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_shisen_interfaces__msg__CaptureSetting(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConfigureCaptureSetting_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shisen_interfaces
size_t max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: capture_setting
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_shisen_interfaces__msg__CaptureSetting(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = shisen_interfaces__srv__ConfigureCaptureSetting_Response;
    is_plain =
      (
      offsetof(DataType, capture_setting) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ConfigureCaptureSetting_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ConfigureCaptureSetting_Response = {
  "shisen_interfaces::srv",
  "ConfigureCaptureSetting_Response",
  _ConfigureCaptureSetting_Response__cdr_serialize,
  _ConfigureCaptureSetting_Response__cdr_deserialize,
  _ConfigureCaptureSetting_Response__get_serialized_size,
  _ConfigureCaptureSetting_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConfigureCaptureSetting_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigureCaptureSetting_Response,
  get_message_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Response)() {
  return &_ConfigureCaptureSetting_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "shisen_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__struct.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shisen_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shisen_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shisen_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();
size_t get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Request)();
size_t get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Response)();


using _ConfigureCaptureSetting_Event__ros_msg_type = shisen_interfaces__srv__ConfigureCaptureSetting_Event;

static bool _ConfigureCaptureSetting_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigureCaptureSetting_Event__ros_msg_type * ros_message = static_cast<const _ConfigureCaptureSetting_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->info, cdr))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Request
      )()->data);
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Response
      )()->data);
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ConfigureCaptureSetting_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigureCaptureSetting_Event__ros_msg_type * ros_message = static_cast<_ConfigureCaptureSetting_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->info))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Request
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__fini(&ros_message->request);
    }
    if (!shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Response
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__fini(&ros_message->response);
    }
    if (!shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shisen_interfaces
size_t get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigureCaptureSetting_Event__ros_msg_type * ros_message = static_cast<const _ConfigureCaptureSetting_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info

  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);
  // field.name request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Request(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConfigureCaptureSetting_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shisen_interfaces
size_t max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = shisen_interfaces__srv__ConfigureCaptureSetting_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ConfigureCaptureSetting_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_shisen_interfaces__srv__ConfigureCaptureSetting_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ConfigureCaptureSetting_Event = {
  "shisen_interfaces::srv",
  "ConfigureCaptureSetting_Event",
  _ConfigureCaptureSetting_Event__cdr_serialize,
  _ConfigureCaptureSetting_Event__cdr_deserialize,
  _ConfigureCaptureSetting_Event__get_serialized_size,
  _ConfigureCaptureSetting_Event__max_serialized_size
};

static rosidl_message_type_support_t _ConfigureCaptureSetting_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigureCaptureSetting_Event,
  get_message_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Event)() {
  return &_ConfigureCaptureSetting_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "shisen_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "shisen_interfaces/srv/configure_capture_setting.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ConfigureCaptureSetting__callbacks = {
  "shisen_interfaces::srv",
  "ConfigureCaptureSetting",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting_Response)(),
};

static rosidl_service_type_support_t ConfigureCaptureSetting__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ConfigureCaptureSetting__callbacks,
  get_service_typesupport_handle_function,
  &_ConfigureCaptureSetting_Request__type_support,
  &_ConfigureCaptureSetting_Response__type_support,
  &_ConfigureCaptureSetting_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    shisen_interfaces,
    srv,
    ConfigureCaptureSetting
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    shisen_interfaces,
    srv,
    ConfigureCaptureSetting
  ),
  &shisen_interfaces__srv__ConfigureCaptureSetting__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, srv, ConfigureCaptureSetting)() {
  return &ConfigureCaptureSetting__handle;
}

#if defined(__cplusplus)
}
#endif
