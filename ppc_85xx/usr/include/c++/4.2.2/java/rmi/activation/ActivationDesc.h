// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_activation_ActivationDesc__
#define __java_rmi_activation_ActivationDesc__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class MarshalledObject;
      namespace activation
      {
        class ActivationDesc;
        class ActivationGroupID;
      }
    }
  }
}

class java::rmi::activation::ActivationDesc : public ::java::lang::Object
{
public:
  ActivationDesc (::java::lang::String *, ::java::lang::String *, ::java::rmi::MarshalledObject *);
  ActivationDesc (::java::lang::String *, ::java::lang::String *, ::java::rmi::MarshalledObject *, jboolean);
  ActivationDesc (::java::rmi::activation::ActivationGroupID *, ::java::lang::String *, ::java::lang::String *, ::java::rmi::MarshalledObject *);
  ActivationDesc (::java::rmi::activation::ActivationGroupID *, ::java::lang::String *, ::java::lang::String *, ::java::rmi::MarshalledObject *, jboolean);
  virtual ::java::rmi::activation::ActivationGroupID *getGroupID () { return groupid; }
  virtual ::java::lang::String *getClassName () { return classname; }
  virtual ::java::lang::String *getLocation () { return location; }
  virtual ::java::rmi::MarshalledObject *getData () { return data; }
  virtual jboolean getRestartMode () { return restart; }
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
public: // actually package-private
  static jint hash (::java::lang::Object *);
  static jboolean eq (::java::lang::Object *, ::java::lang::Object *);
  static const jlong serialVersionUID = 7455834104417690957LL;
private:
  ::java::rmi::activation::ActivationGroupID * __attribute__((aligned(__alignof__( ::java::lang::Object )))) groupid;
  ::java::lang::String *classname;
  ::java::lang::String *location;
  ::java::rmi::MarshalledObject *data;
  jboolean restart;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_activation_ActivationDesc__ */
