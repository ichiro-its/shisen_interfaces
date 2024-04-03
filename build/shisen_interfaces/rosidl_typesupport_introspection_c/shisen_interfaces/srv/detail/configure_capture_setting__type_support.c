// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from shisen_interfaces:srv/ConfigureCaptureSetting.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "shisen_interfaces/srv/detail/configure_capture_setting__rosidl_typesupport_introspection_c.h"
#include "shisen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
#include "shisen_interfaces/srv/detail/configure_capture_setting__struct.h"


// Include directives for member types
// Member `capture_setting`
#include "shisen_interfaces/msg/capture_setting.h"
// Member `capture_setting`
#include "shisen_interfaces/msg/detail/capture_setting__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__init(message_memory);
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_fini_function(void * message_memory)
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__fini(message_memory);
}

size_t shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__size_function__ConfigureCaptureSetting_Request__capture_setting(
  const void * untyped_member)
{
  const shisen_interfaces__msg__CaptureSetting__Sequence * member =
    (const shisen_interfaces__msg__CaptureSetting__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Request__capture_setting(
  const void * untyped_member, size_t index)
{
  const shisen_interfaces__msg__CaptureSetting__Sequence * member =
    (const shisen_interfaces__msg__CaptureSetting__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Request__capture_setting(
  void * untyped_member, size_t index)
{
  shisen_interfaces__msg__CaptureSetting__Sequence * member =
    (shisen_interfaces__msg__CaptureSetting__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__fetch_function__ConfigureCaptureSetting_Request__capture_setting(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shisen_interfaces__msg__CaptureSetting * item =
    ((const shisen_interfaces__msg__CaptureSetting *)
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Request__capture_setting(untyped_member, index));
  shisen_interfaces__msg__CaptureSetting * value =
    (shisen_interfaces__msg__CaptureSetting *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__assign_function__ConfigureCaptureSetting_Request__capture_setting(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shisen_interfaces__msg__CaptureSetting * item =
    ((shisen_interfaces__msg__CaptureSetting *)
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Request__capture_setting(untyped_member, index));
  const shisen_interfaces__msg__CaptureSetting * value =
    (const shisen_interfaces__msg__CaptureSetting *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__resize_function__ConfigureCaptureSetting_Request__capture_setting(
  void * untyped_member, size_t size)
{
  shisen_interfaces__msg__CaptureSetting__Sequence * member =
    (shisen_interfaces__msg__CaptureSetting__Sequence *)(untyped_member);
  shisen_interfaces__msg__CaptureSetting__Sequence__fini(member);
  return shisen_interfaces__msg__CaptureSetting__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_member_array[1] = {
  {
    "capture_setting",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__srv__ConfigureCaptureSetting_Request, capture_setting),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__size_function__ConfigureCaptureSetting_Request__capture_setting,  // size() function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Request__capture_setting,  // get_const(index) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Request__capture_setting,  // get(index) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__fetch_function__ConfigureCaptureSetting_Request__capture_setting,  // fetch(index, &value) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__assign_function__ConfigureCaptureSetting_Request__capture_setting,  // assign(index, value) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__resize_function__ConfigureCaptureSetting_Request__capture_setting  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_members = {
  "shisen_interfaces__srv",  // message namespace
  "ConfigureCaptureSetting_Request",  // message name
  1,  // number of fields
  sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Request),
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_member_array,  // message members
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_type_support_handle = {
  0,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shisen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Request)() {
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, msg, CaptureSetting)();
  if (!shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_type_support_handle.typesupport_identifier) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__rosidl_typesupport_introspection_c.h"
// already included above
// #include "shisen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__struct.h"


// Include directives for member types
// Member `capture_setting`
// already included above
// #include "shisen_interfaces/msg/capture_setting.h"
// Member `capture_setting`
// already included above
// #include "shisen_interfaces/msg/detail/capture_setting__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__init(message_memory);
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_fini_function(void * message_memory)
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__fini(message_memory);
}

size_t shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__size_function__ConfigureCaptureSetting_Response__capture_setting(
  const void * untyped_member)
{
  const shisen_interfaces__msg__CaptureSetting__Sequence * member =
    (const shisen_interfaces__msg__CaptureSetting__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Response__capture_setting(
  const void * untyped_member, size_t index)
{
  const shisen_interfaces__msg__CaptureSetting__Sequence * member =
    (const shisen_interfaces__msg__CaptureSetting__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Response__capture_setting(
  void * untyped_member, size_t index)
{
  shisen_interfaces__msg__CaptureSetting__Sequence * member =
    (shisen_interfaces__msg__CaptureSetting__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__fetch_function__ConfigureCaptureSetting_Response__capture_setting(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shisen_interfaces__msg__CaptureSetting * item =
    ((const shisen_interfaces__msg__CaptureSetting *)
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Response__capture_setting(untyped_member, index));
  shisen_interfaces__msg__CaptureSetting * value =
    (shisen_interfaces__msg__CaptureSetting *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__assign_function__ConfigureCaptureSetting_Response__capture_setting(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shisen_interfaces__msg__CaptureSetting * item =
    ((shisen_interfaces__msg__CaptureSetting *)
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Response__capture_setting(untyped_member, index));
  const shisen_interfaces__msg__CaptureSetting * value =
    (const shisen_interfaces__msg__CaptureSetting *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__resize_function__ConfigureCaptureSetting_Response__capture_setting(
  void * untyped_member, size_t size)
{
  shisen_interfaces__msg__CaptureSetting__Sequence * member =
    (shisen_interfaces__msg__CaptureSetting__Sequence *)(untyped_member);
  shisen_interfaces__msg__CaptureSetting__Sequence__fini(member);
  return shisen_interfaces__msg__CaptureSetting__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_member_array[1] = {
  {
    "capture_setting",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__srv__ConfigureCaptureSetting_Response, capture_setting),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__size_function__ConfigureCaptureSetting_Response__capture_setting,  // size() function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Response__capture_setting,  // get_const(index) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Response__capture_setting,  // get(index) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__fetch_function__ConfigureCaptureSetting_Response__capture_setting,  // fetch(index, &value) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__assign_function__ConfigureCaptureSetting_Response__capture_setting,  // assign(index, value) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__resize_function__ConfigureCaptureSetting_Response__capture_setting  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_members = {
  "shisen_interfaces__srv",  // message namespace
  "ConfigureCaptureSetting_Response",  // message name
  1,  // number of fields
  sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Response),
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_member_array,  // message members
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_type_support_handle = {
  0,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shisen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Response)() {
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, msg, CaptureSetting)();
  if (!shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_type_support_handle.typesupport_identifier) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__rosidl_typesupport_introspection_c.h"
// already included above
// #include "shisen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "shisen_interfaces/srv/configure_capture_setting.h"
// Member `request`
// Member `response`
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__init(message_memory);
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_fini_function(void * message_memory)
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__fini(message_memory);
}

size_t shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__size_function__ConfigureCaptureSetting_Event__request(
  const void * untyped_member)
{
  const shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * member =
    (const shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Event__request(
  const void * untyped_member, size_t index)
{
  const shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * member =
    (const shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Event__request(
  void * untyped_member, size_t index)
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * member =
    (shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__fetch_function__ConfigureCaptureSetting_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shisen_interfaces__srv__ConfigureCaptureSetting_Request * item =
    ((const shisen_interfaces__srv__ConfigureCaptureSetting_Request *)
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Event__request(untyped_member, index));
  shisen_interfaces__srv__ConfigureCaptureSetting_Request * value =
    (shisen_interfaces__srv__ConfigureCaptureSetting_Request *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__assign_function__ConfigureCaptureSetting_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Request * item =
    ((shisen_interfaces__srv__ConfigureCaptureSetting_Request *)
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Event__request(untyped_member, index));
  const shisen_interfaces__srv__ConfigureCaptureSetting_Request * value =
    (const shisen_interfaces__srv__ConfigureCaptureSetting_Request *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__resize_function__ConfigureCaptureSetting_Event__request(
  void * untyped_member, size_t size)
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * member =
    (shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence *)(untyped_member);
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__fini(member);
  return shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__init(member, size);
}

size_t shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__size_function__ConfigureCaptureSetting_Event__response(
  const void * untyped_member)
{
  const shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * member =
    (const shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Event__response(
  const void * untyped_member, size_t index)
{
  const shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * member =
    (const shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Event__response(
  void * untyped_member, size_t index)
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * member =
    (shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__fetch_function__ConfigureCaptureSetting_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shisen_interfaces__srv__ConfigureCaptureSetting_Response * item =
    ((const shisen_interfaces__srv__ConfigureCaptureSetting_Response *)
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Event__response(untyped_member, index));
  shisen_interfaces__srv__ConfigureCaptureSetting_Response * value =
    (shisen_interfaces__srv__ConfigureCaptureSetting_Response *)(untyped_value);
  *value = *item;
}

void shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__assign_function__ConfigureCaptureSetting_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Response * item =
    ((shisen_interfaces__srv__ConfigureCaptureSetting_Response *)
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Event__response(untyped_member, index));
  const shisen_interfaces__srv__ConfigureCaptureSetting_Response * value =
    (const shisen_interfaces__srv__ConfigureCaptureSetting_Response *)(untyped_value);
  *item = *value;
}

bool shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__resize_function__ConfigureCaptureSetting_Event__response(
  void * untyped_member, size_t size)
{
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * member =
    (shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence *)(untyped_member);
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__fini(member);
  return shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shisen_interfaces__srv__ConfigureCaptureSetting_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__srv__ConfigureCaptureSetting_Event, request),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__size_function__ConfigureCaptureSetting_Event__request,  // size() function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Event__request,  // get_const(index) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Event__request,  // get(index) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__fetch_function__ConfigureCaptureSetting_Event__request,  // fetch(index, &value) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__assign_function__ConfigureCaptureSetting_Event__request,  // assign(index, value) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__resize_function__ConfigureCaptureSetting_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shisen_interfaces__srv__ConfigureCaptureSetting_Event, response),  // bytes offset in struct
    NULL,  // default value
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__size_function__ConfigureCaptureSetting_Event__response,  // size() function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureCaptureSetting_Event__response,  // get_const(index) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__get_function__ConfigureCaptureSetting_Event__response,  // get(index) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__fetch_function__ConfigureCaptureSetting_Event__response,  // fetch(index, &value) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__assign_function__ConfigureCaptureSetting_Event__response,  // assign(index, value) function pointer
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__resize_function__ConfigureCaptureSetting_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_members = {
  "shisen_interfaces__srv",  // message namespace
  "ConfigureCaptureSetting_Event",  // message name
  3,  // number of fields
  sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Event),
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_member_array,  // message members
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_type_support_handle = {
  0,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_members,
  get_message_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__get_type_hash,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__get_type_description,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shisen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Event)() {
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Request)();
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Response)();
  if (!shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_type_support_handle.typesupport_identifier) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "shisen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_service_members = {
  "shisen_interfaces__srv",  // service namespace
  "ConfigureCaptureSetting",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_type_support_handle,
  NULL,  // response message
  // shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_type_support_handle
  NULL  // event_message
  // shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_type_support_handle
};


static rosidl_service_type_support_t shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_service_type_support_handle = {
  0,
  &shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_service_members,
  get_service_typesupport_handle_function,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Request__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Request_message_type_support_handle,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Response__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Response_message_type_support_handle,
  &shisen_interfaces__srv__ConfigureCaptureSetting_Event__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_Event_message_type_support_handle,
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

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shisen_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting)() {
  if (!shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_service_type_support_handle.typesupport_identifier) {
    shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shisen_interfaces, srv, ConfigureCaptureSetting_Event)()->data;
  }

  return &shisen_interfaces__srv__detail__configure_capture_setting__rosidl_typesupport_introspection_c__ConfigureCaptureSetting_service_type_support_handle;
}
