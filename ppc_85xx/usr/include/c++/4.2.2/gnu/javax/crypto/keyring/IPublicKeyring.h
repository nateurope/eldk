// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_keyring_IPublicKeyring__
#define __gnu_javax_crypto_keyring_IPublicKeyring__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace keyring
        {
          class IPublicKeyring;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class Certificate;
      }
    }
  }
}

class gnu::javax::crypto::keyring::IPublicKeyring : public ::java::lang::Object
{
public:
  virtual jboolean containsCertificate (::java::lang::String *) = 0;
  virtual ::java::security::cert::Certificate *getCertificate (::java::lang::String *) = 0;
  virtual void putCertificate (::java::lang::String *, ::java::security::cert::Certificate *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __gnu_javax_crypto_keyring_IPublicKeyring__ */
