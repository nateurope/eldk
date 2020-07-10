// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_Extension__
#define __gnu_javax_net_ssl_provider_Extension__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
            class Extension;
            class Extension$Type;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::Extension : public ::java::lang::Object
{
public: // actually package-private
  Extension (::gnu::javax::net::ssl::provider::Extension$Type *, jbyteArray);
  static ::gnu::javax::net::ssl::provider::Extension *read (::java::io::InputStream *);
public:
  virtual void write (::java::io::OutputStream *);
public: // actually package-private
  virtual ::gnu::javax::net::ssl::provider::Extension$Type *getType () { return type; }
  virtual jbyteArray getValue () { return value; }
public:
  virtual ::java::lang::String *toString ();
private:
  ::gnu::javax::net::ssl::provider::Extension$Type * __attribute__((aligned(__alignof__( ::java::lang::Object )))) type;
  jbyteArray value;

  friend class gnu_javax_net_ssl_provider_Extension$Type;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_Extension__ */