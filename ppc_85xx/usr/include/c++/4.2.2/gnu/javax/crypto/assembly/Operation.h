// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_assembly_Operation__
#define __gnu_javax_crypto_assembly_Operation__

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
        namespace assembly
        {
          class Operation;
        }
      }
    }
  }
}

class gnu::javax::crypto::assembly::Operation : public ::java::lang::Object
{
private:
  Operation (jint);
public:
  virtual ::java::lang::String *toString ();
  static ::gnu::javax::crypto::assembly::Operation *PRE_PROCESSING;
  static ::gnu::javax::crypto::assembly::Operation *POST_PROCESSING;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  value;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_assembly_Operation__ */
