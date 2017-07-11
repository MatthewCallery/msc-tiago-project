// Generated by gencpp from file pal_navigation_msgs/VisualLocDB.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_VISUALLOCDB_H
#define PAL_NAVIGATION_MSGS_MESSAGE_VISUALLOCDB_H


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
struct VisualLocDB_
{
  typedef VisualLocDB_<ContainerAllocator> Type;

  VisualLocDB_()
    : documents()
    , tree()
    , weights()  {
    }
  VisualLocDB_(const ContainerAllocator& _alloc)
    : documents(_alloc)
    , tree(_alloc)
    , weights(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _documents_type;
  _documents_type documents;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _tree_type;
  _tree_type tree;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _weights_type;
  _weights_type weights;




  typedef boost::shared_ptr< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> const> ConstPtr;

}; // struct VisualLocDB_

typedef ::pal_navigation_msgs::VisualLocDB_<std::allocator<void> > VisualLocDB;

typedef boost::shared_ptr< ::pal_navigation_msgs::VisualLocDB > VisualLocDBPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::VisualLocDB const> VisualLocDBConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ecd1514e0345ae95252fcd0c3269725c";
  }

  static const char* value(const ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xecd1514e0345ae95ULL;
  static const uint64_t static_value2 = 0x252fcd0c3269725cULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/VisualLocDB";
  }

  static const char* value(const ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Contents of the 3 binary files that contain the visual localization DB\n\
\n\
uint8[] documents\n\
uint8[] tree\n\
uint8[] weights\n\
";
  }

  static const char* value(const ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.documents);
      stream.next(m.tree);
      stream.next(m.weights);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VisualLocDB_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::VisualLocDB_<ContainerAllocator>& v)
  {
    s << indent << "documents[]" << std::endl;
    for (size_t i = 0; i < v.documents.size(); ++i)
    {
      s << indent << "  documents[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.documents[i]);
    }
    s << indent << "tree[]" << std::endl;
    for (size_t i = 0; i < v.tree.size(); ++i)
    {
      s << indent << "  tree[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.tree[i]);
    }
    s << indent << "weights[]" << std::endl;
    for (size_t i = 0; i < v.weights.size(); ++i)
    {
      s << indent << "  weights[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.weights[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_VISUALLOCDB_H
