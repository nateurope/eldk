// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_PlainSocketImpl__
#define __gnu_java_net_PlainSocketImpl__

#pragma interface

#include <java/net/SocketImpl.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        class PlainSocketImpl;
      }
    }
  }
  namespace java
  {
    namespace net
    {
      class SocketImpl;
      class SocketAddress;
      class InetAddress;
    }
  }
}

class gnu::java::net::PlainSocketImpl : public ::java::net::SocketImpl
{
public:
  virtual jboolean isInChannelOperation () { return inChannelOperation; }
  virtual void setInChannelOperation (jboolean);
  PlainSocketImpl ();
public:  // actually protected
  virtual void finalize ();
public:
  virtual jint getNativeFD () { return native_fd; }
  virtual void setOption (jint, ::java::lang::Object *);
  virtual ::java::lang::Object *getOption (jint);
  virtual void shutdownInput ();
  virtual void shutdownOutput ();
public:  // actually protected
  virtual void create (jboolean);
  virtual void connect (::java::lang::String *, jint);
  virtual void connect (::java::net::InetAddress *, jint);
  virtual void connect (::java::net::SocketAddress *, jint);
  virtual void bind (::java::net::InetAddress *, jint);
  virtual void listen (jint);
  virtual void accept (::java::net::SocketImpl *);
private:
  void accept (::gnu::java::net::PlainSocketImpl *);
public:  // actually protected
  virtual jint available ();
  virtual void close ();
  virtual void sendUrgentData (jint);
  virtual ::java::io::InputStream *getInputStream ();
  virtual ::java::io::OutputStream *getOutputStream ();
public: // actually package-private
  static const jint _Jv_TCP_NODELAY_ = 1L;
  static const jint _Jv_SO_BINDADDR_ = 15L;
  static const jint _Jv_SO_REUSEADDR_ = 4L;
  static const jint _Jv_SO_BROADCAST_ = 32L;
  static const jint _Jv_SO_OOBINLINE_ = 4099L;
  static const jint _Jv_IP_MULTICAST_IF_ = 16L;
  static const jint _Jv_IP_MULTICAST_IF2_ = 31L;
  static const jint _Jv_IP_MULTICAST_LOOP_ = 18L;
  static const jint _Jv_IP_TOS_ = 3L;
  static const jint _Jv_SO_LINGER_ = 128L;
  static const jint _Jv_SO_TIMEOUT_ = 4102L;
  static const jint _Jv_SO_SNDBUF_ = 4097L;
  static const jint _Jv_SO_RCVBUF_ = 4098L;
  static const jint _Jv_SO_KEEPALIVE_ = 8L;
  jint __attribute__((aligned(__alignof__( ::java::net::SocketImpl ))))  native_fd;
  jint timeout;
  ::java::net::InetAddress *localAddress;
private:
  ::java::io::InputStream *in;
  ::java::io::OutputStream *out;
  jboolean inChannelOperation;

  friend class gnu_java_net_PlainSocketImpl$SocketOutputStream;
  friend class gnu_java_net_PlainSocketImpl$SocketInputStream;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_PlainSocketImpl__ */
