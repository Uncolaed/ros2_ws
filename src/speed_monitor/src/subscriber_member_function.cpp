// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

using std::placeholders::_1;

class SpeedMonitorSubscriber : public rclcpp::Node
{
public:
  SpeedMonitorSubscriber()
  : Node("speed_checker")
  {
    //created a subscription to the "robot_speed" topic with std_msgs/Float64 message type
    subscription_ = this->create_subscription<std_msgs::msg::Float64>("robot_speed", 10, std::bind(&SpeedMonitorSubscriber::topic_callback, this, _1));
    //create a speed limit parameter with default value of 50.0
    this->declare_parameter<double>("speed_limit", 50.0);
  }

private:
  void topic_callback(const std_msgs::msg::Float64 & msg) const
  {
    //store speed limit parameter value
    double speed_limit = this->get_parameter("speed_limit").as_double();
    if (msg.data > speed_limit) 
    {
      //log a warning if speed exceeds the limit
      RCLCPP_WARN(this->get_logger(), "Speed Limit Exceeded! Current Speed: '%1f'm/s (speed limit: '%1f')", msg.data, speed_limit);
    } else 
    {
      //log info normally if speed is within limit
      RCLCPP_INFO(this->get_logger(), "Speed is within limit. Current Speed: '%1f'm/s (speed limit: '%1f')", msg.data, speed_limit);
    }
  }
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SpeedMonitorSubscriber>());
  rclcpp::shutdown();
  return 0;
}
