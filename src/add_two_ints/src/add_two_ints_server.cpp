#include "rclcpp/rclcpp.hpp"
#include "interface/srv/add_two_ints.hpp"
using AddTwoInts = interface::srv::AddTwoInts;

using std::placeholders::_1;
using std::placeholders::_2;

class AddTwoIntsServer : public rclcpp::Node
{
public:
  AddTwoIntsServer() : Node("add_two_ints_server")
  {
    server_ = this->create_service<AddTwoInts>(
      "add_two_ints",  std::bind(&AddTwoIntsServer::add, this, _1, _2) );
    
    RCLCPP_INFO(this->get_logger(), "Service server C++ node has been created");
   
  }

private:
  rclcpp::Service<AddTwoInts>::SharedPtr server_;

  void add(const std::shared_ptr<AddTwoInts::Request> request,
    std::shared_ptr<AddTwoInts::Response>      response)
    {
    response->sum = request->a + request->b;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %ld" " b: %ld",
              request->a, request->b);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
    }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AddTwoIntsServer>());
  rclcpp::shutdown();
  return 0;
}
