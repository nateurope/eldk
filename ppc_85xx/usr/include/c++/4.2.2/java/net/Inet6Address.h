// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_Inet6Address__
#define __java_net_Inet6Address__

#pragma interface

#include <java/net/InetAddress.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class Inet6Address;
      class NetworkInterface;
    }
  }
}

class java::net::Inet6Address : public ::java::net::InetAddress
{
public: // actually package-private
  Inet6Address (jbyteArray, ::java::lang::String *);
public:
  virtual jboolean isMulticastAddress ();
  virtual jboolean isAnyLocalAddress ();
  virtual jboolean isLoopbackAddress ();
  virtual jboolean isLinkLocalAddress ();
  virtual jboolean isSiteLocalAddress ();
  virtual jboolean isMCGlobal ();
  virtual jboolean isMCNodeLocal ();
  virtual jboolean isMCLinkLocal ();
  virtual jboolean isMCSiteLocal ();
  virtual jboolean isMCOrgLocal ();
  virtual jbyteArray getAddress ();
  static ::java::net::Inet6Address *getByAddress (::java::lang::String *, jbyteArray, jint);
  static ::java::net::Inet6Address *getByAddress (::java::lang::String *, jbyteArray, ::java::net::NetworkInterface *);
  virtual ::java::net::NetworkInterface *getScopedInterface () { return nif; }
  virtual jint getScopeId ();
  virtual ::java::lang::String *getHostAddress ();
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
  virtual jboolean isIPv4CompatibleAddress ();
private:
  void readObject (::java::io::ObjectInputStream *);
  void writeObject (::java::io::ObjectOutputStream *);
public: // actually package-private
  static const jlong serialVersionUID = 6880410070516793377LL;
  jbyteArray __attribute__((aligned(__alignof__( ::java::net::InetAddress ))))  ipaddress;
private:
  jint scope_id;
  jboolean scope_id_set;
  jboolean scope_ifname_set;
  ::java::lang::String *ifname;
  ::java::net::NetworkInterface *nif;
  static const jint FAMILY = 10L;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_Inet6Address__ */
