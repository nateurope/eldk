// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_ClientKeyExchange__
#define __gnu_javax_net_ssl_provider_ClientKeyExchange__

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
            class ProtocolVersion;
            class ClientKeyExchange;
            class CipherSuite;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      class PublicKey;
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class gnu::javax::net::ssl::provider::ClientKeyExchange : public ::java::lang::Object
{
public: // actually package-private
  ClientKeyExchange (jbyteArray);
  ClientKeyExchange (::java::math::BigInteger *);
  static ::gnu::javax::net::ssl::provider::ClientKeyExchange *read (::java::io::InputStream *, ::gnu::javax::net::ssl::provider::CipherSuite *, ::java::security::PublicKey *);
public:
  virtual void write (::java::io::OutputStream *);
  virtual void write (::java::io::OutputStream *, ::gnu::javax::net::ssl::provider::ProtocolVersion *);
public: // actually package-private
  virtual ::java::lang::Object *getExchangeObject () { return exObject; }
public:
  virtual ::java::lang::String *toString ();
private:
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object )))) exObject;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_ClientKeyExchange__ */