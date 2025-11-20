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

#include <chrono>
#include <functional>
#include <memory>
#include <string>
//include library to gerate random numbers
#include <random>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class SpeedSensorPublisher : public rclcpp::Node
{
public:
  //constructor to initialize publisher and timer
  SpeedSensorPublisher()
  : Node("speed_sensor"), count_(0)
  {
    //initialize random seed
    srand(time(NULL));
    //create publisher to publish speed data with std_msgs/Float64 message type
    publisher_ = this->create_publisher<std_msgs::msg::Float64>("robot_speed", 10);
    //create timer to publish speed data every 500 milliseconds
    timer_ = this->create_wall_timer(
      500ms, std::bind(&SpeedSensorPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = std_msgs::msg::Float64();
    //genrate random speed between 0 and 100
    double speed = static_cast<double>(rand() % 101);
    message.data = speed;
    RCLCPP_INFO(this->get_logger(), "Publishing Robot Speed: '%f'", message.data);
    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SpeedSensorPublisher>());
  rclcpp::shutdown();
  return 0;
}
