// Generated by gencpp from file opt/test_msg.msg
// DO NOT EDIT!


#ifndef OPT_MESSAGE_TEST_MSG_H
#define OPT_MESSAGE_TEST_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace opt
{
template <class ContainerAllocator>
struct test_msg_
{
  typedef test_msg_<ContainerAllocator> Type;

  test_msg_()
    : offSet()  {
      offSet.assign(0.0);
  }
  test_msg_(const ContainerAllocator& _alloc)
    : offSet()  {
  (void)_alloc;
      offSet.assign(0.0);
  }



   typedef boost::array<double, 6>  _offSet_type;
  _offSet_type offSet;





  typedef boost::shared_ptr< ::opt::test_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::opt::test_msg_<ContainerAllocator> const> ConstPtr;

}; // struct test_msg_

typedef ::opt::test_msg_<std::allocator<void> > test_msg;

typedef boost::shared_ptr< ::opt::test_msg > test_msgPtr;
typedef boost::shared_ptr< ::opt::test_msg const> test_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::opt::test_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::opt::test_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace opt

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'opt': ['/home/gijs/bolts_ws/src/opt/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::opt::test_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opt::test_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opt::test_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opt::test_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opt::test_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opt::test_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::opt::test_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e800213d1d061d690a2ce91f4c737f6b";
  }

  static const char* value(const ::opt::test_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe800213d1d061d69ULL;
  static const uint64_t static_value2 = 0x0a2ce91f4c737f6bULL;
};

template<class ContainerAllocator>
struct DataType< ::opt::test_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "opt/test_msg";
  }

  static const char* value(const ::opt::test_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::opt::test_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[6] offSet\n\
";
  }

  static const char* value(const ::opt::test_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::opt::test_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.offSet);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct test_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::opt::test_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::opt::test_msg_<ContainerAllocator>& v)
  {
    s << indent << "offSet[]" << std::endl;
    for (size_t i = 0; i < v.offSet.size(); ++i)
    {
      s << indent << "  offSet[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.offSet[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPT_MESSAGE_TEST_MSG_H
