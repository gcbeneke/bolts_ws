// Generated by gencpp from file opt/Bru_irb_rotateBoltActionGoal.msg
// DO NOT EDIT!


#ifndef OPT_MESSAGE_BRU_IRB_ROTATEBOLTACTIONGOAL_H
#define OPT_MESSAGE_BRU_IRB_ROTATEBOLTACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <opt/Bru_irb_rotateBoltGoal.h>

namespace opt
{
template <class ContainerAllocator>
struct Bru_irb_rotateBoltActionGoal_
{
  typedef Bru_irb_rotateBoltActionGoal_<ContainerAllocator> Type;

  Bru_irb_rotateBoltActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  Bru_irb_rotateBoltActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::opt::Bru_irb_rotateBoltGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct Bru_irb_rotateBoltActionGoal_

typedef ::opt::Bru_irb_rotateBoltActionGoal_<std::allocator<void> > Bru_irb_rotateBoltActionGoal;

typedef boost::shared_ptr< ::opt::Bru_irb_rotateBoltActionGoal > Bru_irb_rotateBoltActionGoalPtr;
typedef boost::shared_ptr< ::opt::Bru_irb_rotateBoltActionGoal const> Bru_irb_rotateBoltActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace opt

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'opt': ['/home/gijs/bolts_ws/src/opt/msg', '/home/gijs/bolts_ws/devel/share/opt/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "249264aba57f7821218fbc90d41f5f41";
  }

  static const char* value(const ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x249264aba57f7821ULL;
  static const uint64_t static_value2 = 0x218fbc90d41f5f41ULL;
};

template<class ContainerAllocator>
struct DataType< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "opt/Bru_irb_rotateBoltActionGoal";
  }

  static const char* value(const ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
Bru_irb_rotateBoltGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: opt/Bru_irb_rotateBoltGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# This is an action definition file, which has three parts: the goal\n\
# the result, and the feedback.\n\
# Part 1: the goal.\n\
#\n\
# The angle in degree the robot to turn, sent by client main\n\
float64 angle\n\
";
  }

  static const char* value(const ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Bru_irb_rotateBoltActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::opt::Bru_irb_rotateBoltActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::opt::Bru_irb_rotateBoltGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPT_MESSAGE_BRU_IRB_ROTATEBOLTACTIONGOAL_H
