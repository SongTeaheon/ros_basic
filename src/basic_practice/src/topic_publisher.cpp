#include "ros/ros.h"
#include "basic_practice/MsgTutorial.h"

static const std::string name_topic = "ros_tutorial_msg";
const std::string name_node = "topic_publisher";

int main(int argc, char **argv){
    ros::init(argc, argv, name_node);
    ros::NodeHandle nh;
    ros::Publisher basic_practice_pub = nh.advertise<basic_practice::MsgTutorial>(name_topic, 100); //queue 사이즈를 100개로 설정

    //10hz로 publish
    ros::Rate loop_rate(10);

    basic_practice::MsgTutorial msg;

    int count = 0;

    while(ros::ok()){
        msg.stamp = ros::Time::now();
        msg.data = count;

        ROS_INFO("send msg = %d", msg.stamp.sec);
        ROS_INFO("send msg = %d", msg.stamp.nsec);
        ROS_INFO("send msg = %d", msg.data);
        basic_practice_pub.publish(msg);
        loop_rate.sleep();

        ++count;

    }
    return 0;
}