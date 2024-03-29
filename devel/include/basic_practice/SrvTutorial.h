// Generated by gencpp from file basic_practice/SrvTutorial.msg
// DO NOT EDIT!


#ifndef BASIC_PRACTICE_MESSAGE_SRVTUTORIAL_H
#define BASIC_PRACTICE_MESSAGE_SRVTUTORIAL_H

#include <ros/service_traits.h>


#include <basic_practice/SrvTutorialRequest.h>
#include <basic_practice/SrvTutorialResponse.h>


namespace basic_practice
{

struct SrvTutorial
{

typedef SrvTutorialRequest Request;
typedef SrvTutorialResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SrvTutorial
} // namespace basic_practice


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::basic_practice::SrvTutorial > {
  static const char* value()
  {
    return "3ff5c1f5bf57cd2886657c54a4dbd8fd";
  }

  static const char* value(const ::basic_practice::SrvTutorial&) { return value(); }
};

template<>
struct DataType< ::basic_practice::SrvTutorial > {
  static const char* value()
  {
    return "basic_practice/SrvTutorial";
  }

  static const char* value(const ::basic_practice::SrvTutorial&) { return value(); }
};


// service_traits::MD5Sum< ::basic_practice::SrvTutorialRequest> should match 
// service_traits::MD5Sum< ::basic_practice::SrvTutorial > 
template<>
struct MD5Sum< ::basic_practice::SrvTutorialRequest>
{
  static const char* value()
  {
    return MD5Sum< ::basic_practice::SrvTutorial >::value();
  }
  static const char* value(const ::basic_practice::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::basic_practice::SrvTutorialRequest> should match 
// service_traits::DataType< ::basic_practice::SrvTutorial > 
template<>
struct DataType< ::basic_practice::SrvTutorialRequest>
{
  static const char* value()
  {
    return DataType< ::basic_practice::SrvTutorial >::value();
  }
  static const char* value(const ::basic_practice::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::basic_practice::SrvTutorialResponse> should match 
// service_traits::MD5Sum< ::basic_practice::SrvTutorial > 
template<>
struct MD5Sum< ::basic_practice::SrvTutorialResponse>
{
  static const char* value()
  {
    return MD5Sum< ::basic_practice::SrvTutorial >::value();
  }
  static const char* value(const ::basic_practice::SrvTutorialResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::basic_practice::SrvTutorialResponse> should match 
// service_traits::DataType< ::basic_practice::SrvTutorial > 
template<>
struct DataType< ::basic_practice::SrvTutorialResponse>
{
  static const char* value()
  {
    return DataType< ::basic_practice::SrvTutorial >::value();
  }
  static const char* value(const ::basic_practice::SrvTutorialResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BASIC_PRACTICE_MESSAGE_SRVTUTORIAL_H
