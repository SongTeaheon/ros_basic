// Generated by gencpp from file basic_practice/SrvTutorialRequest.msg
// DO NOT EDIT!


#ifndef BASIC_PRACTICE_MESSAGE_SRVTUTORIALREQUEST_H
#define BASIC_PRACTICE_MESSAGE_SRVTUTORIALREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace basic_practice
{
template <class ContainerAllocator>
struct SrvTutorialRequest_
{
  typedef SrvTutorialRequest_<ContainerAllocator> Type;

  SrvTutorialRequest_()
    : a(0)
    , b(0)
    , srv_operator(0)  {
    }
  SrvTutorialRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)
    , srv_operator(0)  {
  (void)_alloc;
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int64_t _b_type;
  _b_type b;

   typedef int64_t _srv_operator_type;
  _srv_operator_type srv_operator;





  typedef boost::shared_ptr< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SrvTutorialRequest_

typedef ::basic_practice::SrvTutorialRequest_<std::allocator<void> > SrvTutorialRequest;

typedef boost::shared_ptr< ::basic_practice::SrvTutorialRequest > SrvTutorialRequestPtr;
typedef boost::shared_ptr< ::basic_practice::SrvTutorialRequest const> SrvTutorialRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::basic_practice::SrvTutorialRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace basic_practice

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'basic_practice': ['/home/song/workspace/src/basic_practice/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3596c62e9d99a0249eb11163d8db282d";
  }

  static const char* value(const ::basic_practice::SrvTutorialRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3596c62e9d99a024ULL;
  static const uint64_t static_value2 = 0x9eb11163d8db282dULL;
};

template<class ContainerAllocator>
struct DataType< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "basic_practice/SrvTutorialRequest";
  }

  static const char* value(const ::basic_practice::SrvTutorialRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 a\n\
int64 b\n\
int64 srv_operator\n\
";
  }

  static const char* value(const ::basic_practice::SrvTutorialRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
      stream.next(m.srv_operator);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SrvTutorialRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::basic_practice::SrvTutorialRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::basic_practice::SrvTutorialRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int64_t>::stream(s, indent + "  ", v.b);
    s << indent << "srv_operator: ";
    Printer<int64_t>::stream(s, indent + "  ", v.srv_operator);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BASIC_PRACTICE_MESSAGE_SRVTUTORIALREQUEST_H