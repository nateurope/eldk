// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_dgc_VMID__
#define __java_rmi_dgc_VMID__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace dgc
      {
        class VMID;
      }
      namespace server
      {
        class UID;
      }
    }
  }
}

class java::rmi::dgc::VMID : public ::java::lang::Object
{
public:
  VMID ();
  static jboolean isUnique ();
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::String *toString ();
public: // actually package-private
  static const jlong serialVersionUID = -538642295484486218LL;
  static jboolean areWeUnique;
  static jbyteArray localAddr;
private:
  jbyteArray __attribute__((aligned(__alignof__( ::java::lang::Object ))))  addr;
public: // actually package-private
  jint hash;
private:
  ::java::rmi::server::UID *uid;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_dgc_VMID__ */
