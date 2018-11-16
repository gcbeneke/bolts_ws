// Generated by gencpp from file opt/Bru_irb_correctPositionGoal.msg
// DO NOT EDIT!


#ifndef OPT_MESSAGE_BRU_IRB_CORRECTPOSITIONGOAL_H
#define OPT_MESSAGE_BRU_IRB_CORRECTPOSITIONGOAL_H


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
struct Bru_irb_correctPositionGoal_
{
  typedef Bru_irb_correctPositionGoal_<ContainerAllocator> Type;

  Bru_irb_correctPositionGoal_()
    : angle(0.0)  {
    }
  Bru_irb_correctPositionGoal_(const ContainerAllocator& _alloc)
    : angle(0.0)  {
  (void)_alloc;
    }



   typedef double _angle_type;
  _angle_type angle;





  typedef boost::shared_ptr< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct Bru_irb_correctPositionGoal_

typedef ::opt::Bru_irb_correctPositionGoal_<std::allocator<void> > Bru_irb_correctPositionGoal;

typedef boost::shared_ptr< ::opt::Bru_irb_correctPositionGoal > Bru_irb_correctPositionGoalPtr;
typedef boost::shared_ptr< ::opt::Bru_irb_correctPositionGoal const> Bru_irb_correctPositionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace opt

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'opt': ['/home/gijs/bolts_ws/src/opt/msg', '/home/gijs/bolts_ws/devel/share/opt/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4edb55038e2b888976a0c0c56935341c";
  }

  static const char* value(const ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4edb55038e2b8889ULL;
  static const uint64_t static_value2 = 0x76a0c0c56935341cULL;
};

template<class ContainerAllocator>
struct DataType< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "opt/Bru_irb_correctPositionGoal";
  }

  static const char* value(const ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# This is an action definition file, which has three parts: the goal\n\
# the result, and the feedback.\n\
# Part 1: the goal.\n\
#\n\
# The angle in degree the robot to turn, sent by client main\n\
float64 angle\n\
";
  }

  static const char* value(const ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Bru_irb_correctPositionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::opt::Bru_irb_correctPositionGoal_<ContainerAllocator>& v)
  {
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPT_MESSAGE_BRU_IRB_CORRECTPOSITIONGOAL_H
