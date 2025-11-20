cmake_minimum_required(VERSION 3.8)
project(add_two_ints)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

find_package(interface REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(add_two_ints_server src/add_two_ints_server.cpp)
ament_target_dependencies(add_two_ints_server rclcpp interface)

add_executable(add_two_ints_client src/add_two_ints_client.cpp)
ament_target_dependencies(add_two_ints_client rclcpp interface)

install (TARGETS
  add_two_ints_server
  add_two_ints_client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
