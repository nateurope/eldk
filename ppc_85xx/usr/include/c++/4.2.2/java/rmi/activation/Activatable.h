// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_activation_Activatable__
#define __java_rmi_activation_Activatable__

#pragma interface

#include <java/rmi/server/RemoteServer.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class Remote;
      namespace server
      {
        class ObjID;
        class RMIServerSocketFactory;
        class RMIClientSocketFactory;
      }
      class MarshalledObject;
      namespace activation
      {
        class Activatable;
        class ActivationDesc;
        class ActivationID;
      }
    }
  }
}

class java::rmi::activation::Activatable : public ::java::rmi::server::RemoteServer
{
public:  // actually protected
  Activatable (::java::lang::String *, ::java::rmi::MarshalledObject *, jboolean, jint);
  Activatable (::java::lang::String *, ::java::rmi::MarshalledObject *, jboolean, jint, ::java::rmi::server::RMIClientSocketFactory *, ::java::rmi::server::RMIServerSocketFactory *);
  Activatable (::java::rmi::activation::ActivationID *, jint);
  Activatable (::java::rmi::activation::ActivationID *, jint, ::java::rmi::server::RMIClientSocketFactory *, ::java::rmi::server::RMIServerSocketFactory *);
  virtual ::java::rmi::activation::ActivationID *getID () { return id; }
public: // actually package-private
  static ::java::rmi::activation::ActivationID *obtainId (::java::rmi::activation::ActivationDesc *);
public:
  static ::java::rmi::Remote *register$ (::java::rmi::activation::ActivationDesc *);
  static jboolean inactive (::java::rmi::activation::ActivationID *);
  static void unregister (::java::rmi::activation::ActivationID *);
  static ::java::rmi::activation::ActivationID *exportObject (::java::rmi::Remote *, ::java::lang::String *, ::java::rmi::MarshalledObject *, jboolean, jint);
  static ::java::rmi::activation::ActivationID *exportObject (::java::rmi::Remote *, ::java::lang::String *, ::java::rmi::MarshalledObject *, jboolean, jint, ::java::rmi::server::RMIClientSocketFactory *, ::java::rmi::server::RMIServerSocketFactory *);
  static ::java::rmi::Remote *exportObject (::java::rmi::Remote *, ::java::rmi::activation::ActivationID *, jint);
  static ::java::rmi::Remote *exportObject (::java::rmi::Remote *, ::java::rmi::activation::ActivationID *, jint, ::java::rmi::server::RMIClientSocketFactory *, ::java::rmi::server::RMIServerSocketFactory *);
  static jboolean unexportObject (::java::rmi::Remote *, jboolean);
public: // actually package-private
  static ::java::rmi::Remote *exportObject (::java::rmi::Remote *, jint, ::java::rmi::server::RMIServerSocketFactory *);
public:
  static ::java::rmi::Remote *export$ (::java::rmi::activation::ActivationID *, ::java::rmi::Remote *, jint, ::java::rmi::server::RMIServerSocketFactory *);
  static ::java::rmi::server::ObjID *makeId (::java::rmi::activation::ActivationID *);
public: // actually package-private
  static ::java::rmi::Remote *toStub (::java::rmi::activation::ActivationID *, ::java::lang::Class *);
  static const jlong serialVersionUID = -3120617863591563455LL;
  ::java::rmi::activation::ActivationID * __attribute__((aligned(__alignof__( ::java::rmi::server::RemoteServer )))) id;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_activation_Activatable__ */
