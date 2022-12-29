// Generated by gencpp from file rasa_ros/Dialogue.msg
// DO NOT EDIT!


#ifndef RASA_ROS_MESSAGE_DIALOGUE_H
#define RASA_ROS_MESSAGE_DIALOGUE_H

#include <ros/service_traits.h>


#include <rasa_ros/DialogueRequest.h>
#include <rasa_ros/DialogueResponse.h>


namespace rasa_ros
{

struct Dialogue
{

typedef DialogueRequest Request;
typedef DialogueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Dialogue
} // namespace rasa_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rasa_ros::Dialogue > {
  static const char* value()
  {
    return "af708bc8927c16924fd75aabb46f9abb";
  }

  static const char* value(const ::rasa_ros::Dialogue&) { return value(); }
};

template<>
struct DataType< ::rasa_ros::Dialogue > {
  static const char* value()
  {
    return "rasa_ros/Dialogue";
  }

  static const char* value(const ::rasa_ros::Dialogue&) { return value(); }
};


// service_traits::MD5Sum< ::rasa_ros::DialogueRequest> should match
// service_traits::MD5Sum< ::rasa_ros::Dialogue >
template<>
struct MD5Sum< ::rasa_ros::DialogueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rasa_ros::Dialogue >::value();
  }
  static const char* value(const ::rasa_ros::DialogueRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rasa_ros::DialogueRequest> should match
// service_traits::DataType< ::rasa_ros::Dialogue >
template<>
struct DataType< ::rasa_ros::DialogueRequest>
{
  static const char* value()
  {
    return DataType< ::rasa_ros::Dialogue >::value();
  }
  static const char* value(const ::rasa_ros::DialogueRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rasa_ros::DialogueResponse> should match
// service_traits::MD5Sum< ::rasa_ros::Dialogue >
template<>
struct MD5Sum< ::rasa_ros::DialogueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rasa_ros::Dialogue >::value();
  }
  static const char* value(const ::rasa_ros::DialogueResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rasa_ros::DialogueResponse> should match
// service_traits::DataType< ::rasa_ros::Dialogue >
template<>
struct DataType< ::rasa_ros::DialogueResponse>
{
  static const char* value()
  {
    return DataType< ::rasa_ros::Dialogue >::value();
  }
  static const char* value(const ::rasa_ros::DialogueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RASA_ROS_MESSAGE_DIALOGUE_H
