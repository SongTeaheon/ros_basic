#include "ros/ros.h"
#include "basic_practice/MsgTutorial.h"

const std::string name_node = "topic_subscriber";
static const std::string name_topic = "ros_tutorial_msg";


void msgCallback(const basic_practice::MsgTutorial::ConstPtr& msg)
{
    ROS_INFO("receive msg = %d", msg->stamp.sec);
    ROS_INFO("receive msg = %d", msg->stamp.nsec);
    ROS_INFO("receive msg = %d", msg->data);
}
int main(int argc, char** argv){
    ros::init(argc, argv, name_node);
    ros::NodeHandle nh;

    ros::Subscriber basic_practice_sub = nh.subscribe(name_topic, 100, msgCallback);

    //메시지 수신 대기
    //수신되었을 경우 콜백 실행
    ros::spin();

    return 0;
}