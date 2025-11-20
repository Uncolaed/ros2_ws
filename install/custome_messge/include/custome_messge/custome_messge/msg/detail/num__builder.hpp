// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custome_messge:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CUSTOME_MESSGE__MSG__DETAIL__NUM__BUILDER_HPP_
#define CUSTOME_MESSGE__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custome_messge/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custome_messge
{

namespace msg
{

namespace builder
{

class Init_Num_mark
{
public:
  explicit Init_Num_mark(::custome_messge::msg::Num & msg)
  : msg_(msg)
  {}
  ::custome_messge::msg::Num mark(::custome_messge::msg::Num::_mark_type arg)
  {
    msg_.mark = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custome_messge::msg::Num msg_;
};

class Init_Num_num
{
public:
  explicit Init_Num_num(::custome_messge::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_mark num(::custome_messge::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_Num_mark(msg_);
  }

private:
  ::custome_messge::msg::Num msg_;
};

class Init_Num_name
{
public:
  Init_Num_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_num name(::custome_messge::msg::Num::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Num_num(msg_);
  }

private:
  ::custome_messge::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custome_messge::msg::Num>()
{
  return custome_messge::msg::builder::Init_Num_name();
}

}  // namespace custome_messge

#endif  // CUSTOME_MESSGE__MSG__DETAIL__NUM__BUILDER_HPP_
