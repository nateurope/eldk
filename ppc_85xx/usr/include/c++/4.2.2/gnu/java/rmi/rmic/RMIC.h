// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_rmic_RMIC__
#define __gnu_java_rmi_rmic_RMIC__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace rmic
        {
          class RMIC;
          class RMIC$MethodRef;
          class TabbedWriter;
        }
      }
    }
  }
}

class gnu::java::rmi::rmic::RMIC : public ::java::lang::Object
{
public:
  RMIC (JArray< ::java::lang::String *> *);
  static void main (JArray< ::java::lang::String *> *);
  virtual jboolean run ();
private:
  jboolean processClass (::java::lang::String *);
  void analyzeClass (::java::lang::String *);
public:
  virtual ::java::lang::Exception *getException () { return exception; }
private:
  void findClass ();
  void generateStub ();
  void generateSkel ();
  void compile (::java::lang::String *);
  static ::java::lang::String *getPrettyName (::java::lang::Class *);
  JArray< ::java::lang::Class *> *sortExceptions (JArray< ::java::lang::Class *> *);
  void parseOptions ();
  void findRemoteMethods ();
  void logError (::java::lang::String *);
  static void error (::java::lang::String *);
  static void usage ();
  JArray< ::java::lang::String *> * __attribute__((aligned(__alignof__( ::java::lang::Object )))) args;
  jint next;
  ::java::lang::Exception *exception;
  jboolean keep;
  jboolean need11Stubs;
  jboolean need12Stubs;
  jboolean compile__;
  jboolean verbose;
  ::java::lang::String *destination;
  ::java::io::PrintWriter *out;
  ::gnu::java::rmi::rmic::TabbedWriter *ctrl;
  ::java::lang::Class *clazz;
  ::java::lang::String *classname;
  ::java::lang::String *fullclassname;
  ::java::lang::String *fullstubname;
  ::java::lang::String *fullskelname;
  JArray< ::gnu::java::rmi::rmic::RMIC$MethodRef *> *remotemethods;
  ::java::lang::String *stubname;
  ::java::lang::String *skelname;
  ::java::lang::ClassLoader *loader;
  ::java::lang::String *classpath;
  jint errorCount;
  ::java::util::List *mRemoteInterfaces;

  friend class gnu_java_rmi_rmic_RMIC$MethodRef;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_rmic_RMIC__ */
