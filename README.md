this will be all of my ros2 porojects including class workd and assinments also this is my attempt at getting
comfoterable with git 

important ros2 commands that i cant remeber:

1) Remapping Node Names to help creating multiple of the same node:
- ros2 run <PKG_NAME> <NODE_NAME> --ros-args --remap __node:=<NEW_NODE_NAME>

2) selecting specfic package to build using colcon build
- colcon build --packages-select <PKG_NAME>

3) an importan step for cmake file is to find the packges that i used and to add the executable you can name it in the cmake file as well
- find_package(<PACKAGE_NAME> REQUIRED)

-add_executable(<runnable_name> src/<cppfile with node logic>.cpp)

-ament_target_dependencies(<runnable_name> <pkgs_used ex: rclcpp std_msgs>)

