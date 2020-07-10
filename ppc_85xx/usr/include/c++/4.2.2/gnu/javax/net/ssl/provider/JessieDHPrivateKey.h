// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_JessieDHPrivateKey__
#define __gnu_javax_net_ssl_provider_JessieDHPrivateKey__

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
            class JessieDHPrivateKey;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
      class BigInteger;
    }
  }
  namespace javax
  {
    namespace crypto
    {
      namespace spec
      {
        class DHParameterSpec;
      }
    }
  }
}

class gnu::javax::net::ssl::provider::JessieDHPrivateKey : public ::java::lang::Object
{
public: // actually package-private
  JessieDHPrivateKey (::javax::crypto::spec::DHParameterSpec *, ::java::math::BigInteger *);
public:
  virtual ::java::lang::String *getAlgorithm ();
  virtual ::java::lang::String *getFormat ();
  virtual jbyteArray getEncoded () { return 0; }
  virtual ::javax::crypto::spec::DHParameterSpec *getParams () { return params; }
  virtual ::java::math::BigInteger *getX () { return x; }
  virtual ::java::lang::String *toString ();
private:
  ::javax::crypto::spec::DHParameterSpec * __attribute__((aligned(__alignof__( ::java::lang::Object )))) params;
  ::java::math::BigInteger *x;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_JessieDHPrivateKey__ */
