// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_srp_StoreEntry__
#define __gnu_javax_crypto_sasl_srp_StoreEntry__

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
        namespace sasl
        {
          namespace srp
          {
            class StoreEntry;
          }
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::srp::StoreEntry : public ::java::lang::Object
{
public: // actually package-private
  StoreEntry (jint);
  virtual jboolean isAlive ();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object ))))  perenial;
  jlong timeToDie;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_sasl_srp_StoreEntry__ */
