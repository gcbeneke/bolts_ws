// Generated by gencpp from file weiss_gripper_ieg76/SetForceResponse.msg
// DO NOT EDIT!


#ifndef WEISS_GRIPPER_IEG76_MESSAGE_SETFORCERESPONSE_H
#define WEISS_GRIPPER_IEG76_MESSAGE_SETFORCERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace weiss_gripper_ieg76
{
template <class ContainerAllocator>
struct SetForceResponse_
{
  typedef SetForceResponse_<ContainerAllocator> Type;

  SetForceResponse_()
    : success(false)
    , message()  {
    }
  SetForceResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetForceResponse_

typedef ::weiss_gripper_ieg76::SetForceResponse_<std::allocator<void> > SetForceResponse;

typedef boost::shared_ptr< ::weiss_gripper_ieg76::SetForceResponse > SetForceResponsePtr;
typedef boost::shared_ptr< ::weiss_gripper_ieg76::SetForceResponse const> SetForceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace weiss_gripper_ieg76

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "weiss_gripper_ieg76/SetForceResponse";
  }

  static const char* value(const ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
string message\n\
\n\
";
  }

  static const char* value(const ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetForceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::weiss_gripper_ieg76::SetForceResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEISS_GRIPPER_IEG76_MESSAGE_SETFORCERESPONSE_H
