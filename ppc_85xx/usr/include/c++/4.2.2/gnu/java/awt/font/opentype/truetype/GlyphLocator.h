// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_font_opentype_truetype_GlyphLocator__
#define __gnu_java_awt_font_opentype_truetype_GlyphLocator__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace font
        {
          namespace opentype
          {
            namespace truetype
            {
              class GlyphLocator;
            }
          }
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      class ByteBuffer;
    }
  }
}

class gnu::java::awt::font::opentype::truetype::GlyphLocator : public ::java::lang::Object
{
public:
  static ::gnu::java::awt::font::opentype::truetype::GlyphLocator *forTable (jint, ::java::nio::ByteBuffer *, ::java::nio::ByteBuffer *);
  virtual ::java::nio::ByteBuffer *getGlyphData (jint) = 0;
public: // actually package-private
  GlyphLocator ();
public:  // actually protected
  ::java::nio::ByteBuffer * __attribute__((aligned(__alignof__( ::java::lang::Object )))) glyfTable;

  friend class gnu_java_awt_font_opentype_truetype_GlyphLocator$FourByte;
  friend class gnu_java_awt_font_opentype_truetype_GlyphLocator$TwoByte;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_awt_font_opentype_truetype_GlyphLocator__ */
