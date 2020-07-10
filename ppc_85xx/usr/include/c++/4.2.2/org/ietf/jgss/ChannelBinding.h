// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_ietf_jgss_ChannelBinding__
#define __org_ietf_jgss_ChannelBinding__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace ietf
    {
      namespace jgss
      {
        class ChannelBinding;
      }
    }
  }
  namespace java
  {
    namespace net
    {
      class InetAddress;
    }
  }
}

class org::ietf::jgss::ChannelBinding : public ::java::lang::Object
{
public:
  ChannelBinding (::java::net::InetAddress *, ::java::net::InetAddress *, jbyteArray);
  ChannelBinding (jbyteArray);
  virtual ::java::net::InetAddress *getInitiatorAddress () { return initAddr; }
  virtual ::java::net::InetAddress *getAcceptorAddress () { return acceptAddr; }
  virtual jbyteArray getApplicationData ();
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
private:
  jbyteArray __attribute__((aligned(__alignof__( ::java::lang::Object ))))  appData;
  ::java::net::InetAddress *initAddr;
  ::java::net::InetAddress *acceptAddr;
public:

  static ::java::lang::Class class$;
};

#endif /* __org_ietf_jgss_ChannelBinding__ */