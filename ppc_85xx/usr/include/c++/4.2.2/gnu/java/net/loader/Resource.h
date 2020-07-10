// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_loader_Resource__
#define __gnu_java_net_loader_Resource__

#pragma interface

#include <java/lang/Object.h>
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
      class CodeSource;
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
          class Resource;
          class URLLoader;
        }
      }
    }
  }
}

class gnu::java::net::loader::Resource : public ::java::lang::Object
{
public:
  Resource (::gnu::java::net::loader::URLLoader *);
  virtual ::java::security::CodeSource *getCodeSource ();
  virtual JArray< ::java::security::cert::Certificate *> *getCertificates () { return 0; }
  virtual ::gnu::java::net::loader::URLLoader *getLoader () { return loader; }
  virtual ::java::net::URL *getURL () = 0;
  virtual jint getLength () = 0;
  virtual ::java::io::InputStream *getInputStream () = 0;
public: // actually package-private
  ::gnu::java::net::loader::URLLoader * __attribute__((aligned(__alignof__( ::java::lang::Object )))) loader;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_loader_Resource__ */
