// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_MimeTypeMapper__
#define __java_net_MimeTypeMapper__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class MimeTypeMapper;
    }
  }
}

class java::net::MimeTypeMapper : public ::java::lang::Object
{
public:
  MimeTypeMapper ();
  static void fillFromFile (::java::util::Map *, ::java::lang::String *);
  virtual ::java::lang::String *getContentTypeFor (::java::lang::String *);
  static void main (JArray< ::java::lang::String *> *);
public:  // actually protected
  static JArray<JArray< ::java::lang::String *> *> *mime_strings;
private:
  ::java::util::Hashtable * __attribute__((aligned(__alignof__( ::java::lang::Object )))) mime_types;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_MimeTypeMapper__ */
