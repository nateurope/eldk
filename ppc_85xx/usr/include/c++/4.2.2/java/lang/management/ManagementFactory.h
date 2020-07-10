// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_management_ManagementFactory__
#define __java_lang_management_ManagementFactory__

#pragma interface

#include <java/lang/Object.h>

class java::lang::management::ManagementFactory : public ::java::lang::Object
{
private:
  ManagementFactory ();
public:
  static ::java::lang::management::OperatingSystemMXBean *getOperatingSystemMXBean ();
  static ::java::lang::management::RuntimeMXBean *getRuntimeMXBean ();
  static ::java::lang::management::ClassLoadingMXBean *getClassLoadingMXBean ();
  static ::java::lang::management::ThreadMXBean *getThreadMXBean ();
  static ::java::lang::management::MemoryMXBean *getMemoryMXBean ();
  static ::java::lang::management::CompilationMXBean *getCompilationMXBean ();
  static ::java::util::List *getMemoryPoolMXBeans ();
  static ::java::util::List *getMemoryManagerMXBeans ();
  static ::java::util::List *getGarbageCollectorMXBeans ();
private:
  static ::java::lang::management::OperatingSystemMXBean *osBean;
  static ::java::lang::management::RuntimeMXBean *runtimeBean;
  static ::java::lang::management::ClassLoadingMXBean *classLoadingBean;
  static ::java::lang::management::ThreadMXBean *threadBean;
  static ::java::lang::management::MemoryMXBean *memoryBean;
  static ::java::lang::management::CompilationMXBean *compilationBean;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_management_ManagementFactory__ */