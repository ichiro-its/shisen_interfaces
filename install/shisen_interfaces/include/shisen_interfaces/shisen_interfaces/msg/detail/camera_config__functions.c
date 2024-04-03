// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shisen_interfaces:msg/CameraConfig.idl
// generated code does not contain a copyright notice
#include "shisen_interfaces/msg/detail/camera_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
shisen_interfaces__msg__CameraConfig__init(shisen_interfaces__msg__CameraConfig * msg)
{
  if (!msg) {
    return false;
  }
  // width
  msg->width = 320l;
  // height
  msg->height = 240l;
  // v_angle
  msg->v_angle = -1.0f;
  // h_angle
  msg->h_angle = -1.0f;
  return true;
}

void
shisen_interfaces__msg__CameraConfig__fini(shisen_interfaces__msg__CameraConfig * msg)
{
  if (!msg) {
    return;
  }
  // width
  // height
  // v_angle
  // h_angle
}

bool
shisen_interfaces__msg__CameraConfig__are_equal(const shisen_interfaces__msg__CameraConfig * lhs, const shisen_interfaces__msg__CameraConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // v_angle
  if (lhs->v_angle != rhs->v_angle) {
    return false;
  }
  // h_angle
  if (lhs->h_angle != rhs->h_angle) {
    return false;
  }
  return true;
}

bool
shisen_interfaces__msg__CameraConfig__copy(
  const shisen_interfaces__msg__CameraConfig * input,
  shisen_interfaces__msg__CameraConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // v_angle
  output->v_angle = input->v_angle;
  // h_angle
  output->h_angle = input->h_angle;
  return true;
}

shisen_interfaces__msg__CameraConfig *
shisen_interfaces__msg__CameraConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__msg__CameraConfig * msg = (shisen_interfaces__msg__CameraConfig *)allocator.allocate(sizeof(shisen_interfaces__msg__CameraConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shisen_interfaces__msg__CameraConfig));
  bool success = shisen_interfaces__msg__CameraConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shisen_interfaces__msg__CameraConfig__destroy(shisen_interfaces__msg__CameraConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shisen_interfaces__msg__CameraConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shisen_interfaces__msg__CameraConfig__Sequence__init(shisen_interfaces__msg__CameraConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__msg__CameraConfig * data = NULL;

  if (size) {
    data = (shisen_interfaces__msg__CameraConfig *)allocator.zero_allocate(size, sizeof(shisen_interfaces__msg__CameraConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shisen_interfaces__msg__CameraConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shisen_interfaces__msg__CameraConfig__fini(&data[i - 1]);
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
shisen_interfaces__msg__CameraConfig__Sequence__fini(shisen_interfaces__msg__CameraConfig__Sequence * array)
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
      shisen_interfaces__msg__CameraConfig__fini(&array->data[i]);
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

shisen_interfaces__msg__CameraConfig__Sequence *
shisen_interfaces__msg__CameraConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shisen_interfaces__msg__CameraConfig__Sequence * array = (shisen_interfaces__msg__CameraConfig__Sequence *)allocator.allocate(sizeof(shisen_interfaces__msg__CameraConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shisen_interfaces__msg__CameraConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shisen_interfaces__msg__CameraConfig__Sequence__destroy(shisen_interfaces__msg__CameraConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shisen_interfaces__msg__CameraConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shisen_interfaces__msg__CameraConfig__Sequence__are_equal(const shisen_interfaces__msg__CameraConfig__Sequence * lhs, const shisen_interfaces__msg__CameraConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shisen_interfaces__msg__CameraConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shisen_interfaces__msg__CameraConfig__Sequence__copy(
  const shisen_interfaces__msg__CameraConfig__Sequence * input,
  shisen_interfaces__msg__CameraConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shisen_interfaces__msg__CameraConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shisen_interfaces__msg__CameraConfig * data =
      (shisen_interfaces__msg__CameraConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shisen_interfaces__msg__CameraConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shisen_interfaces__msg__CameraConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shisen_interfaces__msg__CameraConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
