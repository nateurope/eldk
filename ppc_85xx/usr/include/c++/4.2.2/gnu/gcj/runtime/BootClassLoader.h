// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_runtime_BootClassLoader__
#define __gnu_gcj_runtime_BootClassLoader__

#pragma interface

#include <gnu/gcj/runtime/HelperClassLoader.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
        class BootClassLoader;
      }
    }
  }
  namespace java
  {
    namespace net
    {
      class URL;
    }
  }
}

class gnu::gcj::runtime::BootClassLoader : public ::gnu::gcj::runtime::HelperClassLoader
{
public: // actually package-private
  BootClassLoader (::java::lang::String *);
public:
  virtual ::java::lang::Class *bootLoadClass (::java::lang::String *);
  virtual ::java::net::URL *bootGetResource (::java::lang::String *);
  virtual ::java::util::Enumeration *bootGetResources (::java::lang::String *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_gcj_runtime_BootClassLoader__ */