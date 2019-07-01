#include "ros/ros.h"

#include <memory>/*for unique_ptr*/

#include "geometry_msgs/Twist.h"/*topic msg type for [cmd_val/input/teleop]*/
#include "kobuki_msgs/BumperEvent.h"/*topic msg type for [base/events/bumper]*/

static const std::string name_node = "practice_node";
static const std::string name_topic_bumper = "/mobile_base/events/bumper";
static const std::string name_topic_teleop = "/cmd_vel_mux/input/teleop";

class TurtlebotTopicManager
{
    public:///\Method
        TurtlebotTopicManager();
        void PubCmd();

    private://\Method
        void subBump(const kobuki_msgs::BumperEvent& _msg);

    private://\Attribute
        std::unique_ptr<ros::NodeHandle> nh;
        ros::Publisher teleop_publisher;
        ros::Subscriber bumper_subscriber;
};

TurtlebotTopicManager::TurtlebotTopicManager()
{
	if(!ros::isInitialized()) { int argc=0; char** argv=NULL;
		ros::init(argc,argv,name_node, ros::init_options::NoRosout); }

    nh.reset(new ros::NodeHandle(name_node));

	teleop_publisher = nh->advertise<geometry_msgs::Twist>(
            name_topic_teleop, 1, true);
	bumper_subscriber = nh->subscribe(
            name_topic_bumper, /*queue_size*/5,&TurtlebotTopicManager::subBump,this); 
}

void TurtlebotTopicManager::subBump(const kobuki_msgs::BumperEvent& _msg) 
{ 
    if( _msg.bumper/*== true*/)
        ROS_ERROR_STREAM("BUMP!");
}

void TurtlebotTopicManager::PubCmd(/*TODO Add cmd value*/)
{
    geometry_msgs::Twist twist_msg;
    twist_msg.linear.x = 10;
    twist_msg.linear.y = 0;
    twist_msg.linear.z = 0;
    twist_msg.angular.x = 0;
    twist_msg.angular.y = 0;
    twist_msg.angular.z = 0;

	teleop_publisher.publish(twist_msg);
	ros::spinOnce();
}


int main(int argc, char* argv[])
{
    TurtlebotTopicManager turtlebot_tm;

    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        turtlebot_tm.PubCmd();
        loop_rate.sleep();
    }

    return 0;
}
