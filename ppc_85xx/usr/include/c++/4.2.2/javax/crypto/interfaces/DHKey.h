// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_interfaces_DHKey__
#define __javax_crypto_interfaces_DHKey__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
      namespace interfaces
      {
        class DHKey;
      }
      namespace spec
      {
        class DHParameterSpec;
      }
    }
  }
}

class javax::crypto::interfaces::DHKey : public ::java::lang::Object
{
public:
  virtual ::javax::crypto::spec::DHParameterSpec *getParams () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_crypto_interfaces_DHKey__ */
