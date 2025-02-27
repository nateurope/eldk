// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_ThreadGroup__
#define __java_lang_ThreadGroup__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::ThreadGroup : public ::java::lang::Object
{
private:
  ThreadGroup ();
public:
  ThreadGroup (::java::lang::String *);
  ThreadGroup (::java::lang::ThreadGroup *, ::java::lang::String *);
  virtual ::java::lang::String *getName () { return name; }
  virtual ::java::lang::ThreadGroup *getParent ();
  virtual jint getMaxPriority () { return maxpri; }
  virtual jboolean isDaemon () { return daemon_flag; }
  virtual jboolean isDestroyed ();
  virtual void setDaemon (jboolean);
  virtual void setMaxPriority (jint);
  virtual jboolean parentOf (::java::lang::ThreadGroup *);
  virtual void checkAccess ();
  virtual jint activeCount ();
  virtual jint enumerate (JArray< ::java::lang::Thread *> *);
  virtual jint enumerate (JArray< ::java::lang::Thread *> *, jboolean);
  virtual jint activeGroupCount ();
  virtual jint enumerate (JArray< ::java::lang::ThreadGroup *> *);
  virtual jint enumerate (JArray< ::java::lang::ThreadGroup *> *, jboolean);
  virtual void stop ();
  virtual void interrupt ();
  virtual void suspend ();
  virtual void resume ();
  virtual void destroy ();
  virtual void list ();
  virtual void uncaughtException (::java::lang::Thread *, ::java::lang::Throwable *);
  virtual jboolean allowThreadSuspension (jboolean);
  virtual ::java::lang::String *toString ();
private:
  jint enumerate (JArray< ::java::lang::Thread *> *, jint, jboolean);
  jint enumerate (JArray< ::java::lang::ThreadGroup *> *, jint, jboolean);
  void list (::java::lang::String *);
public: // actually package-private
  virtual void addThread (::java::lang::Thread *);
  virtual void removeThread (::java::lang::Thread *);
  virtual void removeGroup (::java::lang::ThreadGroup *);
  static ::java::lang::Thread *getThreadFromId (jlong);
private:
  ::java::lang::Thread *getThreadFromIdImpl (jlong);
public: // actually package-private
  static ::java::lang::ThreadGroup *root;
  static jboolean had_uncaught_exception;
  ::java::lang::ThreadGroup * __attribute__((aligned(__alignof__( ::java::lang::Object )))) parent;
  ::java::lang::String *name;
private:
  ::java::util::Vector *threads;
  ::java::util::Vector *groups;
  jboolean daemon_flag;
  jint maxpri;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_ThreadGroup__ */
