// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_MarshalledObject__
#define __java_rmi_MarshalledObject__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class MarshalledObject;
    }
  }
}

class java::rmi::MarshalledObject : public ::java::lang::Object
{
public:
  MarshalledObject (::java::lang::Object *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Object *get ();
  virtual jint hashCode () { return hash; }
private:
  static const jlong serialVersionUID = 8988374069173025854LL;
public: // actually package-private
  jbyteArray __attribute__((aligned(__alignof__( ::java::lang::Object ))))  objBytes;
  jbyteArray locBytes;
  jint hash;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_MarshalledObject__ */
