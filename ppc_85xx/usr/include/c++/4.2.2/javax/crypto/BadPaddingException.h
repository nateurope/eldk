// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_BadPaddingException__
#define __javax_crypto_BadPaddingException__

#pragma interface

#include <java/security/GeneralSecurityException.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
      class BadPaddingException;
    }
  }
}

class javax::crypto::BadPaddingException : public ::java::security::GeneralSecurityException
{
public:
  BadPaddingException ();
  BadPaddingException (::java::lang::String *);
private:
  static const jlong serialVersionUID = -5315033893984728443LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_crypto_BadPaddingException__ */
