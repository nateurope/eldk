// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_hash_IMessageDigest__
#define __gnu_java_security_hash_IMessageDigest__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
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

class gnu::java::security::hash::IMessageDigest : public ::java::lang::Object
{
public:
  virtual ::java::lang::String *name () = 0;
  virtual jint hashSize () = 0;
  virtual jint blockSize () = 0;
  virtual void update (jbyte) = 0;
  virtual void update (jbyteArray) = 0;
  virtual void update (jbyteArray, jint, jint) = 0;
  virtual jbyteArray digest () = 0;
  virtual void reset () = 0;
  virtual jboolean selfTest () = 0;
  virtual ::java::lang::Object *clone () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __gnu_java_security_hash_IMessageDigest__ */