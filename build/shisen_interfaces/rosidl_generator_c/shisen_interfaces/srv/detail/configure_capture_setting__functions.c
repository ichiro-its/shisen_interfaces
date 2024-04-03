// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shisen_interfaces:srv/ConfigureCaptureSetting.idl
// generated code does not contain a copyright notice
#include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `capture_setting`
#include "shisen_interfaces/msg/detail/capture_setting__functions.h"

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Request__init(shisen_interfaces__srv__ConfigureCaptureSetting_Request * msg)
{
  if (!msg) {
    return false;
  }
  // capture_setting
  if (!shisen_interfaces__msg__CaptureSetting__Sequence__init(&msg->capture_setting, 0)) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__fini(msg);
    return false;
  }
  return true;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Request__fini(shisen_interfaces__srv__ConfigureCaptureSetting_Request * msg)
{
  if (!msg) {
    return;
  }
  // capture_setting
  shisen_interfaces__msg__CaptureSetting__Sequence__fini(&msg->capture_setting);
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Request__are_equal(const shisen_interfaces__srv__ConfigureCaptureSetting_Request * lhs, const shisen_interfaces__srv__ConfigureCaptureSetting_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // capture_setting
  if (!shisen_interfaces__msg__CaptureSetting__Sequence__are_equal(
      &(lhs->capture_setting), &(rhs->capture_setting)))
  {
    return false;
  }
  return true;
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Request__copy(
  const shisen_interfaces__srv__ConfigureCaptureSetting_Request * input,
  shisen_interfaces__srv__ConfigureCaptureSetting_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // capture_setting
  if (!shisen_interfaces__msg__CaptureSetting__Sequence__copy(
      &(input->capture_setting), &(output->capture_setting)))
  {
    return false;
  }
  return true;
}

shisen_interfaces__srv__ConfigureCaptureSetting_Request *
shisen_interfaces__srv__ConfigureCaptureSetting_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__srv__ConfigureCaptureSetting_Request * msg = (shisen_interfaces__srv__ConfigureCaptureSetting_Request *)allocator.allocate(sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Request));
  bool success = shisen_interfaces__srv__ConfigureCaptureSetting_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Request__destroy(shisen_interfaces__srv__ConfigureCaptureSetting_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__init(shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__srv__ConfigureCaptureSetting_Request * data = NULL;

  if (size) {
    data = (shisen_interfaces__srv__ConfigureCaptureSetting_Request *)allocator.zero_allocate(size, sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shisen_interfaces__srv__ConfigureCaptureSetting_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shisen_interfaces__srv__ConfigureCaptureSetting_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__fini(shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shisen_interfaces__srv__ConfigureCaptureSetting_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence *
shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * array = (shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence *)allocator.allocate(sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__destroy(shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__are_equal(const shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * lhs, const shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shisen_interfaces__srv__ConfigureCaptureSetting_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__copy(
  const shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * input,
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shisen_interfaces__srv__ConfigureCaptureSetting_Request * data =
      (shisen_interfaces__srv__ConfigureCaptureSetting_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shisen_interfaces__srv__ConfigureCaptureSetting_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shisen_interfaces__srv__ConfigureCaptureSetting_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shisen_interfaces__srv__ConfigureCaptureSetting_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `capture_setting`
// already included above
// #include "shisen_interfaces/msg/detail/capture_setting__functions.h"

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Response__init(shisen_interfaces__srv__ConfigureCaptureSetting_Response * msg)
{
  if (!msg) {
    return false;
  }
  // capture_setting
  if (!shisen_interfaces__msg__CaptureSetting__Sequence__init(&msg->capture_setting, 0)) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__fini(msg);
    return false;
  }
  return true;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Response__fini(shisen_interfaces__srv__ConfigureCaptureSetting_Response * msg)
{
  if (!msg) {
    return;
  }
  // capture_setting
  shisen_interfaces__msg__CaptureSetting__Sequence__fini(&msg->capture_setting);
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Response__are_equal(const shisen_interfaces__srv__ConfigureCaptureSetting_Response * lhs, const shisen_interfaces__srv__ConfigureCaptureSetting_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // capture_setting
  if (!shisen_interfaces__msg__CaptureSetting__Sequence__are_equal(
      &(lhs->capture_setting), &(rhs->capture_setting)))
  {
    return false;
  }
  return true;
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Response__copy(
  const shisen_interfaces__srv__ConfigureCaptureSetting_Response * input,
  shisen_interfaces__srv__ConfigureCaptureSetting_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // capture_setting
  if (!shisen_interfaces__msg__CaptureSetting__Sequence__copy(
      &(input->capture_setting), &(output->capture_setting)))
  {
    return false;
  }
  return true;
}

shisen_interfaces__srv__ConfigureCaptureSetting_Response *
shisen_interfaces__srv__ConfigureCaptureSetting_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__srv__ConfigureCaptureSetting_Response * msg = (shisen_interfaces__srv__ConfigureCaptureSetting_Response *)allocator.allocate(sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Response));
  bool success = shisen_interfaces__srv__ConfigureCaptureSetting_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Response__destroy(shisen_interfaces__srv__ConfigureCaptureSetting_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__init(shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__srv__ConfigureCaptureSetting_Response * data = NULL;

  if (size) {
    data = (shisen_interfaces__srv__ConfigureCaptureSetting_Response *)allocator.zero_allocate(size, sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shisen_interfaces__srv__ConfigureCaptureSetting_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shisen_interfaces__srv__ConfigureCaptureSetting_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__fini(shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shisen_interfaces__srv__ConfigureCaptureSetting_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence *
shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * array = (shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence *)allocator.allocate(sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__destroy(shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__are_equal(const shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * lhs, const shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shisen_interfaces__srv__ConfigureCaptureSetting_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__copy(
  const shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * input,
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shisen_interfaces__srv__ConfigureCaptureSetting_Response * data =
      (shisen_interfaces__srv__ConfigureCaptureSetting_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shisen_interfaces__srv__ConfigureCaptureSetting_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shisen_interfaces__srv__ConfigureCaptureSetting_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shisen_interfaces__srv__ConfigureCaptureSetting_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "shisen_interfaces/srv/detail/configure_capture_setting__functions.h"

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Event__init(shisen_interfaces__srv__ConfigureCaptureSetting_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__fini(msg);
    return false;
  }
  // request
  if (!shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__init(&msg->request, 0)) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__fini(msg);
    return false;
  }
  // response
  if (!shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__init(&msg->response, 0)) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__fini(msg);
    return false;
  }
  return true;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Event__fini(shisen_interfaces__srv__ConfigureCaptureSetting_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__fini(&msg->request);
  // response
  shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__fini(&msg->response);
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Event__are_equal(const shisen_interfaces__srv__ConfigureCaptureSetting_Event * lhs, const shisen_interfaces__srv__ConfigureCaptureSetting_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Event__copy(
  const shisen_interfaces__srv__ConfigureCaptureSetting_Event * input,
  shisen_interfaces__srv__ConfigureCaptureSetting_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!shisen_interfaces__srv__ConfigureCaptureSetting_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!shisen_interfaces__srv__ConfigureCaptureSetting_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

shisen_interfaces__srv__ConfigureCaptureSetting_Event *
shisen_interfaces__srv__ConfigureCaptureSetting_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__srv__ConfigureCaptureSetting_Event * msg = (shisen_interfaces__srv__ConfigureCaptureSetting_Event *)allocator.allocate(sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Event));
  bool success = shisen_interfaces__srv__ConfigureCaptureSetting_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Event__destroy(shisen_interfaces__srv__ConfigureCaptureSetting_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence__init(shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__srv__ConfigureCaptureSetting_Event * data = NULL;

  if (size) {
    data = (shisen_interfaces__srv__ConfigureCaptureSetting_Event *)allocator.zero_allocate(size, sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shisen_interfaces__srv__ConfigureCaptureSetting_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shisen_interfaces__srv__ConfigureCaptureSetting_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence__fini(shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shisen_interfaces__srv__ConfigureCaptureSetting_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence *
shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence * array = (shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence *)allocator.allocate(sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence__destroy(shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence__are_equal(const shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence * lhs, const shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shisen_interfaces__srv__ConfigureCaptureSetting_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence__copy(
  const shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence * input,
  shisen_interfaces__srv__ConfigureCaptureSetting_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shisen_interfaces__srv__ConfigureCaptureSetting_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shisen_interfaces__srv__ConfigureCaptureSetting_Event * data =
      (shisen_interfaces__srv__ConfigureCaptureSetting_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shisen_interfaces__srv__ConfigureCaptureSetting_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shisen_interfaces__srv__ConfigureCaptureSetting_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shisen_interfaces__srv__ConfigureCaptureSetting_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
