// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_server_UnicastServerRef__
#define __gnu_java_rmi_server_UnicastServerRef__

#pragma interface

#include <gnu/java/rmi/server/UnicastRef.h>
#include <gcj/array.h>

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
          class UnicastServerRef;
          class UnicastConnection;
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
        class RemoteRef;
        class RMIServerSocketFactory;
        class ObjID;
        class Skeleton;
      }
      class Remote;
    }
  }
}

class gnu::java::rmi::server::UnicastServerRef : public ::gnu::java::rmi::server::UnicastRef
{
public: // actually package-private
  UnicastServerRef ();
public:
  UnicastServerRef (::java::rmi::server::ObjID *, jint, ::java::rmi::server::RMIServerSocketFactory *);
  virtual ::java::rmi::Remote *exportObject (::java::rmi::Remote *);
  virtual ::java::rmi::Remote *getStub () { return stub; }
  virtual jboolean unexportObject (::java::rmi::Remote *, jboolean);
public:  // actually protected
  virtual ::java::lang::Class *findStubSkelClass (::java::lang::Class *);
  virtual ::java::lang::Object *getHelperClass (::java::lang::Class *, ::java::lang::String *);
public:
  virtual ::java::lang::String *getClientHost ();
public:  // actually protected
  virtual void buildMethodHash (::java::lang::Class *, jboolean);
public: // actually package-private
  virtual ::java::lang::Class *getMethodReturnType (jint, jlong);
public:
  virtual ::java::lang::Object *incomingMessageCall (::gnu::java::rmi::server::UnicastConnection *, jint, jlong);
public: // actually package-private
  virtual ::java::rmi::Remote *createProxyStub (::java::lang::Class *, ::java::rmi::server::RemoteRef *);
private:
  static const jlong serialVersionUID = -5585608108300801246LL;
  static JArray< ::java::lang::Class *> *stubprototype;
public: // actually package-private
  ::java::rmi::Remote * __attribute__((aligned(__alignof__( ::gnu::java::rmi::server::UnicastRef )))) myself;
public:  // actually protected
  ::java::rmi::server::Skeleton *skel;
  ::java::rmi::Remote *stub;
  ::java::util::Hashtable *methods;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_server_UnicastServerRef__ */
