// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_activation_DefaultActivationGroup__
#define __gnu_java_rmi_activation_DefaultActivationGroup__

#pragma interface

#include <java/rmi/activation/ActivationGroup.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace activation
        {
          class DefaultActivationGroup;
        }
      }
    }
  }
  namespace java
  {
    namespace rmi
    {
      class Remote;
      class MarshalledObject;
      namespace activation
      {
        class ActivationDesc;
        class ActivationID;
        class ActivationGroupID;
      }
    }
  }
}

class gnu::java::rmi::activation::DefaultActivationGroup : public ::java::rmi::activation::ActivationGroup
{
public:
  DefaultActivationGroup (::java::rmi::activation::ActivationGroupID *, ::java::rmi::MarshalledObject *);
  virtual void activeObject (::java::rmi::activation::ActivationID *, ::java::rmi::Remote *) { }
  virtual ::java::rmi::MarshalledObject *newInstance (::java::rmi::activation::ActivationID *, ::java::rmi::activation::ActivationDesc *);
private:
  static const jlong serialVersionUID = 1LL;
public: // actually package-private
  static JArray< ::java::lang::Class *> *cConstructorTypes;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_activation_DefaultActivationGroup__ */