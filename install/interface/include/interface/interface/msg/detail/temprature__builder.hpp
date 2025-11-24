// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Temprature.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__TEMPRATURE__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__TEMPRATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/temprature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Temprature_unit
{
public:
  explicit Init_Temprature_unit(::interface::msg::Temprature & msg)
  : msg_(msg)
  {}
  ::interface::msg::Temprature unit(::interface::msg::Temprature::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Temprature msg_;
};

class Init_Temprature_temprature_value
{
public:
  explicit Init_Temprature_temprature_value(::interface::msg::Temprature & msg)
  : msg_(msg)
  {}
  Init_Temprature_unit temprature_value(::interface::msg::Temprature::_temprature_value_type arg)
  {
    msg_.temprature_value = std::move(arg);
    return Init_Temprature_unit(msg_);
  }

private:
  ::interface::msg::Temprature msg_;
};

class Init_Temprature_sensor_name
{
public:
  Init_Temprature_sensor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Temprature_temprature_value sensor_name(::interface::msg::Temprature::_sensor_name_type arg)
  {
    msg_.sensor_name = std::move(arg);
    return Init_Temprature_temprature_value(msg_);
  }

private:
  ::interface::msg::Temprature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Temprature>()
{
  return interface::msg::builder::Init_Temprature_sensor_name();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__TEMPRATURE__BUILDER_HPP_
