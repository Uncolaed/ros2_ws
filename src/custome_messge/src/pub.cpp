//publisher for testing pub/sub mechanism  using ros2 humble
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "custome_messgeStarting >>> custome_messge

using namespace std::chrono_literals;


class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher(): Node("minimal_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<custome_messge::msg::Num>("topic", 10);
    timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
  }
private:
  void timer_callback()
    {
      auto message = custome_messge::msg::Num();
      message.num = count_;
      message.name = "Mazen";
      message.mark = "!";
      RCLCPP_INFO(this->get_logger(), "Publishing: '%s %d %s'", message.name.c_str(), message.num, message.mark.c_str());
      publisher_->publish(message);
    count_++;
    }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<custome_messge::msg::Num>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}