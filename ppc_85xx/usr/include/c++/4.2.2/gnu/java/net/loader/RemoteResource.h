// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_loader_RemoteResource__
#define __gnu_java_net_loader_RemoteResource__

#pragma interface

#include <gnu/java/net/loader/Resource.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace loader
        {
          class RemoteResource;
          class RemoteURLLoader;
        }
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

class gnu::java::net::loader::RemoteResource : public ::gnu::java::net::loader::Resource
{
public:
  RemoteResource (::gnu::java::net::loader::RemoteURLLoader *, ::java::lang::String *, ::java::net::URL *, ::java::io::InputStream *, jint);
  virtual ::java::io::InputStream *getInputStream () { return stream; }
  virtual jint getLength () { return length; }
  virtual ::java::net::URL *getURL () { return url; }
private:
  ::java::net::URL * __attribute__((aligned(__alignof__( ::gnu::java::net::loader::Resource )))) url;
  ::java::io::InputStream *stream;
public: // actually package-private
  jint length;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_loader_RemoteResource__ */
