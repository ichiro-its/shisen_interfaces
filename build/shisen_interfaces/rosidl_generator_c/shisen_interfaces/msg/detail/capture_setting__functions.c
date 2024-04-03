// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shisen_interfaces:msg/CaptureSetting.idl
// generated code does not contain a copyright notice
#include "shisen_interfaces/msg/detail/capture_setting__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `brightness`
// Member `contrast`
// Member `saturation`
// Member `temperature`
// Member `hue`
// Member `gain`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
shisen_interfaces__msg__CaptureSetting__init(shisen_interfaces__msg__CaptureSetting * msg)
{
  if (!msg) {
    return false;
  }
  // brightness
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->brightness, 0)) {
    shisen_interfaces__msg__CaptureSetting__fini(msg);
    return false;
  }
  // contrast
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->contrast, 0)) {
    shisen_interfaces__msg__CaptureSetting__fini(msg);
    return false;
  }
  // saturation
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->saturation, 0)) {
    shisen_interfaces__msg__CaptureSetting__fini(msg);
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->temperature, 0)) {
    shisen_interfaces__msg__CaptureSetting__fini(msg);
    return false;
  }
  // hue
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->hue, 0)) {
    shisen_interfaces__msg__CaptureSetting__fini(msg);
    return false;
  }
  // gain
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->gain, 0)) {
    shisen_interfaces__msg__CaptureSetting__fini(msg);
    return false;
  }
  return true;
}

void
shisen_interfaces__msg__CaptureSetting__fini(shisen_interfaces__msg__CaptureSetting * msg)
{
  if (!msg) {
    return;
  }
  // brightness
  rosidl_runtime_c__int32__Sequence__fini(&msg->brightness);
  // contrast
  rosidl_runtime_c__int32__Sequence__fini(&msg->contrast);
  // saturation
  rosidl_runtime_c__int32__Sequence__fini(&msg->saturation);
  // temperature
  rosidl_runtime_c__int32__Sequence__fini(&msg->temperature);
  // hue
  rosidl_runtime_c__int32__Sequence__fini(&msg->hue);
  // gain
  rosidl_runtime_c__int32__Sequence__fini(&msg->gain);
}

bool
shisen_interfaces__msg__CaptureSetting__are_equal(const shisen_interfaces__msg__CaptureSetting * lhs, const shisen_interfaces__msg__CaptureSetting * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brightness
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->brightness), &(rhs->brightness)))
  {
    return false;
  }
  // contrast
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->contrast), &(rhs->contrast)))
  {
    return false;
  }
  // saturation
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->saturation), &(rhs->saturation)))
  {
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->temperature), &(rhs->temperature)))
  {
    return false;
  }
  // hue
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->hue), &(rhs->hue)))
  {
    return false;
  }
  // gain
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->gain), &(rhs->gain)))
  {
    return false;
  }
  return true;
}

bool
shisen_interfaces__msg__CaptureSetting__copy(
  const shisen_interfaces__msg__CaptureSetting * input,
  shisen_interfaces__msg__CaptureSetting * output)
{
  if (!input || !output) {
    return false;
  }
  // brightness
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->brightness), &(output->brightness)))
  {
    return false;
  }
  // contrast
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->contrast), &(output->contrast)))
  {
    return false;
  }
  // saturation
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->saturation), &(output->saturation)))
  {
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->temperature), &(output->temperature)))
  {
    return false;
  }
  // hue
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->hue), &(output->hue)))
  {
    return false;
  }
  // gain
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->gain), &(output->gain)))
  {
    return false;
  }
  return true;
}

shisen_interfaces__msg__CaptureSetting *
shisen_interfaces__msg__CaptureSetting__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__msg__CaptureSetting * msg = (shisen_interfaces__msg__CaptureSetting *)allocator.allocate(sizeof(shisen_interfaces__msg__CaptureSetting), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shisen_interfaces__msg__CaptureSetting));
  bool success = shisen_interfaces__msg__CaptureSetting__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shisen_interfaces__msg__CaptureSetting__destroy(shisen_interfaces__msg__CaptureSetting * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shisen_interfaces__msg__CaptureSetting__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shisen_interfaces__msg__CaptureSetting__Sequence__init(shisen_interfaces__msg__CaptureSetting__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__msg__CaptureSetting * data = NULL;

  if (size) {
    data = (shisen_interfaces__msg__CaptureSetting *)allocator.zero_allocate(size, sizeof(shisen_interfaces__msg__CaptureSetting), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shisen_interfaces__msg__CaptureSetting__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shisen_interfaces__msg__CaptureSetting__fini(&data[i - 1]);
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
shisen_interfaces__msg__CaptureSetting__Sequence__fini(shisen_interfaces__msg__CaptureSetting__Sequence * array)
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
      shisen_interfaces__msg__CaptureSetting__fini(&array->data[i]);
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

shisen_interfaces__msg__CaptureSetting__Sequence *
shisen_interfaces__msg__CaptureSetting__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__msg__CaptureSetting__Sequence * array = (shisen_interfaces__msg__CaptureSetting__Sequence *)allocator.allocate(sizeof(shisen_interfaces__msg__CaptureSetting__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shisen_interfaces__msg__CaptureSetting__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shisen_interfaces__msg__CaptureSetting__Sequence__destroy(shisen_interfaces__msg__CaptureSetting__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shisen_interfaces__msg__CaptureSetting__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shisen_interfaces__msg__CaptureSetting__Sequence__are_equal(const shisen_interfaces__msg__CaptureSetting__Sequence * lhs, const shisen_interfaces__msg__CaptureSetting__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shisen_interfaces__msg__CaptureSetting__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shisen_interfaces__msg__CaptureSetting__Sequence__copy(
  const shisen_interfaces__msg__CaptureSetting__Sequence * input,
  shisen_interfaces__msg__CaptureSetting__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shisen_interfaces__msg__CaptureSetting);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shisen_interfaces__msg__CaptureSetting * data =
      (shisen_interfaces__msg__CaptureSetting *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shisen_interfaces__msg__CaptureSetting__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shisen_interfaces__msg__CaptureSetting__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shisen_interfaces__msg__CaptureSetting__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
