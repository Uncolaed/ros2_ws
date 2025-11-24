cmake_minimum_required(VERSION 3.8)
project(temprature_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(interface REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

#create executables
add_executable(temprature_publisher src/temprature_publisher.cpp)
ament_target_dependencies(temprature_publisher rclcpp std_msgs interface)

install (TARGETS
  temprature_publisher
  DESTINATION lib/${PROJECT_NAME}
)



ament_package()
