// Generated by gencpp from file pal_control_msgs/CurrentLimitResponse.msg
// DO NOT EDIT!


#ifndef PAL_CONTROL_MSGS_MESSAGE_CURRENTLIMITRESPONSE_H
#define PAL_CONTROL_MSGS_MESSAGE_CURRENTLIMITRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_control_msgs
{
template <class ContainerAllocator>
struct CurrentLimitResponse_
{
  typedef CurrentLimitResponse_<ContainerAllocator> Type;

  CurrentLimitResponse_()
    : status()  {
    }
  CurrentLimitResponse_(const ContainerAllocator& _alloc)
    : status(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;




  typedef boost::shared_ptr< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CurrentLimitResponse_

typedef ::pal_control_msgs::CurrentLimitResponse_<std::allocator<void> > CurrentLimitResponse;

typedef boost::shared_ptr< ::pal_control_msgs::CurrentLimitResponse > CurrentLimitResponsePtr;
typedef boost::shared_ptr< ::pal_control_msgs::CurrentLimitResponse const> CurrentLimitResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'pal_control_msgs': ['/home/mc16766/tiago_public_ws/src/pal_msgs/pal_control_msgs/msg', '/home/mc16766/tiago_public_ws/devel/.private/pal_control_msgs/share/pal_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4fe5af303955c287688e7347e9b00278";
  }

  static const char* value(const ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4fe5af303955c287ULL;
  static const uint64_t static_value2 = 0x688e7347e9b00278ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_control_msgs/CurrentLimitResponse";
  }

  static const char* value(const ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string   status\n\
\n\
";
  }

  static const char* value(const ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CurrentLimitResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_control_msgs::CurrentLimitResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_CONTROL_MSGS_MESSAGE_CURRENTLIMITRESPONSE_H
