cmake_minimum_required(VERSION 3.8)
project(action_class_work)

# Find required packages
find_package(ament_cmake REQUIRED)
find_package(interface REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rosidl_default_generators REQUIRED)


add_executable(countdown_server src/countdown_server.cpp)
add_executable(countdown_client src/countdown_client.cpp)

# Link against required libraries

ament_target_dependencies(countdown_server rclcpp rclcpp_action interface)
ament_target_dependencies(countdown_client rclcpp rclcpp_action interface)


# Install targets
install(TARGETS
  countdown_server
  countdown_client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
