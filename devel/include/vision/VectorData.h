// Generated by gencpp from file vision/VectorData.msg
// DO NOT EDIT!


#ifndef VISION_MESSAGE_VECTORDATA_H
#define VISION_MESSAGE_VECTORDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vision
{
template <class ContainerAllocator>
struct VectorData_
{
  typedef VectorData_<ContainerAllocator> Type;

  VectorData_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , size(0.0)  {
    }
  VectorData_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , size(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _size_type;
  _size_type size;





  typedef boost::shared_ptr< ::vision::VectorData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vision::VectorData_<ContainerAllocator> const> ConstPtr;

}; // struct VectorData_

typedef ::vision::VectorData_<std::allocator<void> > VectorData;

typedef boost::shared_ptr< ::vision::VectorData > VectorDataPtr;
typedef boost::shared_ptr< ::vision::VectorData const> VectorDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vision::VectorData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vision::VectorData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vision

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'vision': ['/home/redouan/bolts_ws/src/vis/vision/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vision::VectorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision::VectorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision::VectorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision::VectorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision::VectorData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision::VectorData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vision::VectorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6997b1ca28d937e14165cdb11acaa7bd";
  }

  static const char* value(const ::vision::VectorData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6997b1ca28d937e1ULL;
  static const uint64_t static_value2 = 0x4165cdb11acaa7bdULL;
};

template<class ContainerAllocator>
struct DataType< ::vision::VectorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vision/VectorData";
  }

  static const char* value(const ::vision::VectorData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vision::VectorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains the structure of which the vector in imageCircleData.msg is made of. \n\
# One place in the vector contains x, y, z and size values of one circle detected in the image.\n\
# Date: 04-12-2018	\n\
# By Giel Oomen\n\
\n\
float64 x	# Circle position on x-axis\n\
float64 y	# Circle position on y-axis\n\
float64 z	# Circle position on z-axis (depth in meters)\n\
float64 size	# Circle size \n\
";
  }

  static const char* value(const ::vision::VectorData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vision::VectorData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VectorData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vision::VectorData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vision::VectorData_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "size: ";
    Printer<double>::stream(s, indent + "  ", v.size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISION_MESSAGE_VECTORDATA_H
