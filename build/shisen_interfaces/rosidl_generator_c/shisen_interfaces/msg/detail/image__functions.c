// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shisen_interfaces:msg/Image.idl
// generated code does not contain a copyright notice
#include "shisen_interfaces/msg/detail/image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
shisen_interfaces__msg__Image__init(shisen_interfaces__msg__Image * msg)
{
  if (!msg) {
    return false;
  }
  // cols
  msg->cols = 320l;
  // rows
  msg->rows = 240l;
  // channels
  msg->channels = 3l;
  // quality
  msg->quality = -1l;
  // data
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->data, 0)) {
    shisen_interfaces__msg__Image__fini(msg);
    return false;
  }
  return true;
}

void
shisen_interfaces__msg__Image__fini(shisen_interfaces__msg__Image * msg)
{
  if (!msg) {
    return;
  }
  // cols
  // rows
  // channels
  // quality
  // data
  rosidl_runtime_c__octet__Sequence__fini(&msg->data);
}

bool
shisen_interfaces__msg__Image__are_equal(const shisen_interfaces__msg__Image * lhs, const shisen_interfaces__msg__Image * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cols
  if (lhs->cols != rhs->cols) {
    return false;
  }
  // rows
  if (lhs->rows != rhs->rows) {
    return false;
  }
  // channels
  if (lhs->channels != rhs->channels) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
shisen_interfaces__msg__Image__copy(
  const shisen_interfaces__msg__Image * input,
  shisen_interfaces__msg__Image * output)
{
  if (!input || !output) {
    return false;
  }
  // cols
  output->cols = input->cols;
  // rows
  output->rows = input->rows;
  // channels
  output->channels = input->channels;
  // quality
  output->quality = input->quality;
  // data
  if (!rosidl_runtime_c__octet__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

shisen_interfaces__msg__Image *
shisen_interfaces__msg__Image__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__msg__Image * msg = (shisen_interfaces__msg__Image *)allocator.allocate(sizeof(shisen_interfaces__msg__Image), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shisen_interfaces__msg__Image));
  bool success = shisen_interfaces__msg__Image__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shisen_interfaces__msg__Image__destroy(shisen_interfaces__msg__Image * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shisen_interfaces__msg__Image__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shisen_interfaces__msg__Image__Sequence__init(shisen_interfaces__msg__Image__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__msg__Image * data = NULL;

  if (size) {
    data = (shisen_interfaces__msg__Image *)allocator.zero_allocate(size, sizeof(shisen_interfaces__msg__Image), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shisen_interfaces__msg__Image__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shisen_interfaces__msg__Image__fini(&data[i - 1]);
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
shisen_interfaces__msg__Image__Sequence__fini(shisen_interfaces__msg__Image__Sequence * array)
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
      shisen_interfaces__msg__Image__fini(&array->data[i]);
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

shisen_interfaces__msg__Image__Sequence *
shisen_interfaces__msg__Image__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__msg__Image__Sequence * array = (shisen_interfaces__msg__Image__Sequence *)allocator.allocate(sizeof(shisen_interfaces__msg__Image__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shisen_interfaces__msg__Image__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shisen_interfaces__msg__Image__Sequence__destroy(shisen_interfaces__msg__Image__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shisen_interfaces__msg__Image__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shisen_interfaces__msg__Image__Sequence__are_equal(const shisen_interfaces__msg__Image__Sequence * lhs, const shisen_interfaces__msg__Image__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shisen_interfaces__msg__Image__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shisen_interfaces__msg__Image__Sequence__copy(
  const shisen_interfaces__msg__Image__Sequence * input,
  shisen_interfaces__msg__Image__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shisen_interfaces__msg__Image);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shisen_interfaces__msg__Image * data =
      (shisen_interfaces__msg__Image *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shisen_interfaces__msg__Image__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shisen_interfaces__msg__Image__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shisen_interfaces__msg__Image__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
