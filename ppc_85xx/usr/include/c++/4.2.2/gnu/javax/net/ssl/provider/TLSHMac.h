// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_TLSHMac__
#define __gnu_javax_net_ssl_provider_TLSHMac__

#pragma interface

#include <gnu/javax/crypto/mac/HMac.h>

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
            class TLSHMac;
          }
        }
      }
    }
    namespace java
    {
      namespace security
      {
        namespace hash
        {
          class IMessageDigest;
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::TLSHMac : public ::gnu::javax::crypto::mac::HMac
{
public: // actually package-private
  TLSHMac (::gnu::java::security::hash::IMessageDigest *);
public:
  virtual void init (::java::util::Map *);
private:
  static const jint IPAD_BYTE = 54L;
  static const jint OPAD_BYTE = 92L;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_TLSHMac__ */