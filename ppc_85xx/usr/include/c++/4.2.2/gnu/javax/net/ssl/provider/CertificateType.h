// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_CertificateType__
#define __gnu_javax_net_ssl_provider_CertificateType__

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
            class CertificateType;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::CertificateType : public ::java::lang::Object
{
private:
  CertificateType (jint);
public: // actually package-private
  static ::gnu::javax::net::ssl::provider::CertificateType *read (::java::io::InputStream *);
public:
  virtual jbyteArray getEncoded ();
  virtual jint getValue () { return value; }
  virtual ::java::lang::String *toString ();
public: // actually package-private
  static ::gnu::javax::net::ssl::provider::CertificateType *X509;
  static ::gnu::javax::net::ssl::provider::CertificateType *OPEN_PGP;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  value;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_CertificateType__ */