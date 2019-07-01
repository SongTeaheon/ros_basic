#include "ros/ros.h"
#include "basic_practice/SrvTutorial.h"

#define PLUS 1
#define MINUS 2
#define MULTIPLICATION 3
#define DIVISION 4

const std::string name_node = "service_server";
const std::string name_service = "ros_service";

bool calculation(basic_practice::SrvTutorial::Request &req,
                 basic_practice::SrvTutorial::Response &res)
{
    switch(req.srv_operator){
        case PLUS:  res.result = req.a + req.b;break;
        case MINUS: res.result = req.a - req.b;break;
        case MULTIPLICATION: res.result = req.a * req.b;break;
        case DIVISION: 
            if(req.b == 0)
            {
                ROS_INFO("CAN NOT DIVISION WITH 0");
                return true;
            }else{
                res.result = req.a/req.b;
            }

    }
    

    ROS_INFO("request : x = %ld, y = %ld, srv_operator : %ld",
             (long int)req.a, (long int)req.b, (long int)req.srv_operator);
    ROS_INFO("response : result = %ld", (long int)res.result);

    return true;

}

int main(int argc, char** argv){
    ros::init(argc, argv, name_node);
    ros::NodeHandle nh;

    nh.setParam("calculation_method", PLUS);
    ros::ServiceServer basic_practice_service_server = nh.advertiseService(name_service, calculation);

    ROS_INFO("ready srv server!");

    ros::spin();

    return 0;
}