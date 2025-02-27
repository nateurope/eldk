// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_charset_CharsetEncoder__
#define __java_nio_charset_CharsetEncoder__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ByteBuffer;
      class CharBuffer;
      namespace charset
      {
        class CharsetEncoder;
        class CoderResult;
        class CodingErrorAction;
        class Charset;
      }
    }
  }
}

class java::nio::charset::CharsetEncoder : public ::java::lang::Object
{
public:  // actually protected
  CharsetEncoder (::java::nio::charset::Charset *, jfloat, jfloat);
  CharsetEncoder (::java::nio::charset::Charset *, jfloat, jfloat, jbyteArray);
public:
  virtual jfloat averageBytesPerChar () { return averageBytesPerChar__; }
  virtual jboolean canEncode (jchar);
  virtual jboolean canEncode (::java::lang::CharSequence *);
private:
  jboolean canEncode (::java::nio::CharBuffer *);
public:
  virtual ::java::nio::charset::Charset *charset () { return charset__; }
  virtual ::java::nio::ByteBuffer *encode (::java::nio::CharBuffer *);
  virtual ::java::nio::charset::CoderResult *encode (::java::nio::CharBuffer *, ::java::nio::ByteBuffer *, jboolean);
public:  // actually protected
  virtual ::java::nio::charset::CoderResult *encodeLoop (::java::nio::CharBuffer *, ::java::nio::ByteBuffer *) = 0;
public:
  virtual ::java::nio::charset::CoderResult *flush (::java::nio::ByteBuffer *);
public:  // actually protected
  virtual ::java::nio::charset::CoderResult *implFlush (::java::nio::ByteBuffer *);
  virtual void implOnMalformedInput (::java::nio::charset::CodingErrorAction *) { }
  virtual void implOnUnmappableCharacter (::java::nio::charset::CodingErrorAction *) { }
  virtual void implReplaceWith (jbyteArray) { }
  virtual void implReset () { }
public:
  virtual jboolean isLegalReplacement (jbyteArray);
  virtual ::java::nio::charset::CodingErrorAction *malformedInputAction () { return malformedInputAction__; }
  virtual jfloat maxBytesPerChar () { return maxBytesPerChar__; }
  virtual ::java::nio::charset::CharsetEncoder *onMalformedInput (::java::nio::charset::CodingErrorAction *);
  virtual ::java::nio::charset::CodingErrorAction *unmappableCharacterAction () { return unmappableCharacterAction__; }
  virtual ::java::nio::charset::CharsetEncoder *onUnmappableCharacter (::java::nio::charset::CodingErrorAction *);
  virtual jbyteArray replacement () { return replacement__; }
  virtual ::java::nio::charset::CharsetEncoder *replaceWith (jbyteArray);
  virtual ::java::nio::charset::CharsetEncoder *reset ();
private:
  static const jint STATE_RESET = 0L;
  static const jint STATE_CODING = 1L;
  static const jint STATE_END = 2L;
  static const jint STATE_FLUSHED = 3L;
  static jbyteArray DEFAULT_REPLACEMENT;
  ::java::nio::charset::Charset * __attribute__((aligned(__alignof__( ::java::lang::Object )))) charset__;
  jfloat averageBytesPerChar__;
  jfloat maxBytesPerChar__;
  jbyteArray replacement__;
  jint state;
  ::java::nio::charset::CodingErrorAction *malformedInputAction__;
  ::java::nio::charset::CodingErrorAction *unmappableCharacterAction__;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_charset_CharsetEncoder__ */
