// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_activation_ActivationGroup_Stub__
#define __java_rmi_activation_ActivationGroup_Stub__

#pragma interface

#include <java/rmi/server/RemoteStub.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class MarshalledObject;
      namespace activation
      {
        class ActivationGroup_Stub;
        class ActivationDesc;
        class ActivationID;
      }
      namespace server
      {
        class RemoteRef;
      }
    }
  }
}

class java::rmi::activation::ActivationGroup_Stub : public ::java::rmi::server::RemoteStub
{
public:
  ActivationGroup_Stub (::java::rmi::server::RemoteRef *);
  virtual ::java::rmi::MarshalledObject *newInstance (::java::rmi::activation::ActivationID *, ::java::rmi::activation::ActivationDesc *);
private:
  static const jlong serialVersionUID = 2LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_activation_ActivationGroup_Stub__ */