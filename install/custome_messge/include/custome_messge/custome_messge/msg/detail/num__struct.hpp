// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custome_messge:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CUSTOME_MESSGE__MSG__DETAIL__NUM__STRUCT_HPP_
#define CUSTOME_MESSGE__MSG__DETAIL__NUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custome_messge__msg__Num __attribute__((deprecated))
#else
# define DEPRECATED__custome_messge__msg__Num __declspec(deprecated)
#endif

namespace custome_messge
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Num_
{
  using Type = Num_<ContainerAllocator>;

  explicit Num_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->num = 0ll;
      this->mark = "";
    }
  }

  explicit Num_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    mark(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->num = 0ll;
      this->mark = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _num_type =
    int64_t;
  _num_type num;
  using _mark_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mark_type mark;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }
  Type & set__mark(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mark = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custome_messge::msg::Num_<ContainerAllocator> *;
  using ConstRawPtr =
    const custome_messge::msg::Num_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custome_messge::msg::Num_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custome_messge::msg::Num_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custome_messge::msg::Num_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custome_messge::msg::Num_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custome_messge::msg::Num_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custome_messge::msg::Num_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custome_messge::msg::Num_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custome_messge::msg::Num_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custome_messge__msg__Num
    std::shared_ptr<custome_messge::msg::Num_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custome_messge__msg__Num
    std::shared_ptr<custome_messge::msg::Num_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Num_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->num != other.num) {
      return false;
    }
    if (this->mark != other.mark) {
      return false;
    }
    return true;
  }
  bool operator!=(const Num_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Num_

// alias to use template instance with default allocator
using Num =
  custome_messge::msg::Num_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custome_messge

#endif  // CUSTOME_MESSGE__MSG__DETAIL__NUM__STRUCT_HPP_
