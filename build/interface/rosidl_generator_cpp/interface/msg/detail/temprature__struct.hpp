// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:msg/Temprature.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__TEMPRATURE__STRUCT_HPP_
#define INTERFACE__MSG__DETAIL__TEMPRATURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface__msg__Temprature __attribute__((deprecated))
#else
# define DEPRECATED__interface__msg__Temprature __declspec(deprecated)
#endif

namespace interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Temprature_
{
  using Type = Temprature_<ContainerAllocator>;

  explicit Temprature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->temprature_value = 0.0;
      this->unit = "";
    }
  }

  explicit Temprature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_name(_alloc),
    unit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->temprature_value = 0.0;
      this->unit = "";
    }
  }

  // field types and members
  using _sensor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_name_type sensor_name;
  using _temprature_value_type =
    double;
  _temprature_value_type temprature_value;
  using _unit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unit_type unit;

  // setters for named parameter idiom
  Type & set__sensor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_name = _arg;
    return *this;
  }
  Type & set__temprature_value(
    const double & _arg)
  {
    this->temprature_value = _arg;
    return *this;
  }
  Type & set__unit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::msg::Temprature_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::msg::Temprature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::msg::Temprature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::msg::Temprature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::msg::Temprature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Temprature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::msg::Temprature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Temprature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::msg::Temprature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::msg::Temprature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__msg__Temprature
    std::shared_ptr<interface::msg::Temprature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__msg__Temprature
    std::shared_ptr<interface::msg::Temprature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Temprature_ & other) const
  {
    if (this->sensor_name != other.sensor_name) {
      return false;
    }
    if (this->temprature_value != other.temprature_value) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    return true;
  }
  bool operator!=(const Temprature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Temprature_

// alias to use template instance with default allocator
using Temprature =
  interface::msg::Temprature_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__TEMPRATURE__STRUCT_HPP_
