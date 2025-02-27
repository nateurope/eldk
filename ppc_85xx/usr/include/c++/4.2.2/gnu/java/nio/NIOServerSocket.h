// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_NIOServerSocket__
#define __gnu_java_nio_NIOServerSocket__

#pragma interface

#include <java/net/ServerSocket.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class Socket;
    }
    namespace nio
    {
      namespace channels
      {
        class ServerSocketChannel;
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        class PlainSocketImpl;
      }
      namespace nio
      {
        class NIOServerSocket;
        class ServerSocketChannelImpl;
      }
    }
  }
}

class gnu::java::nio::NIOServerSocket : public ::java::net::ServerSocket
{
public:  // actually protected
  NIOServerSocket (::gnu::java::nio::ServerSocketChannelImpl *);
public:
  virtual ::gnu::java::net::PlainSocketImpl *getPlainSocketImpl ();
  virtual ::java::nio::channels::ServerSocketChannel *getChannel () { return reinterpret_cast< ::java::nio::channels::ServerSocketChannel *> (channel); }
  virtual ::java::net::Socket *accept ();
private:
  ::gnu::java::nio::ServerSocketChannelImpl * __attribute__((aligned(__alignof__( ::java::net::ServerSocket )))) channel;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_NIOServerSocket__ */
