//publisher for testing pub/sub mechanism using ros2 humble
#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "custome_messge/msg/num.hpp"

using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher() : Node("minimal_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<custome_messge::msg::Num>("topic", 10);
    timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    custome_messge::msg::Num message;
    message.num = count_;
    message.name = "Mazen";
    message.mark = "!";

    RCLCPP_INFO(this->get_logger(), "Publishing: '%s %d %s'",
                message.name.c_str(), (int)message.num, message.mark.c_str());

    publisher_->publish(message);
    count_++;
  }

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<custome_messge::msg::Num>::SharedPtr publisher_;
  int32_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
