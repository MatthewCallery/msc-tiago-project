// Generated by gencpp from file pal_navigation_msgs/VisualTrainingResult.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_VISUALTRAININGRESULT_H
#define PAL_NAVIGATION_MSGS_MESSAGE_VISUALTRAININGRESULT_H


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
struct VisualTrainingResult_
{
  typedef VisualTrainingResult_<ContainerAllocator> Type;

  VisualTrainingResult_()
    {
    }
  VisualTrainingResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> const> ConstPtr;

}; // struct VisualTrainingResult_

typedef ::pal_navigation_msgs::VisualTrainingResult_<std::allocator<void> > VisualTrainingResult;

typedef boost::shared_ptr< ::pal_navigation_msgs::VisualTrainingResult > VisualTrainingResultPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::VisualTrainingResult const> VisualTrainingResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'pal_navigation_msgs': ['/home/mc16766/tiago_public_ws/devel/.private/pal_navigation_msgs/share/pal_navigation_msgs/msg', '/home/mc16766/tiago_public_ws/src/pal_msgs/pal_navigation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/VisualTrainingResult";
  }

  static const char* value(const ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
";
  }

  static const char* value(const ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VisualTrainingResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_navigation_msgs::VisualTrainingResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_VISUALTRAININGRESULT_H
