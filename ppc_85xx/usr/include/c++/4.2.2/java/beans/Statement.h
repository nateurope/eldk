// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_Statement__
#define __java_beans_Statement__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class Statement;
    }
  }
}

class java::beans::Statement : public ::java::lang::Object
{
public:
  Statement (::java::lang::Object *, ::java::lang::String *, JArray< ::java::lang::Object *> *);
  virtual void execute ();
private:
  ::java::lang::Class *unwrap (::java::lang::Class *);
  jboolean compatible (JArray< ::java::lang::Class *> *, JArray< ::java::lang::Class *> *);
  jboolean moreSpecific (JArray< ::java::lang::Class *> *, JArray< ::java::lang::Class *> *);
public: // actually package-private
  virtual ::java::lang::Object *doExecute ();
public:
  virtual JArray< ::java::lang::Object *> *getArguments () { return arguments; }
  virtual ::java::lang::String *getMethodName () { return methodName; }
  virtual ::java::lang::Object *getTarget () { return target; }
  virtual ::java::lang::String *toString ();
private:
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object )))) target;
  ::java::lang::String *methodName;
  JArray< ::java::lang::Object *> *arguments;
  ::java::lang::reflect::Method *method;
  ::java::lang::reflect::Constructor *ctor;
  static JArray< ::java::lang::Class *> *wrappers;
  static JArray< ::java::lang::Class *> *natives;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_beans_Statement__ */