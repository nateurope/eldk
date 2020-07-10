// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_NIOSocket__
#define __gnu_java_nio_NIOSocket__

#pragma interface

#include <java/net/Socket.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class SocketChannel;
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        class NIOSocket;
        class SocketChannelImpl;
      }
      namespace net
      {
        class PlainSocketImpl;
      }
    }
  }
}

class gnu::java::nio::NIOSocket : public ::java::net::Socket
{
public:  // actually protected
  NIOSocket (::gnu::java::net::PlainSocketImpl *, ::gnu::java::nio::SocketChannelImpl *);
public:
  virtual ::gnu::java::net::PlainSocketImpl *getPlainSocketImpl () { return impl; }
public: // actually package-private
  virtual void setChannel (::gnu::java::nio::SocketChannelImpl *);
public:
  virtual ::java::nio::channels::SocketChannel *getChannel () { return reinterpret_cast< ::java::nio::channels::SocketChannel *> (channel); }
private:
  ::gnu::java::net::PlainSocketImpl * __attribute__((aligned(__alignof__( ::java::net::Socket )))) impl;
  ::gnu::java::nio::SocketChannelImpl *channel;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_NIOSocket__ */