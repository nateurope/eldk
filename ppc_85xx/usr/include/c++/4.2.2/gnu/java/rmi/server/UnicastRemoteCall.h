// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_server_UnicastRemoteCall__
#define __gnu_java_rmi_server_UnicastRemoteCall__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace server
      {
        class ObjID;
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace server
        {
          class UnicastRemoteCall;
          class UnicastConnection;
        }
      }
    }
  }
}

class gnu::java::rmi::server::UnicastRemoteCall : public ::java::lang::Object
{
public: // actually package-private
  UnicastRemoteCall (::gnu::java::rmi::server::UnicastConnection *);
  UnicastRemoteCall (::gnu::java::rmi::server::UnicastConnection *, ::java::rmi::server::ObjID *, jint, jlong);
  virtual ::gnu::java::rmi::server::UnicastConnection *getConnection () { return conn; }
public:
  virtual ::java::io::ObjectOutput *getOutputStream ();
  virtual void releaseOutputStream ();
  virtual ::java::io::ObjectInput *startInputStream ();
  virtual ::java::io::ObjectInput *getInputStream ();
  virtual void releaseInputStream () { }
  virtual ::java::io::ObjectOutput *getResultStream (jboolean);
  virtual void executeCall ();
  virtual void done () { }
public: // actually package-private
  virtual jboolean isReturnValue ();
  virtual ::java::lang::Object *returnValue ();
  virtual JArray< ::java::lang::Object *> *getArguments ();
  virtual ::java::lang::Object *getObject () { return object; }
  virtual jint getOpnum () { return opnum; }
  virtual jlong getHash () { return hash; }
  virtual void setReturnValue (::java::lang::Object *);
private:
  ::gnu::java::rmi::server::UnicastConnection * __attribute__((aligned(__alignof__( ::java::lang::Object )))) conn;
  ::java::lang::Object *result;
  ::java::lang::Object *object;
  jint opnum;
  jlong hash;
public: // actually package-private
  ::java::util::Vector *vec;
  jint ptr;
private:
  ::java::rmi::server::ObjID *objid;
  ::java::io::ObjectOutput *oout;
  ::java::io::ObjectInput *oin;

  friend class gnu_java_rmi_server_UnicastRemoteCall$DummyObjectInputStream;
  friend class gnu_java_rmi_server_UnicastRemoteCall$DummyObjectOutputStream;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_server_UnicastRemoteCall__ */
