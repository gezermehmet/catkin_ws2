// Generated by gencpp from file lidar_msgs/VelodynePacket.msg
// DO NOT EDIT!


#ifndef LIDAR_MSGS_MESSAGE_VELODYNEPACKET_H
#define LIDAR_MSGS_MESSAGE_VELODYNEPACKET_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Time.h>

namespace lidar_msgs
{
template <class ContainerAllocator>
struct VelodynePacket_
{
  typedef VelodynePacket_<ContainerAllocator> Type;

  VelodynePacket_()
    : stamp()
    , data()  {
      data.assign(0);
  }
  VelodynePacket_(const ContainerAllocator& _alloc)
    : stamp(_alloc)
    , data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef  ::std_msgs::Time_<ContainerAllocator>  _stamp_type;
  _stamp_type stamp;

   typedef boost::array<uint8_t, 1206>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::lidar_msgs::VelodynePacket_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lidar_msgs::VelodynePacket_<ContainerAllocator> const> ConstPtr;

}; // struct VelodynePacket_

typedef ::lidar_msgs::VelodynePacket_<std::allocator<void> > VelodynePacket;

typedef boost::shared_ptr< ::lidar_msgs::VelodynePacket > VelodynePacketPtr;
typedef boost::shared_ptr< ::lidar_msgs::VelodynePacket const> VelodynePacketConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lidar_msgs::VelodynePacket_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lidar_msgs::VelodynePacket_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lidar_msgs::VelodynePacket_<ContainerAllocator1> & lhs, const ::lidar_msgs::VelodynePacket_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lidar_msgs::VelodynePacket_<ContainerAllocator1> & lhs, const ::lidar_msgs::VelodynePacket_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lidar_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lidar_msgs::VelodynePacket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lidar_msgs::VelodynePacket_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lidar_msgs::VelodynePacket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lidar_msgs::VelodynePacket_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lidar_msgs::VelodynePacket_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lidar_msgs::VelodynePacket_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lidar_msgs::VelodynePacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31463a216a41d17b370dbe0e6dde888d";
  }

  static const char* value(const ::lidar_msgs::VelodynePacket_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31463a216a41d17bULL;
  static const uint64_t static_value2 = 0x370dbe0e6dde888dULL;
};

template<class ContainerAllocator>
struct DataType< ::lidar_msgs::VelodynePacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lidar_msgs/VelodynePacket";
  }

  static const char* value(const ::lidar_msgs::VelodynePacket_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lidar_msgs::VelodynePacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Raw Velodyne LIDAR packet.\n"
"\n"
"std_msgs/Time   stamp\n"
"uint8[1206]     data\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Time\n"
"time data\n"
;
  }

  static const char* value(const ::lidar_msgs::VelodynePacket_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lidar_msgs::VelodynePacket_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VelodynePacket_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lidar_msgs::VelodynePacket_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lidar_msgs::VelodynePacket_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    s << std::endl;
    Printer< ::std_msgs::Time_<ContainerAllocator> >::stream(s, indent + "  ", v.stamp);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LIDAR_MSGS_MESSAGE_VELODYNEPACKET_H