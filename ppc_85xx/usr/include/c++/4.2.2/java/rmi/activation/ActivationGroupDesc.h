// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_activation_ActivationGroupDesc__
#define __java_rmi_activation_ActivationGroupDesc__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace activation
      {
        class ActivationGroupDesc;
        class ActivationGroupDesc$CommandEnvironment;
      }
      class MarshalledObject;
    }
  }
}

class java::rmi::activation::ActivationGroupDesc : public ::java::lang::Object
{
public:
  ActivationGroupDesc (::java::util::Properties *, ::java::rmi::activation::ActivationGroupDesc$CommandEnvironment *);
  ActivationGroupDesc (::java::lang::String *, ::java::lang::String *, ::java::rmi::MarshalledObject *, ::java::util::Properties *, ::java::rmi::activation::ActivationGroupDesc$CommandEnvironment *);
  virtual ::java::lang::String *getClassName () { return className; }
  virtual ::java::lang::String *getLocation () { return location; }
  virtual ::java::rmi::MarshalledObject *getData () { return data; }
  virtual ::java::util::Properties *getPropertyOverrides () { return props; }
  virtual ::java::rmi::activation::ActivationGroupDesc$CommandEnvironment *getCommandEnvironment () { return env; }
  virtual jboolean equals (::java::lang::Object *);
public: // actually package-private
  static jboolean eq (::java::lang::Object *, ::java::lang::Object *);
public:
  virtual jint hashCode ();
public: // actually package-private
  static const jlong serialVersionUID = -4936225423168276595LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) className;
  ::java::lang::String *location;
  ::java::rmi::MarshalledObject *data;
  ::java::rmi::activation::ActivationGroupDesc$CommandEnvironment *env;
  ::java::util::Properties *props;
  jlong hash;

  friend class java_rmi_activation_ActivationGroupDesc$CommandEnvironment;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_activation_ActivationGroupDesc__ */