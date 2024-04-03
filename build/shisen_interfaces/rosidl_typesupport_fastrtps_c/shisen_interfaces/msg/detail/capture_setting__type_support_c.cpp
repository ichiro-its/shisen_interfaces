// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from shisen_interfaces:msg/CaptureSetting.idl
// generated code does not contain a copyright notice
#include "shisen_interfaces/msg/detail/capture_setting__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "shisen_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "shisen_interfaces/msg/detail/capture_setting__struct.h"
#include "shisen_interfaces/msg/detail/capture_setting__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // brightness, contrast, gain, hue, saturation, temperature
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // brightness, contrast, gain, hue, saturation, temperature

// forward declare type support functions


using _CaptureSetting__ros_msg_type = shisen_interfaces__msg__CaptureSetting;

static bool _CaptureSetting__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CaptureSetting__ros_msg_type * ros_message = static_cast<const _CaptureSetting__ros_msg_type *>(untyped_ros_message);
  // Field name: brightness
  {
    size_t size = ros_message->brightness.size;
    auto array_ptr = ros_message->brightness.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: contrast
  {
    size_t size = ros_message->contrast.size;
    auto array_ptr = ros_message->contrast.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: saturation
  {
    size_t size = ros_message->saturation.size;
    auto array_ptr = ros_message->saturation.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: temperature
  {
    size_t size = ros_message->temperature.size;
    auto array_ptr = ros_message->temperature.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hue
  {
    size_t size = ros_message->hue.size;
    auto array_ptr = ros_message->hue.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gain
  {
    size_t size = ros_message->gain.size;
    auto array_ptr = ros_message->gain.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CaptureSetting__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CaptureSetting__ros_msg_type * ros_message = static_cast<_CaptureSetting__ros_msg_type *>(untyped_ros_message);
  // Field name: brightness
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->brightness.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->brightness);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->brightness, size)) {
      fprintf(stderr, "failed to create array for field 'brightness'");
      return false;
    }
    auto array_ptr = ros_message->brightness.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: contrast
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->contrast.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->contrast);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->contrast, size)) {
      fprintf(stderr, "failed to create array for field 'contrast'");
      return false;
    }
    auto array_ptr = ros_message->contrast.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: saturation
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->saturation.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->saturation);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->saturation, size)) {
      fprintf(stderr, "failed to create array for field 'saturation'");
      return false;
    }
    auto array_ptr = ros_message->saturation.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: temperature
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->temperature.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->temperature);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->temperature, size)) {
      fprintf(stderr, "failed to create array for field 'temperature'");
      return false;
    }
    auto array_ptr = ros_message->temperature.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hue
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->hue.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->hue);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->hue, size)) {
      fprintf(stderr, "failed to create array for field 'hue'");
      return false;
    }
    auto array_ptr = ros_message->hue.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gain
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gain.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->gain);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->gain, size)) {
      fprintf(stderr, "failed to create array for field 'gain'");
      return false;
    }
    auto array_ptr = ros_message->gain.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shisen_interfaces
size_t get_serialized_size_shisen_interfaces__msg__CaptureSetting(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CaptureSetting__ros_msg_type * ros_message = static_cast<const _CaptureSetting__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brightness
  {
    size_t array_size = ros_message->brightness.size;
    auto array_ptr = ros_message->brightness.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contrast
  {
    size_t array_size = ros_message->contrast.size;
    auto array_ptr = ros_message->contrast.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name saturation
  {
    size_t array_size = ros_message->saturation.size;
    auto array_ptr = ros_message->saturation.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t array_size = ros_message->temperature.size;
    auto array_ptr = ros_message->temperature.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hue
  {
    size_t array_size = ros_message->hue.size;
    auto array_ptr = ros_message->hue.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gain
  {
    size_t array_size = ros_message->gain.size;
    auto array_ptr = ros_message->gain.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CaptureSetting__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_shisen_interfaces__msg__CaptureSetting(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shisen_interfaces
size_t max_serialized_size_shisen_interfaces__msg__CaptureSetting(
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

  // member: brightness
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: contrast
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: saturation
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hue
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gain
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = shisen_interfaces__msg__CaptureSetting;
    is_plain =
      (
      offsetof(DataType, gain) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CaptureSetting__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_shisen_interfaces__msg__CaptureSetting(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CaptureSetting = {
  "shisen_interfaces::msg",
  "CaptureSetting",
  _CaptureSetting__cdr_serialize,
  _CaptureSetting__cdr_deserialize,
  _CaptureSetting__get_serialized_size,
  _CaptureSetting__max_serialized_size
};

static rosidl_message_type_support_t _CaptureSetting__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CaptureSetting,
  get_message_typesupport_handle_function,
  &shisen_interfaces__msg__CaptureSetting__get_type_hash,
  &shisen_interfaces__msg__CaptureSetting__get_type_description,
  &shisen_interfaces__msg__CaptureSetting__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shisen_interfaces, msg, CaptureSetting)() {
  return &_CaptureSetting__type_support;
}

#if defined(__cplusplus)
}
#endif
