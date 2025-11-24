// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Temprature.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__TEMPRATURE__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__TEMPRATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/msg/detail/temprature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Temprature & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_name
  {
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << ", ";
  }

  // member: temprature_value
  {
    out << "temprature_value: ";
    rosidl_generator_traits::value_to_yaml(msg.temprature_value, out);
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Temprature & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << "\n";
  }

  // member: temprature_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temprature_value: ";
    rosidl_generator_traits::value_to_yaml(msg.temprature_value, out);
    out << "\n";
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Temprature & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interface

namespace rosidl_generator_traits
{

[[deprecated("use interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface::msg::Temprature & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface::msg::Temprature & msg)
{
  return interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface::msg::Temprature>()
{
  return "interface::msg::Temprature";
}

template<>
inline const char * name<interface::msg::Temprature>()
{
  return "interface/msg/Temprature";
}

template<>
struct has_fixed_size<interface::msg::Temprature>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface::msg::Temprature>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface::msg::Temprature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__TEMPRATURE__TRAITS_HPP_
