// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interface:msg/Temprature.idl
// generated code does not contain a copyright notice
#include "interface/msg/detail/temprature__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface/msg/detail/temprature__struct.h"
#include "interface/msg/detail/temprature__functions.h"
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

#include "rosidl_runtime_c/string.h"  // sensor_name, unit
#include "rosidl_runtime_c/string_functions.h"  // sensor_name, unit

// forward declare type support functions


using _Temprature__ros_msg_type = interface__msg__Temprature;

static bool _Temprature__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Temprature__ros_msg_type * ros_message = static_cast<const _Temprature__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_name
  {
    const rosidl_runtime_c__String * str = &ros_message->sensor_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: temprature_value
  {
    cdr << ros_message->temprature_value;
  }

  // Field name: unit
  {
    const rosidl_runtime_c__String * str = &ros_message->unit;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Temprature__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Temprature__ros_msg_type * ros_message = static_cast<_Temprature__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sensor_name.data) {
      rosidl_runtime_c__String__init(&ros_message->sensor_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sensor_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sensor_name'\n");
      return false;
    }
  }

  // Field name: temprature_value
  {
    cdr >> ros_message->temprature_value;
  }

  // Field name: unit
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->unit.data) {
      rosidl_runtime_c__String__init(&ros_message->unit);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->unit,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'unit'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface
size_t get_serialized_size_interface__msg__Temprature(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Temprature__ros_msg_type * ros_message = static_cast<const _Temprature__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sensor_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sensor_name.size + 1);
  // field.name temprature_value
  {
    size_t item_size = sizeof(ros_message->temprature_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name unit
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->unit.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Temprature__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface__msg__Temprature(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface
size_t max_serialized_size_interface__msg__Temprature(
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

  // member: sensor_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: temprature_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: unit
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interface__msg__Temprature;
    is_plain =
      (
      offsetof(DataType, unit) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Temprature__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface__msg__Temprature(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Temprature = {
  "interface::msg",
  "Temprature",
  _Temprature__cdr_serialize,
  _Temprature__cdr_deserialize,
  _Temprature__get_serialized_size,
  _Temprature__max_serialized_size
};

static rosidl_message_type_support_t _Temprature__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Temprature,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface, msg, Temprature)() {
  return &_Temprature__type_support;
}

#if defined(__cplusplus)
}
#endif
