// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_net_ssl_SSLServerSocket__
#define __javax_net_ssl_SSLServerSocket__

#pragma interface

#include <java/net/ServerSocket.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
        class SSLServerSocket;
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

class javax::net::ssl::SSLServerSocket : public ::java::net::ServerSocket
{
public:  // actually protected
  SSLServerSocket ();
  SSLServerSocket (jint);
  SSLServerSocket (jint, jint);
  SSLServerSocket (jint, jint, ::java::net::InetAddress *);
public:
  virtual JArray< ::java::lang::String *> *getEnabledCipherSuites () = 0;
  virtual void setEnabledCipherSuites (JArray< ::java::lang::String *> *) = 0;
  virtual JArray< ::java::lang::String *> *getEnabledProtocols () = 0;
  virtual void setEnabledProtocols (JArray< ::java::lang::String *> *) = 0;
  virtual jboolean getEnableSessionCreation () = 0;
  virtual void setEnableSessionCreation (jboolean) = 0;
  virtual jboolean getNeedClientAuth () = 0;
  virtual void setNeedClientAuth (jboolean) = 0;
  virtual jboolean getUseClientMode () = 0;
  virtual void setUseClientMode (jboolean) = 0;
  virtual jboolean getWantClientAuth () = 0;
  virtual void setWantClientAuth (jboolean) = 0;
  virtual JArray< ::java::lang::String *> *getSupportedCipherSuites () = 0;
  virtual JArray< ::java::lang::String *> *getSupportedProtocols () = 0;

  static ::java::lang::Class class$;
};

#endif /* __javax_net_ssl_SSLServerSocket__ */
