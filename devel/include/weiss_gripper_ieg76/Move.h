// Generated by gencpp from file weiss_gripper_ieg76/Move.msg
// DO NOT EDIT!


#ifndef WEISS_GRIPPER_IEG76_MESSAGE_MOVE_H
#define WEISS_GRIPPER_IEG76_MESSAGE_MOVE_H

#include <ros/service_traits.h>


#include <weiss_gripper_ieg76/MoveRequest.h>
#include <weiss_gripper_ieg76/MoveResponse.h>


namespace weiss_gripper_ieg76
{

struct Move
{

typedef MoveRequest Request;
typedef MoveResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Move
} // namespace weiss_gripper_ieg76


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::weiss_gripper_ieg76::Move > {
  static const char* value()
  {
    return "68db0cb3ba325cf1de1b79dde3e8e0ea";
  }

  static const char* value(const ::weiss_gripper_ieg76::Move&) { return value(); }
};

template<>
struct DataType< ::weiss_gripper_ieg76::Move > {
  static const char* value()
  {
    return "weiss_gripper_ieg76/Move";
  }

  static const char* value(const ::weiss_gripper_ieg76::Move&) { return value(); }
};


// service_traits::MD5Sum< ::weiss_gripper_ieg76::MoveRequest> should match 
// service_traits::MD5Sum< ::weiss_gripper_ieg76::Move > 
template<>
struct MD5Sum< ::weiss_gripper_ieg76::MoveRequest>
{
  static const char* value()
  {
    return MD5Sum< ::weiss_gripper_ieg76::Move >::value();
  }
  static const char* value(const ::weiss_gripper_ieg76::MoveRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::weiss_gripper_ieg76::MoveRequest> should match 
// service_traits::DataType< ::weiss_gripper_ieg76::Move > 
template<>
struct DataType< ::weiss_gripper_ieg76::MoveRequest>
{
  static const char* value()
  {
    return DataType< ::weiss_gripper_ieg76::Move >::value();
  }
  static const char* value(const ::weiss_gripper_ieg76::MoveRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::weiss_gripper_ieg76::MoveResponse> should match 
// service_traits::MD5Sum< ::weiss_gripper_ieg76::Move > 
template<>
struct MD5Sum< ::weiss_gripper_ieg76::MoveResponse>
{
  static const char* value()
  {
    return MD5Sum< ::weiss_gripper_ieg76::Move >::value();
  }
  static const char* value(const ::weiss_gripper_ieg76::MoveResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::weiss_gripper_ieg76::MoveResponse> should match 
// service_traits::DataType< ::weiss_gripper_ieg76::Move > 
template<>
struct DataType< ::weiss_gripper_ieg76::MoveResponse>
{
  static const char* value()
  {
    return DataType< ::weiss_gripper_ieg76::Move >::value();
  }
  static const char* value(const ::weiss_gripper_ieg76::MoveResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEISS_GRIPPER_IEG76_MESSAGE_MOVE_H