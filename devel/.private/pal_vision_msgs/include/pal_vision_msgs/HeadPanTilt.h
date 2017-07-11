// Generated by gencpp from file pal_vision_msgs/HeadPanTilt.msg
// DO NOT EDIT!


#ifndef PAL_VISION_MSGS_MESSAGE_HEADPANTILT_H
#define PAL_VISION_MSGS_MESSAGE_HEADPANTILT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pal_vision_msgs
{
template <class ContainerAllocator>
struct HeadPanTilt_
{
  typedef HeadPanTilt_<ContainerAllocator> Type;

  HeadPanTilt_()
    : header()
    , pan(0.0)
    , tilt(0.0)  {
    }
  HeadPanTilt_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pan(0.0)
    , tilt(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _pan_type;
  _pan_type pan;

   typedef float _tilt_type;
  _tilt_type tilt;




  typedef boost::shared_ptr< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> const> ConstPtr;

}; // struct HeadPanTilt_

typedef ::pal_vision_msgs::HeadPanTilt_<std::allocator<void> > HeadPanTilt;

typedef boost::shared_ptr< ::pal_vision_msgs::HeadPanTilt > HeadPanTiltPtr;
typedef boost::shared_ptr< ::pal_vision_msgs::HeadPanTilt const> HeadPanTiltConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'pal_vision_msgs': ['/home/mc16766/tiago_public_ws/src/pal_msgs/pal_vision_msgs/msg', '/home/mc16766/tiago_public_ws/devel/.private/pal_vision_msgs/share/pal_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a7f57c9f96db29da139b70516999666";
  }

  static const char* value(const ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a7f57c9f96db29dULL;
  static const uint64_t static_value2 = 0xa139b70516999666ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_vision_msgs/HeadPanTilt";
  }

  static const char* value(const ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Contains the angular position of the Pan and Tilt of the robot head\n\
\n\
Header header\n\
\n\
float32 pan\n\
float32 tilt\n\
\n\
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
";
  }

  static const char* value(const ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pan);
      stream.next(m.tilt);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HeadPanTilt_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_vision_msgs::HeadPanTilt_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pan: ";
    Printer<float>::stream(s, indent + "  ", v.pan);
    s << indent << "tilt: ";
    Printer<float>::stream(s, indent + "  ", v.tilt);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISION_MSGS_MESSAGE_HEADPANTILT_H
