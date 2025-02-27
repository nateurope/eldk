// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_RemoteObject__
#define __java_rmi_server_RemoteObject__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class Remote;
      namespace server
      {
        class RemoteObject;
        class RemoteRef;
      }
    }
  }
}

class java::rmi::server::RemoteObject : public ::java::lang::Object
{
public:  // actually protected
  RemoteObject ();
  RemoteObject (::java::rmi::server::RemoteRef *);
public:
  virtual ::java::rmi::server::RemoteRef *getRef () { return ref; }
public: // actually package-private
  static void addStub (::java::rmi::Remote *, ::java::rmi::Remote *);
  static void deleteStub (::java::rmi::Remote *);
public:
  static ::java::rmi::Remote *toStub (::java::rmi::Remote *);
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::String *toString ();
private:
  void readObject (::java::io::ObjectInputStream *);
  void writeObject (::java::io::ObjectOutputStream *);
  static const jlong serialVersionUID = -3215090123894869218LL;
public:  // actually protected
  ::java::rmi::server::RemoteRef * __attribute__((aligned(__alignof__( ::java::lang::Object )))) ref;
private:
  static ::java::util::WeakHashMap *stubs;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_server_RemoteObject__ */
