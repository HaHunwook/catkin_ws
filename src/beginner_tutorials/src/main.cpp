#include <ros/ros.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "beginner_tutorials_node");
    ros::NodeHandle nh;

    while (ros::ok())
    {
        ROS_INFO("HELLO WORLD");
    }

    return 0;
}