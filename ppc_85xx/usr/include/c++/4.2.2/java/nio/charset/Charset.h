// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_charset_Charset__
#define __java_nio_charset_Charset__

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
        class Charset;
        namespace spi
        {
          class CharsetProvider;
        }
        class CharsetDecoder;
        class CharsetEncoder;
      }
    }
  }
}

class java::nio::charset::Charset : public ::java::lang::Object
{
public:  // actually protected
  Charset (::java::lang::String *, JArray< ::java::lang::String *> *);
private:
  static void checkName (::java::lang::String *);
public:
  static ::java::nio::charset::Charset *defaultCharset ();
  static jboolean isSupported (::java::lang::String *);
  static ::java::nio::charset::Charset *forName (::java::lang::String *);
private:
  static ::java::nio::charset::Charset *charsetForName (::java::lang::String *);
public:
  static ::java::util::SortedMap *availableCharsets ();
private:
  static ::java::nio::charset::spi::CharsetProvider *provider ();
  static JArray< ::java::nio::charset::spi::CharsetProvider *> *providers2 ();
public:
  virtual ::java::lang::String *name () { return canonicalName; }
  virtual ::java::util::Set *aliases ();
  virtual ::java::lang::String *displayName () { return canonicalName; }
  virtual ::java::lang::String *displayName (::java::util::Locale *) { return canonicalName; }
  virtual jboolean isRegistered ();
  virtual jboolean contains (::java::nio::charset::Charset *) = 0;
  virtual ::java::nio::charset::CharsetDecoder *newDecoder () = 0;
  virtual ::java::nio::charset::CharsetEncoder *newEncoder () = 0;
  virtual jboolean canEncode ();
  virtual ::java::nio::ByteBuffer *encode (::java::nio::CharBuffer *);
  virtual ::java::nio::ByteBuffer *encode (::java::lang::String *);
  virtual ::java::nio::CharBuffer *decode (::java::nio::ByteBuffer *);
  virtual jint compareTo (::java::lang::Object *);
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::String *toString () { return canonicalName; }
private:
  ::java::nio::charset::CharsetEncoder * __attribute__((aligned(__alignof__( ::java::lang::Object )))) cachedEncoder;
  ::java::nio::charset::CharsetDecoder *cachedDecoder;
  static JArray< ::java::nio::charset::spi::CharsetProvider *> *providers;
  ::java::lang::String *canonicalName;
  JArray< ::java::lang::String *> *aliases__;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_charset_Charset__ */
