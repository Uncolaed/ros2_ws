#include "rclcpp/rclcpp.hpp"
#include "interface/srv/add_two_ints.hpp"
using AddTwoInts = interface::srv::AddTwoInts;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  
  auto node = rclcpp::Node::make_shared("add_two_ints_client");
  auto client = node->create_client<AddTwoInts>("add_two_ints");

  while (!client->wait_for_service(std::chrono::seconds(1))) {
    RCLCPP_INFO(node->get_logger(), "Waiting for service...");
  }

  auto request = std::make_shared<AddTwoInts::Request>();
  
  std::cout << "Please enter a and b values recpectively\n";
  std::cin >> request->a;
  std::cin >> request->b;

  auto result = client->async_send_request(request);
  if (rclcpp::spin_until_future_complete(node, result) ==
      rclcpp::FutureReturnCode::SUCCESS) {
    RCLCPP_INFO(node->get_logger(), "Result: %ld", result.get()->sum);
  } else {
    RCLCPP_ERROR(node->get_logger(), "Failed to call service");
  }

  rclcpp::shutdown();
  return 0;
}
