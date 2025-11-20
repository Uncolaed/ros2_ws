cmake_minimum_required(VERSION 3.8)
project(speed_monitor)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# add executables
add_executable(speed_sensor_publisher src/publisher_member_function.cpp)
ament_target_dependencies(speed_sensor_publisher rclcpp std_msgs)

add_executable(speed_checker_subscriber src/subscriber_member_function.cpp)
ament_target_dependencies(speed_checker_subscriber rclcpp std_msgs)

# install targets to be built
install (TARGETS
  speed_sensor_publisher
  speed_checker_subscriber
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
