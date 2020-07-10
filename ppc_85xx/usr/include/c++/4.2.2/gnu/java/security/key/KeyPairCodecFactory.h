// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_key_KeyPairCodecFactory__
#define __gnu_java_security_key_KeyPairCodecFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class Key;
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace key
        {
          class KeyPairCodecFactory;
          class IKeyPairCodec;
        }
      }
    }
  }
}

class gnu::java::security::key::KeyPairCodecFactory : public ::java::lang::Object
{
private:
  KeyPairCodecFactory ();
public:
  static ::gnu::java::security::key::IKeyPairCodec *getInstance (::java::lang::String *);
  static ::gnu::java::security::key::IKeyPairCodec *getInstance (::java::lang::String *, ::java::lang::String *);
  static ::gnu::java::security::key::IKeyPairCodec *getInstance (::java::lang::String *, jint);
  static ::gnu::java::security::key::IKeyPairCodec *getInstance (::java::security::Key *);
  static ::java::util::Set *getNames ();
private:
  static ::gnu::java::security::key::IKeyPairCodec *makeInstance (::java::lang::String *);
  static jboolean matches (::java::lang::Object *, ::java::lang::String *);
  static ::gnu::java::security::key::IKeyPairCodec *getRawCodec (::java::lang::String *);
  static ::gnu::java::security::key::IKeyPairCodec *getX509Codec (::java::lang::String *);
  static ::gnu::java::security::key::IKeyPairCodec *getPKCS8Codec (::java::lang::String *);
  static ::gnu::java::security::key::IKeyPairCodec *getRawCodec (::java::security::Key *);
  static ::gnu::java::security::key::IKeyPairCodec *getX509Codec (::java::security::Key *);
  static ::gnu::java::security::key::IKeyPairCodec *getPKCS8Codec (::java::security::Key *);
  static ::java::util::Set *names;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_key_KeyPairCodecFactory__ */
