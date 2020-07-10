// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_activation_ActivationGroup__
#define __java_rmi_activation_ActivationGroup__

#pragma interface

#include <java/rmi/server/UnicastRemoteObject.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class MarshalledObject;
      class Remote;
      namespace activation
      {
        class ActivationGroup;
        class ActivationGroupDesc;
        class ActivationID;
        class ActivationSystem;
        class ActivationMonitor;
        class ActivationGroupID;
      }
    }
  }
}

class java::rmi::activation::ActivationGroup : public ::java::rmi::server::UnicastRemoteObject
{
public:  // actually protected
  ActivationGroup (::java::rmi::activation::ActivationGroupID *);
public:
  virtual void activeObject (::java::rmi::activation::ActivationID *, ::java::rmi::Remote *) = 0;
  virtual jboolean inactiveObject (::java::rmi::activation::ActivationID *);
  static ::java::rmi::activation::ActivationGroup *createGroup (::java::rmi::activation::ActivationGroupID *, ::java::rmi::activation::ActivationGroupDesc *, jlong);
  static ::java::rmi::activation::ActivationGroupID *currentGroupID ();
  static void setSystem (::java::rmi::activation::ActivationSystem *);
  static ::java::rmi::activation::ActivationSystem *getSystem ();
public:  // actually protected
  virtual void activeObject (::java::rmi::activation::ActivationID *, ::java::rmi::MarshalledObject *);
  virtual void inactiveGroup ();
public: // actually package-private
  static const jlong serialVersionUID = -7696947875314805420LL;
  static ::java::rmi::activation::ActivationGroupID *currentGroupId;
  ::java::rmi::activation::ActivationGroupID * __attribute__((aligned(__alignof__( ::java::rmi::server::UnicastRemoteObject )))) groupId;
  ::java::rmi::activation::ActivationMonitor *monitor;
  jlong incarnation;
  static ::java::rmi::activation::ActivationSystem *system;
  static JArray< ::java::lang::Class *> *cConstructorTypes;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_activation_ActivationGroup__ */