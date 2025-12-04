from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import os
from launch.actions import  ExecuteProcess

def generate_launch_description():

    description = FindPackageShare(package="robot_description").find("robot_description")

    urdf_model_path = os.path.join(description, "urdf","mobile_robot.urdf")

    world_file = os.path.join(description, "world","my_world.sdf")
    
    with open(urdf_model_path,"r") as infp:
        robot_description = infp.read()

    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[
            {
                "robot_description": robot_description,
                # "use_sim_time": True,
            }
        ],
        # remappings=[('/clock', '/fast_clock'),] 
    )
    
    # Publish joint states if GUI is not enabled
    joint_state_publisher = Node(
        package="joint_state_publisher_gui",
        executable="joint_state_publisher_gui",
        name="joint_state_publisher_gui",
        # parameters=[{"use_sim_time": True}],
        )
        
        
        # 1. Launch Gazebo Ignition Fortress with the world
    ign = ExecuteProcess(
        cmd=['ign', 'gazebo', world_file],            
        output='screen'
    )

        # 2. Spawn robot entity in Gazebo
    spawn_entity = Node(
        package='ros_ign_gazebo',
        executable='create',
        output='screen',
        arguments=[
            '-name', 'my_robot',
             "-topic", "robot_description"],
    )
        

        # 3. Start the ROS–Ignition bridge
    bridge= Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        name='ros_ign_bridge',
        output='screen',
        arguments=[
            # Example bridges (add your robot’s topics)
            '/clock@rosgraph_msgs/msg/Clock@ignition.msgs.Clock',
            # "/lidar@sensor_msgs/msg/LaserScan[ignition.msgs.LaserScan",
        
        ]
    )

    ld = LaunchDescription()
    # Add launch actions to start Gazebo, the robot state publisher, and RViz
    ld.add_action(joint_state_publisher)
    ld.add_action(robot_state_publisher)
    ld.add_action(ign)
    ld.add_action(spawn_entity)
    ld.add_action(bridge)
    
    return ld