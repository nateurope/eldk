// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_loader_JarURLResource__
#define __gnu_java_net_loader_JarURLResource__

#pragma interface

#include <gnu/java/net/loader/Resource.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URL;
    }
    namespace security
    {
      namespace cert
      {
        class Certificate;
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace loader
        {
          class JarURLResource;
          class JarURLLoader;
        }
      }
    }
  }
}

class gnu::java::net::loader::JarURLResource : public ::gnu::java::net::loader::Resource
{
public:
  JarURLResource (::gnu::java::net::loader::JarURLLoader *, ::java::lang::String *, ::java::util::jar::JarEntry *);
  virtual ::java::io::InputStream *getInputStream ();
  virtual jint getLength ();
  virtual JArray< ::java::security::cert::Certificate *> *getCertificates ();
  virtual ::java::net::URL *getURL ();
private:
  ::java::util::jar::JarEntry * __attribute__((aligned(__alignof__( ::gnu::java::net::loader::Resource )))) entry;
  ::java::lang::String *name;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_loader_JarURLResource__ */