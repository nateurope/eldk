// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_charset_ISO_8859_1__
#define __gnu_java_nio_charset_ISO_8859_1__

#pragma interface

#include <java/nio/charset/Charset.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        namespace charset
        {
          class ISO_8859_1;
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      namespace charset
      {
        class CharsetEncoder;
        class CharsetDecoder;
        class Charset;
      }
    }
  }
}

class gnu::java::nio::charset::ISO_8859_1 : public ::java::nio::charset::Charset
{
public: // actually package-private
  ISO_8859_1 ();
public:
  virtual jboolean contains (::java::nio::charset::Charset *);
  virtual ::java::nio::charset::CharsetDecoder *newDecoder ();
  virtual ::java::nio::charset::CharsetEncoder *newEncoder ();

  friend class gnu_java_nio_charset_ISO_8859_1$Encoder;
  friend class gnu_java_nio_charset_ISO_8859_1$Decoder;

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_charset_ISO_8859_1__ */
