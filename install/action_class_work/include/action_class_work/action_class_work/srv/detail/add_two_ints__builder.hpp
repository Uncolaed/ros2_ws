// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_class_work:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef ACTION_CLASS_WORK__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
#define ACTION_CLASS_WORK__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_class_work/srv/detail/add_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_class_work
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Request_b
{
public:
  explicit Init_AddTwoInts_Request_b(::action_class_work::srv::AddTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::action_class_work::srv::AddTwoInts_Request b(::action_class_work::srv::AddTwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_class_work::srv::AddTwoInts_Request msg_;
};

class Init_AddTwoInts_Request_a
{
public:
  Init_AddTwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Request_b a(::action_class_work::srv::AddTwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInts_Request_b(msg_);
  }

private:
  ::action_class_work::srv::AddTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_class_work::srv::AddTwoInts_Request>()
{
  return action_class_work::srv::builder::Init_AddTwoInts_Request_a();
}

}  // namespace action_class_work


namespace action_class_work
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Response_sum
{
public:
  Init_AddTwoInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_class_work::srv::AddTwoInts_Response sum(::action_class_work::srv::AddTwoInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_class_work::srv::AddTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_class_work::srv::AddTwoInts_Response>()
{
  return action_class_work::srv::builder::Init_AddTwoInts_Response_sum();
}

}  // namespace action_class_work

#endif  // ACTION_CLASS_WORK__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
