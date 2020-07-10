// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_transport_JdwpReplyPacket__
#define __gnu_classpath_jdwp_transport_JdwpReplyPacket__

#pragma interface

#include <gnu/classpath/jdwp/transport/JdwpPacket.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace transport
        {
          class JdwpReplyPacket;
          class JdwpPacket;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::transport::JdwpReplyPacket : public ::gnu::classpath::jdwp::transport::JdwpPacket
{
public:
  JdwpReplyPacket ();
  JdwpReplyPacket (::gnu::classpath::jdwp::transport::JdwpPacket *, jshort);
  JdwpReplyPacket (::gnu::classpath::jdwp::transport::JdwpPacket *);
  virtual jint getLength ();
  virtual jshort getErrorCode () { return _errorCode; }
  virtual void setErrorCode (jshort);
public:  // actually protected
  virtual jint myFromBytes (jbyteArray, jint);
  virtual void myWrite (::java::io::DataOutputStream *);
  jshort __attribute__((aligned(__alignof__( ::gnu::classpath::jdwp::transport::JdwpPacket ))))  _errorCode;
private:
  static const jint MINIMUM_LENGTH = 2L;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_transport_JdwpReplyPacket__ */