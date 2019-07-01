#include "ros/ros.h"
#include "basic_practice/SrvTutorial.h"
#include <stdlib.h>

const std::string name_node = "service_client";
const std::string name_service = "ros_service";


int main(int argc, char** argv){
    ros::init(argc, argv, name_node);

    if(argc != 4){
        ROS_INFO("WRONG");
        return 1;
    }

    ros::NodeHandle nh;

    ros::ServiceClient basic_practice_service_client = nh.serviceClient<basic_practice::SrvTutorial>(name_service);

    basic_practice::SrvTutorial srv;

    srv.request.a = atoll(argv[1]);
    srv.request.b = atoll(argv[2]);
    srv.request.srv_operator = atoll(argv[3]);


    if(basic_practice_service_client.call(srv)){
        ROS_INFO("send :  %ld, %ld", (long int)srv.request.a, (long int)srv.request.b);
        ROS_INFO("result :  %ld", (long int)srv.response.result);

    }else{
        ROS_ERROR("FAIL TO CALL SERVEICE");
        return 1;
    }

    return 0;
}