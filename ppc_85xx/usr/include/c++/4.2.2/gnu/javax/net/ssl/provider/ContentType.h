// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_ContentType__
#define __gnu_javax_net_ssl_provider_ContentType__

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
            class ContentType;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::ContentType : public ::java::lang::Object
{
private:
  ContentType (jint);
public: // actually package-private
  static ::gnu::javax::net::ssl::provider::ContentType *read (::java::io::InputStream *);
public:
  virtual jbyteArray getEncoded ();
  virtual jint getValue () { return value; }
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual ::java::lang::String *toString ();
public: // actually package-private
  static ::gnu::javax::net::ssl::provider::ContentType *CLIENT_HELLO_V2;
  static ::gnu::javax::net::ssl::provider::ContentType *CHANGE_CIPHER_SPEC;
  static ::gnu::javax::net::ssl::provider::ContentType *ALERT;
  static ::gnu::javax::net::ssl::provider::ContentType *HANDSHAKE;
  static ::gnu::javax::net::ssl::provider::ContentType *APPLICATION_DATA;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  value;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_ContentType__ */
