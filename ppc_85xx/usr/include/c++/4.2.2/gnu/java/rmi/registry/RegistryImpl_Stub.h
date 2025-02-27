// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_registry_RegistryImpl_Stub__
#define __gnu_java_rmi_registry_RegistryImpl_Stub__

#pragma interface

#include <java/rmi/server/RemoteStub.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace registry
        {
          class RegistryImpl_Stub;
        }
      }
    }
  }
  namespace java
  {
    namespace rmi
    {
      class Remote;
      namespace server
      {
        class RemoteRef;
        class Operation;
      }
    }
  }
}

class gnu::java::rmi::registry::RegistryImpl_Stub : public ::java::rmi::server::RemoteStub
{
public:
  RegistryImpl_Stub ();
  RegistryImpl_Stub (::java::rmi::server::RemoteRef *);
  virtual void bind (::java::lang::String *, ::java::rmi::Remote *);
  virtual JArray< ::java::lang::String *> *list ();
  virtual ::java::rmi::Remote *lookup (::java::lang::String *);
  virtual void rebind (::java::lang::String *, ::java::rmi::Remote *);
  virtual void unbind (::java::lang::String *);
private:
  static const jlong serialVersionUID = 2LL;
  static const jlong interfaceHash = 4905912898345647071LL;
  static jboolean useNewInvoke;
  static JArray< ::java::rmi::server::Operation *> *operations;
  static ::java::lang::reflect::Method *$method_bind_0;
  static ::java::lang::reflect::Method *$method_list_1;
  static ::java::lang::reflect::Method *$method_lookup_2;
  static ::java::lang::reflect::Method *$method_rebind_3;
  static ::java::lang::reflect::Method *$method_unbind_4;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_registry_RegistryImpl_Stub__ */
