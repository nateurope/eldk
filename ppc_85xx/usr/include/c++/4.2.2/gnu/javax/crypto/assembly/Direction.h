// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_assembly_Direction__
#define __gnu_javax_crypto_assembly_Direction__

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
          class Direction;
        }
      }
    }
  }
}

class gnu::javax::crypto::assembly::Direction : public ::java::lang::Object
{
private:
  Direction (jint);
public:
  static ::gnu::javax::crypto::assembly::Direction *reverse (::gnu::javax::crypto::assembly::Direction *);
  virtual ::java::lang::String *toString ();
  static ::gnu::javax::crypto::assembly::Direction *FORWARD;
  static ::gnu::javax::crypto::assembly::Direction *REVERSED;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  value;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_assembly_Direction__ */
