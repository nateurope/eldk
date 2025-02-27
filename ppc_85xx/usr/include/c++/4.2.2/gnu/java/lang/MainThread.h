// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_lang_MainThread__
#define __gnu_java_lang_MainThread__

#pragma interface

#include <java/lang/Thread.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
        class MainThread;
      }
    }
  }
}

class gnu::java::lang::MainThread : public ::java::lang::Thread
{
public:
  MainThread (::java::lang::Class *, JArray< ::java::lang::String *> *);
  MainThread (::java::lang::String *, JArray< ::java::lang::String *> *, jboolean);
  virtual void run ();
private:
  ::java::lang::String *getMain (::java::lang::String *);
  void call_main ();
public: // actually package-private
  static ::java::lang::Class *Kcert;
  static ::java::lang::Class *Kfile;
  static ::java::lang::Class *Khttp;
  static ::java::lang::Class *Kjar;
  static ::java::lang::Class *Klocale;
  static ::java::lang::Class *Kcalendar;
private:
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::lang::Thread )))) klass;
  ::java::lang::String *klass_name;
  JArray< ::java::lang::String *> *args;
  jboolean is_jar;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_lang_MainThread__ */
