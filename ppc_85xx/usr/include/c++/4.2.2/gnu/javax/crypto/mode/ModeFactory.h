// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mode_ModeFactory__
#define __gnu_javax_crypto_mode_ModeFactory__

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
        namespace cipher
        {
          class IBlockCipher;
        }
        namespace mode
        {
          class ModeFactory;
          class IMode;
        }
      }
    }
  }
}

class gnu::javax::crypto::mode::ModeFactory : public ::java::lang::Object
{
private:
  ModeFactory ();
public:
  static ::gnu::javax::crypto::mode::IMode *getInstance (::java::lang::String *, ::java::lang::String *, jint);
  static ::gnu::javax::crypto::mode::IMode *getInstance (::java::lang::String *, ::gnu::javax::crypto::cipher::IBlockCipher *, jint);
  static ::java::util::Set *getNames ();
private:
  static ::java::util::Set *names;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_mode_ModeFactory__ */
