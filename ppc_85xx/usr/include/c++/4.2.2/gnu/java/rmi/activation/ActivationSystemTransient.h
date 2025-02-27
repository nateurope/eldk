// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_activation_ActivationSystemTransient__
#define __gnu_java_rmi_activation_ActivationSystemTransient__

#pragma interface

#include <gnu/java/rmi/activation/DefaultActivationSystem.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class MarshalledObject;
      namespace activation
      {
        class ActivationGroupDesc;
        class ActivationDesc;
        class ActivationMonitor;
        class ActivationInstantiator;
        class ActivationGroupID;
        class ActivationID;
        class ActivationSystem;
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace activation
        {
          class ActivationSystemTransient;
          class BidiTable;
        }
      }
    }
  }
}

class gnu::java::rmi::activation::ActivationSystemTransient : public ::gnu::java::rmi::activation::DefaultActivationSystem
{
public:  // actually protected
  ActivationSystemTransient (::gnu::java::rmi::activation::BidiTable *, ::gnu::java::rmi::activation::BidiTable *);
  ActivationSystemTransient ();
public:
  static ::java::rmi::activation::ActivationSystem *getInstance ();
  virtual ::java::rmi::MarshalledObject *activate (::java::rmi::activation::ActivationID *, jboolean);
  virtual ::java::rmi::activation::ActivationMonitor *activeGroup (::java::rmi::activation::ActivationGroupID *, ::java::rmi::activation::ActivationInstantiator *, jlong);
  virtual ::java::rmi::activation::ActivationDesc *getActivationDesc (::java::rmi::activation::ActivationID *);
  virtual ::java::rmi::activation::ActivationGroupDesc *getActivationGroupDesc (::java::rmi::activation::ActivationGroupID *);
  virtual ::java::rmi::activation::ActivationGroupID *registerGroup (::java::rmi::activation::ActivationGroupDesc *);
  virtual ::java::rmi::activation::ActivationID *registerObject (::java::rmi::activation::ActivationDesc *);
  virtual ::java::rmi::activation::ActivationDesc *setActivationDesc (::java::rmi::activation::ActivationID *, ::java::rmi::activation::ActivationDesc *);
  virtual ::java::rmi::activation::ActivationGroupDesc *setActivationGroupDesc (::java::rmi::activation::ActivationGroupID *, ::java::rmi::activation::ActivationGroupDesc *);
  virtual void shutdown ();
  virtual void unregisterGroup (::java::rmi::activation::ActivationGroupID *);
  virtual void unregisterObject (::java::rmi::activation::ActivationID *);
  virtual void activeObject (::java::rmi::activation::ActivationID *, ::java::rmi::MarshalledObject *);
  virtual void inactiveGroup (::java::rmi::activation::ActivationGroupID *, jlong);
  virtual void inactiveObject (::java::rmi::activation::ActivationID *);
public:  // actually protected
  ::gnu::java::rmi::activation::BidiTable * __attribute__((aligned(__alignof__( ::gnu::java::rmi::activation::DefaultActivationSystem )))) groupDescs;
  ::gnu::java::rmi::activation::BidiTable *descriptions;
  ::java::util::Map *groupInstantiators;
  ::java::util::Map *activatedObjects;
public: // actually package-private
  static jlong groupIncarnations;
  static ::java::rmi::activation::ActivationSystem *singleton;
public:
  static jboolean debug;

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_activation_ActivationSystemTransient__ */
