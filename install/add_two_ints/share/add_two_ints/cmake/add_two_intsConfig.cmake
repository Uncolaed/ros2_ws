# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_add_two_ints_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED add_two_ints_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(add_two_ints_FOUND FALSE)
  elseif(NOT add_two_ints_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(add_two_ints_FOUND FALSE)
  endif()
  return()
endif()
set(_add_two_ints_CONFIG_INCLUDED TRUE)

# output package information
if(NOT add_two_ints_FIND_QUIETLY)
  message(STATUS "Found add_two_ints: 0.0.0 (${add_two_ints_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'add_two_ints' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${add_two_ints_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(add_two_ints_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${add_two_ints_DIR}/${_extra}")
endforeach()
