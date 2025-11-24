//publisher for testing pub/sub mechanism  using ros2 humble
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <random>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "interface/msg/temprature.hpp"

using namespace std::chrono_literals;

class TempraturePublisher : public rclcpp::Node
{
public:
  TempraturePublisher(): Node("temprature_publisher"), count_(0)
  {
    //initialize random seed
    srand(time(NULL));
    publisher_ = this->create_publisher<interface::msg::Temprature>("temperature_data", 10);
    timer_ = this->create_wall_timer(
      500ms, std::bind(&TempraturePublisher::timer_callback, this));
  }
private:
  void timer_callback()
    {
      auto message = interface::msg::Temprature();
      message.sensor_name = "DHT22";
      message.unit = "Celsius";
      // genrate random temperature value between 20.0 and 30.0
      double temprature = 10.0 + static_cast<double>(rand()) / RAND_MAX * (45.0 - 10.0);
      message.temprature_value = temprature;
      RCLCPP_INFO
      (
        this->get_logger(),
        "Publishing: sensor=%s value=%.2f %s",
        message.sensor_name.c_str(),
       message.temprature_value,
        message.unit.c_str()
    );
      publisher_->publish(message);
    }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<interface::msg::Temprature>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TempraturePublisher>());
  rclcpp::shutdown();
  return 0;
}