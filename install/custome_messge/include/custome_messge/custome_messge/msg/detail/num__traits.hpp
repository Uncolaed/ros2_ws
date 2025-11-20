// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custome_messge:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CUSTOME_MESSGE__MSG__DETAIL__NUM__TRAITS_HPP_
#define CUSTOME_MESSGE__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custome_messge/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custome_messge
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << ", ";
  }

  // member: mark
  {
    out << "mark: ";
    rosidl_generator_traits::value_to_yaml(msg.mark, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }

  // member: mark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mark: ";
    rosidl_generator_traits::value_to_yaml(msg.mark, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
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

}  // namespace custome_messge

namespace rosidl_generator_traits
{

[[deprecated("use custome_messge::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custome_messge::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  custome_messge::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custome_messge::msg::to_yaml() instead")]]
inline std::string to_yaml(const custome_messge::msg::Num & msg)
{
  return custome_messge::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custome_messge::msg::Num>()
{
  return "custome_messge::msg::Num";
}

template<>
inline const char * name<custome_messge::msg::Num>()
{
  return "custome_messge/msg/Num";
}

template<>
struct has_fixed_size<custome_messge::msg::Num>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custome_messge::msg::Num>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custome_messge::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOME_MESSGE__MSG__DETAIL__NUM__TRAITS_HPP_
