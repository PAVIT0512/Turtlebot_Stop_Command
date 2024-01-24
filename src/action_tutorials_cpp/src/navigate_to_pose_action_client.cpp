#include <functional>
#include <memory>
#include <string>
#include <sstream>

#include "nav2_msgs/action/navigate_to_pose.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

namespace action_tutorials_cpp
{
class NavigateToPoseActionClient : public rclcpp::Node
{
public:
  using NavigateToPose = nav2_msgs::action::NavigateToPose;
  using GoalHandleNavigateToPose = rclcpp_action::ClientGoalHandle<NavigateToPose>;

  explicit NavigateToPoseActionClient(const rclcpp::NodeOptions &options)
    : Node("navigate_to_pose_action_client", options), exit_flag_(false), counter_(0)
  {
    this->client_ptr_ = rclcpp_action::create_client<NavigateToPose>(
      this,
      "/navigate_to_pose");

    this->timer_ = this->create_wall_timer(
      std::chrono::milliseconds(500),
      std::bind(&NavigateToPoseActionClient::cancel_goals, this));
  }

  void cancel_goals()
  {
    this->timer_->cancel();

    if (!this->client_ptr_->wait_for_action_server())
    {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      rclcpp::shutdown();
      return;
    }

    RCLCPP_INFO(this->get_logger(), "Stopping the Bot");

    this->client_ptr_->async_cancel_all_goals();

  
    counter_++;


    if (counter_ >= 2)  
    {
      RCLCPP_INFO(this->get_logger(), "Exit condition met. Shutting down...");
      rclcpp::shutdown();
    }
    else
    {
      // Restart the timer
      this->timer_ = this->create_wall_timer(
        std::chrono::milliseconds(500),
        std::bind(&NavigateToPoseActionClient::cancel_goals, this));
    }
  }

private:
  rclcpp_action::Client<NavigateToPose>::SharedPtr client_ptr_;
  rclcpp::TimerBase::SharedPtr timer_;
  bool exit_flag_;
  int counter_;
};
}  

RCLCPP_COMPONENTS_REGISTER_NODE(action_tutorials_cpp::NavigateToPoseActionClient)
