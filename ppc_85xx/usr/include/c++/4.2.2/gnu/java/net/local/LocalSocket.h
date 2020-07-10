// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_local_LocalSocket__
#define __gnu_java_net_local_LocalSocket__

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
    namespace net
    {
      class InetAddress;
      class SocketAddress;
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace local
        {
          class LocalSocket;
          class LocalSocketAddress;
          class LocalSocketImpl;
        }
      }
    }
  }
}

class gnu::java::net::local::LocalSocket : public ::java::net::Socket
{
public:
  LocalSocket ();
  LocalSocket (::gnu::java::net::local::LocalSocketAddress *);
public: // actually package-private
  LocalSocket (jboolean);
public:
  virtual void bind (::java::net::SocketAddress *);
  virtual void connect (::java::net::SocketAddress *, jint);
  virtual ::java::net::InetAddress *getInetAddress () { return 0; }
  virtual ::java::net::InetAddress *getLocalAddress () { return 0; }
  virtual jint getPort ();
  virtual jint getLocalPort ();
  virtual ::java::nio::channels::SocketChannel *getChannel () { return 0; }
  virtual ::java::net::SocketAddress *getLocalSocketAddress ();
  virtual ::java::net::SocketAddress *getRemoteSocketAddress ();
  virtual ::java::io::InputStream *getInputStream ();
  virtual ::java::io::OutputStream *getOutputStream ();
  virtual void sendUrgentData (jint);
  virtual void close ();
  virtual void shutdownInput ();
  virtual void shutdownOutput ();
  virtual jboolean isClosed () { return localClosed; }
  virtual jboolean isBound ();
  virtual jboolean isConnected () { return localConnected; }
  virtual void setTcpNoDelay (jboolean);
  virtual jboolean getTcpNoDelay ();
  virtual void setSoLinger (jboolean, jint);
  virtual jint getSoLinger ();
  virtual void setOOBInline (jboolean);
  virtual jboolean getOOBInline ();
  virtual void setSoTimeout (jint) { }
  virtual jint getSoTimeout ();
  virtual void setSendBufferSize (jint);
  virtual jint getSendBufferSize ();
  virtual void setReceiveBufferSize (jint);
  virtual jint getReceiveBufferSize ();
  virtual void setKeepAlive (jboolean);
  virtual jboolean getKeepAlive ();
  virtual void setTrafficClass (jint);
  virtual jint getTrafficClass ();
  virtual void setReuseAddress (jboolean);
  virtual jboolean getReuseAddress ();
public: // actually package-private
  virtual ::gnu::java::net::local::LocalSocketImpl *getLocalImpl () { return localimpl; }
private:
  ::gnu::java::net::local::LocalSocketImpl * __attribute__((aligned(__alignof__( ::java::net::Socket )))) localimpl;
public: // actually package-private
  jboolean localClosed;
  jboolean localConnected;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_local_LocalSocket__ */
