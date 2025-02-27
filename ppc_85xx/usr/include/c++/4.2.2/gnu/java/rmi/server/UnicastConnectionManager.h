// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_server_UnicastConnectionManager__
#define __gnu_java_rmi_server_UnicastConnectionManager__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace server
        {
          class UnicastConnection;
          class UnicastConnectionManager;
        }
      }
    }
  }
  namespace java
  {
    namespace rmi
    {
      namespace server
      {
        class RMIClientSocketFactory;
        class RMIServerSocketFactory;
        class RMISocketFactory;
      }
    }
    namespace net
    {
      class ServerSocket;
    }
  }
}

class gnu::java::rmi::server::UnicastConnectionManager : public ::java::lang::Object
{
private:
  static void startScavenger ();
  UnicastConnectionManager (::java::lang::String *, jint, ::java::rmi::server::RMIClientSocketFactory *);
  UnicastConnectionManager (jint, ::java::rmi::server::RMIServerSocketFactory *);
public:
  static ::gnu::java::rmi::server::UnicastConnectionManager *getInstance (::java::lang::String *, jint, ::java::rmi::server::RMIClientSocketFactory *);
  static ::gnu::java::rmi::server::UnicastConnectionManager *getInstance (jint, ::java::rmi::server::RMIServerSocketFactory *);
  virtual ::gnu::java::rmi::server::UnicastConnection *getConnection ();
private:
  ::gnu::java::rmi::server::UnicastConnection *getServerConnection ();
  ::gnu::java::rmi::server::UnicastConnection *getClientConnection ();
public:
  virtual ::java::lang::String *toString ();
  virtual void discardConnection (::gnu::java::rmi::server::UnicastConnection *);
  virtual void startServer ();
  virtual void stopServer ();
  virtual void run ();
public: // actually package-private
  virtual void write (::java::io::ObjectOutput *);
  static ::gnu::java::rmi::server::UnicastConnectionManager *read (::java::io::ObjectInput *);
private:
  static ::java::lang::String *localhost;
  static ::java::util::Hashtable *servers;
public: // actually package-private
  static ::java::util::Hashtable *clients;
  ::java::util::ArrayList * __attribute__((aligned(__alignof__( ::java::lang::Object )))) connections;
private:
  ::java::lang::Thread *serverThread;
  ::java::net::ServerSocket *ssock;
public: // actually package-private
  ::java::lang::String *serverName;
  jint serverPort;
  static ::java::lang::Thread *scavenger;
  ::java::lang::Object *serverobj;
private:
  static ::java::rmi::server::RMISocketFactory *defaultSocketFactory;
  ::java::rmi::server::RMIServerSocketFactory *serverFactory;
  ::java::rmi::server::RMIClientSocketFactory *clientFactory;
  static jint ncsock;
  static jint nssock;
  static jint ncmanager;
  static jint nsmanager;
  static const jint debug = 0L;
  static ::java::lang::Object *GLOBAL_LOCK;

  friend class gnu_java_rmi_server_UnicastConnectionManager$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_server_UnicastConnectionManager__ */
