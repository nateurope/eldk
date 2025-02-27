// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_IndexListParser__
#define __gnu_java_net_IndexListParser__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        class IndexListParser;
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

class gnu::java::net::IndexListParser : public ::java::lang::Object
{
public:
  IndexListParser (::java::util::jar::JarFile *, ::java::net::URL *, ::java::net::URL *);
public: // actually package-private
  virtual void clearAll ();
public:
  virtual ::java::lang::String *getVersionInfo ();
  virtual jdouble getVersionNumber () { return versionNumber; }
  virtual ::java::util::LinkedHashMap *getHeaders () { return prefixes; }
  static ::java::lang::String *JAR_INDEX_FILE;
  static ::java::lang::String *JAR_INDEX_VERSION_KEY;
public: // actually package-private
  jdouble __attribute__((aligned(__alignof__( ::java::lang::Object ))))  versionNumber;
  ::java::util::LinkedHashMap *prefixes;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_IndexListParser__ */
