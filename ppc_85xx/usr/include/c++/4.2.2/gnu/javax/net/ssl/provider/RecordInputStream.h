// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_RecordInputStream__
#define __gnu_javax_net_ssl_provider_RecordInputStream__

#pragma interface

#include <java/io/InputStream.h>
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
            class RecordInputStream;
            class ContentType;
            class RecordInput;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::RecordInputStream : public ::java::io::InputStream
{
public: // actually package-private
  RecordInputStream (::gnu::javax::net::ssl::provider::RecordInput *, ::gnu::javax::net::ssl::provider::ContentType *);
public:
  virtual jint available ();
  virtual jint read ();
  virtual jint read (jbyteArray);
  virtual jint read (jbyteArray, jint, jint);
  virtual ::java::lang::String *toString ();
private:
  ::gnu::javax::net::ssl::provider::RecordInput * __attribute__((aligned(__alignof__( ::java::io::InputStream )))) in;
  ::gnu::javax::net::ssl::provider::ContentType *type;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_RecordInputStream__ */
