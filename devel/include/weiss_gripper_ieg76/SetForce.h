// Generated by gencpp from file weiss_gripper_ieg76/SetForce.msg
// DO NOT EDIT!


#ifndef WEISS_GRIPPER_IEG76_MESSAGE_SETFORCE_H
#define WEISS_GRIPPER_IEG76_MESSAGE_SETFORCE_H

#include <ros/service_traits.h>


#include <weiss_gripper_ieg76/SetForceRequest.h>
#include <weiss_gripper_ieg76/SetForceResponse.h>


namespace weiss_gripper_ieg76
{

struct SetForce
{

typedef SetForceRequest Request;
typedef SetForceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetForce
} // namespace weiss_gripper_ieg76


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::weiss_gripper_ieg76::SetForce > {
  static const char* value()
  {
    return "b2ac4e15d384364f20affcca571143b9";
  }

  static const char* value(const ::weiss_gripper_ieg76::SetForce&) { return value(); }
};

template<>
struct DataType< ::weiss_gripper_ieg76::SetForce > {
  static const char* value()
  {
    return "weiss_gripper_ieg76/SetForce";
  }

  static const char* value(const ::weiss_gripper_ieg76::SetForce&) { return value(); }
};


// service_traits::MD5Sum< ::weiss_gripper_ieg76::SetForceRequest> should match 
// service_traits::MD5Sum< ::weiss_gripper_ieg76::SetForce > 
template<>
struct MD5Sum< ::weiss_gripper_ieg76::SetForceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::weiss_gripper_ieg76::SetForce >::value();
  }
  static const char* value(const ::weiss_gripper_ieg76::SetForceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::weiss_gripper_ieg76::SetForceRequest> should match 
// service_traits::DataType< ::weiss_gripper_ieg76::SetForce > 
template<>
struct DataType< ::weiss_gripper_ieg76::SetForceRequest>
{
  static const char* value()
  {
    return DataType< ::weiss_gripper_ieg76::SetForce >::value();
  }
  static const char* value(const ::weiss_gripper_ieg76::SetForceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::weiss_gripper_ieg76::SetForceResponse> should match 
// service_traits::MD5Sum< ::weiss_gripper_ieg76::SetForce > 
template<>
struct MD5Sum< ::weiss_gripper_ieg76::SetForceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::weiss_gripper_ieg76::SetForce >::value();
  }
  static const char* value(const ::weiss_gripper_ieg76::SetForceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::weiss_gripper_ieg76::SetForceResponse> should match 
// service_traits::DataType< ::weiss_gripper_ieg76::SetForce > 
template<>
struct DataType< ::weiss_gripper_ieg76::SetForceResponse>
{
  static const char* value()
  {
    return DataType< ::weiss_gripper_ieg76::SetForce >::value();
  }
  static const char* value(const ::weiss_gripper_ieg76::SetForceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEISS_GRIPPER_IEG76_MESSAGE_SETFORCE_H