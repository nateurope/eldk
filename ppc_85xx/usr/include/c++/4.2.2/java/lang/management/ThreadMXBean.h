// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_management_ThreadMXBean__
#define __java_lang_management_ThreadMXBean__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::management::ThreadMXBean : public ::java::lang::Object
{
public:
  virtual jlongArray findMonitorDeadlockedThreads () = 0;
  virtual jlongArray getAllThreadIds () = 0;
  virtual jlong getCurrentThreadCpuTime () = 0;
  virtual jlong getCurrentThreadUserTime () = 0;
  virtual jint getDaemonThreadCount () = 0;
  virtual jint getPeakThreadCount () = 0;
  virtual jint getThreadCount () = 0;
  virtual jlong getThreadCpuTime (jlong) = 0;
  virtual ::java::lang::management::ThreadInfo *getThreadInfo (jlong) = 0;
  virtual JArray< ::java::lang::management::ThreadInfo *> *getThreadInfo (jlongArray) = 0;
  virtual ::java::lang::management::ThreadInfo *getThreadInfo (jlong, jint) = 0;
  virtual JArray< ::java::lang::management::ThreadInfo *> *getThreadInfo (jlongArray, jint) = 0;
  virtual jlong getThreadUserTime (jlong) = 0;
  virtual jlong getTotalStartedThreadCount () = 0;
  virtual jboolean isCurrentThreadCpuTimeSupported () = 0;
  virtual jboolean isThreadContentionMonitoringEnabled () = 0;
  virtual jboolean isThreadContentionMonitoringSupported () = 0;
  virtual jboolean isThreadCpuTimeEnabled () = 0;
  virtual jboolean isThreadCpuTimeSupported () = 0;
  virtual void resetPeakThreadCount () = 0;
  virtual void setThreadContentionMonitoringEnabled (jboolean) = 0;
  virtual void setThreadCpuTimeEnabled (jboolean) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_lang_management_ThreadMXBean__ */
