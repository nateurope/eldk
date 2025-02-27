// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_DefaultContentHandlerFactory__
#define __gnu_java_net_DefaultContentHandlerFactory__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        class DefaultContentHandlerFactory;
      }
    }
  }
  namespace java
  {
    namespace net
    {
      class ContentHandler;
    }
  }
}

class gnu::java::net::DefaultContentHandlerFactory : public ::java::lang::Object
{
public:
  virtual ::java::net::ContentHandler *createContentHandler (::java::lang::String *);
  DefaultContentHandlerFactory ();
private:
  static JArray< ::java::lang::String *> *known_image_types;
  static ::java::util::HashSet *imageTypes;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_DefaultContentHandlerFactory__ */
