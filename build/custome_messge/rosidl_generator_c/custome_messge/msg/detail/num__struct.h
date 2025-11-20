// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custome_messge:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CUSTOME_MESSGE__MSG__DETAIL__NUM__STRUCT_H_
#define CUSTOME_MESSGE__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'mark'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Num in the package custome_messge.
/**
  * num messge
 */
typedef struct custome_messge__msg__Num
{
  rosidl_runtime_c__String name;
  int64_t num;
  rosidl_runtime_c__String mark;
} custome_messge__msg__Num;

// Struct for a sequence of custome_messge__msg__Num.
typedef struct custome_messge__msg__Num__Sequence
{
  custome_messge__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custome_messge__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOME_MESSGE__MSG__DETAIL__NUM__STRUCT_H_
