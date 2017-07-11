// Generated by gencpp from file pal_navigation_msgs/AcknowledgmentResponse.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_ACKNOWLEDGMENTRESPONSE_H
#define PAL_NAVIGATION_MSGS_MESSAGE_ACKNOWLEDGMENTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_navigation_msgs
{
template <class ContainerAllocator>
struct AcknowledgmentResponse_
{
  typedef AcknowledgmentResponse_<ContainerAllocator> Type;

  AcknowledgmentResponse_()
    : output(false)
    , error()  {
    }
  AcknowledgmentResponse_(const ContainerAllocator& _alloc)
    : output(false)
    , error(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _output_type;
  _output_type output;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_type;
  _error_type error;




  typedef boost::shared_ptr< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AcknowledgmentResponse_

typedef ::pal_navigation_msgs::AcknowledgmentResponse_<std::allocator<void> > AcknowledgmentResponse;

typedef boost::shared_ptr< ::pal_navigation_msgs::AcknowledgmentResponse > AcknowledgmentResponsePtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::AcknowledgmentResponse const> AcknowledgmentResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'pal_navigation_msgs': ['/home/mc16766/tiago_public_ws/devel/.private/pal_navigation_msgs/share/pal_navigation_msgs/msg', '/home/mc16766/tiago_public_ws/src/pal_msgs/pal_navigation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bf71ecd1af59cd66f913901847b1a87c";
  }

  static const char* value(const ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbf71ecd1af59cd66ULL;
  static const uint64_t static_value2 = 0xf913901847b1a87cULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/AcknowledgmentResponse";
  }

  static const char* value(const ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool output\n\
string error\n\
\n\
";
  }

  static const char* value(const ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AcknowledgmentResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::AcknowledgmentResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.output);
    s << indent << "error: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_ACKNOWLEDGMENTRESPONSE_H
