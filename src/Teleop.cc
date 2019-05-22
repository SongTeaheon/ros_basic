#include "ros/ros.h"
#include <string>
#include <memory>/*unique_ptr*/
#include "geometry_msgs/Twist.h"
#include "kobuki_msgs/BumperEvent.h"

void SubBump(const kobuki_msgs::BumperEvent& _msg);
void PubCmd();
std::unique_ptr<ros::NodeHandle> nh;
ros::Subscriber bumper_subscriber;
ros::Publisher cmd_publisher;

int main(int argc, char* argv[])
{

    std::string name_node = "prac_node";
    std::string name_topic_bumper = "/mobile_base/events/bumper";
    std::string name_topic_cmd = "/cmd_vel_mux/input/teleop";

	if(!ros::isInitialized()) 
    {
		ros::init(argc,argv,name_node, ros::init_options::NoRosout); 
    }

    nh.reset(new ros::NodeHandle(name_node));

	bumper_subscriber = nh->subscribe(name_topic_bumper, /*queue_size*/5, SubBump, ros::TransportHints().unreliable());
	cmd_publisher = nh->advertise<geometry_msgs::Twist>( name_topic_cmd, 1, true);

    ros::Rate loop_rate(10);
    while(ros::ok())
    {
        PubCmd();
        loop_rate.sleep();
    }
    return 0;
}

void SubBump(const kobuki_msgs::BumperEvent& _msg) 
{ 
    if( _msg.bumper/*==1*/)
    {
        ROS_ERROR_STREAM("BUMP!");
    }
}
void PubCmd()
{
    geometry_msgs::Twist twist_msg;
    twist_msg.linear.x = 10;
    twist_msg.linear.y = 0;
    twist_msg.linear.z = 0;
    twist_msg.angular.x = 0;
    twist_msg.angular.y = 0;
    twist_msg.angular.z = 0;
	cmd_publisher.publish(twist_msg);
	ros::spinOnce();
}
