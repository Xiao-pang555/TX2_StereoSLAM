// Generated by gencpp from file orb_slam2_ros/SaveMap.msg
// DO NOT EDIT!


#ifndef ORB_SLAM2_ROS_MESSAGE_SAVEMAP_H
#define ORB_SLAM2_ROS_MESSAGE_SAVEMAP_H

#include <ros/service_traits.h>


#include <../include/SaveMapRequest.h>
#include <../include/SaveMapResponse.h>


namespace orb_slam2_ros
{

struct SaveMap
{

typedef SaveMapRequest Request;
typedef SaveMapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SaveMap
} // namespace orb_slam2_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::orb_slam2_ros::SaveMap > {
  static const char* value()
  {
    return "d08a3b641c2f8680fbdfb1ea2e17a3e1";
  }

  static const char* value(const ::orb_slam2_ros::SaveMap&) { return value(); }
};

template<>
struct DataType< ::orb_slam2_ros::SaveMap > {
  static const char* value()
  {
    return "orb_slam2_ros/SaveMap";
  }

  static const char* value(const ::orb_slam2_ros::SaveMap&) { return value(); }
};


// service_traits::MD5Sum< ::orb_slam2_ros::SaveMapRequest> should match 
// service_traits::MD5Sum< ::orb_slam2_ros::SaveMap > 
template<>
struct MD5Sum< ::orb_slam2_ros::SaveMapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::orb_slam2_ros::SaveMap >::value();
  }
  static const char* value(const ::orb_slam2_ros::SaveMapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::orb_slam2_ros::SaveMapRequest> should match 
// service_traits::DataType< ::orb_slam2_ros::SaveMap > 
template<>
struct DataType< ::orb_slam2_ros::SaveMapRequest>
{
  static const char* value()
  {
    return DataType< ::orb_slam2_ros::SaveMap >::value();
  }
  static const char* value(const ::orb_slam2_ros::SaveMapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::orb_slam2_ros::SaveMapResponse> should match 
// service_traits::MD5Sum< ::orb_slam2_ros::SaveMap > 
template<>
struct MD5Sum< ::orb_slam2_ros::SaveMapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::orb_slam2_ros::SaveMap >::value();
  }
  static const char* value(const ::orb_slam2_ros::SaveMapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::orb_slam2_ros::SaveMapResponse> should match 
// service_traits::DataType< ::orb_slam2_ros::SaveMap > 
template<>
struct DataType< ::orb_slam2_ros::SaveMapResponse>
{
  static const char* value()
  {
    return DataType< ::orb_slam2_ros::SaveMap >::value();
  }
  static const char* value(const ::orb_slam2_ros::SaveMapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ORB_SLAM2_ROS_MESSAGE_SAVEMAP_H
