// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_prng_RandomEventListener__
#define __gnu_java_security_prng_RandomEventListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace prng
        {
          class RandomEventListener;
          class RandomEvent;
        }
      }
    }
  }
}

class gnu::java::security::prng::RandomEventListener : public ::java::lang::Object
{
public:
  virtual void addRandomEvent (::gnu::java::security::prng::RandomEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __gnu_java_security_prng_RandomEventListener__ */
