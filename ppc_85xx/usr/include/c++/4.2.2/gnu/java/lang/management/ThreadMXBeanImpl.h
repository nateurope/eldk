// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_lang_management_ThreadMXBeanImpl__
#define __gnu_java_lang_management_ThreadMXBeanImpl__

#pragma interface

#include <gnu/java/lang/management/BeanImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
        namespace management
        {
          class ThreadMXBeanImpl;
        }
      }
    }
  }
}

class gnu::java::lang::management::ThreadMXBeanImpl : public ::gnu::java::lang::management::BeanImpl
{
public:
  ThreadMXBeanImpl ();
  virtual jlongArray findMonitorDeadlockedThreads ();
  virtual jlongArray getAllThreadIds ();
  virtual jlong getCurrentThreadCpuTime ();
  virtual jlong getCurrentThreadUserTime ();
  virtual jint getDaemonThreadCount ();
  virtual jint getPeakThreadCount ();
  virtual jint getThreadCount ();
  virtual jlong getThreadCpuTime (jlong);
  virtual ::java::lang::management::ThreadInfo *getThreadInfo (jlong);
  virtual JArray< ::java::lang::management::ThreadInfo *> *getThreadInfo (jlongArray);
  virtual ::java::lang::management::ThreadInfo *getThreadInfo (jlong, jint);
  virtual JArray< ::java::lang::management::ThreadInfo *> *getThreadInfo (jlongArray, jint);
  virtual jlong getThreadUserTime (jlong);
  virtual jlong getTotalStartedThreadCount ();
  virtual jboolean isCurrentThreadCpuTimeSupported ();
  virtual jboolean isThreadContentionMonitoringEnabled ();
  virtual jboolean isThreadContentionMonitoringSupported ();
  virtual jboolean isThreadCpuTimeEnabled ();
  virtual jboolean isThreadCpuTimeSupported ();
  virtual void resetPeakThreadCount ();
  virtual void setThreadContentionMonitoringEnabled (jboolean);
  virtual void setThreadCpuTimeEnabled (jboolean);
private:
  static ::java::lang::String *CURRENT_THREAD_TIME_SUPPORT;
  static ::java::lang::String *THREAD_TIME_SUPPORT;
  static ::java::lang::String *CONTENTION_SUPPORT;
  static ::java::lang::String *TIME_ENABLED;
  jboolean __attribute__((aligned(__alignof__( ::gnu::java::lang::management::BeanImpl ))))  timeEnabled;
  jboolean contentionEnabled;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_lang_management_ThreadMXBeanImpl__ */
