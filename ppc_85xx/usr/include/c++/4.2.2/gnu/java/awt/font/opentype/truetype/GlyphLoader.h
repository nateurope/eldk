// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_font_opentype_truetype_GlyphLoader__
#define __gnu_java_awt_font_opentype_truetype_GlyphLoader__

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
    }
    namespace awt
    {
      namespace geom
      {
        class AffineTransform;
      }
    }
  }
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
              class GlyphLoader;
              class Zone;
              class VirtualMachine;
              class GlyphMeasurer;
              class GlyphLocator;
            }
          }
        }
      }
    }
  }
}

class gnu::java::awt::font::opentype::truetype::GlyphLoader : public ::java::lang::Object
{
public: // actually package-private
  GlyphLoader (::gnu::java::awt::font::opentype::truetype::GlyphLocator *, ::gnu::java::awt::font::opentype::truetype::VirtualMachine *, jint, jint, jint, ::gnu::java::awt::font::opentype::truetype::GlyphMeasurer *);
public:
  virtual void loadGlyph (jint, jdouble, ::java::awt::geom::AffineTransform *, jboolean, ::gnu::java::awt::font::opentype::truetype::Zone *);
private:
  void loadSubGlyph (jint, jdouble, ::java::awt::geom::AffineTransform *, jboolean, ::gnu::java::awt::font::opentype::truetype::Zone *, jint, jint);
  void loadSimpleGlyph (jint, jdouble, ::java::awt::geom::AffineTransform *, jboolean, jint, ::java::nio::ByteBuffer *, ::gnu::java::awt::font::opentype::truetype::Zone *, jint, jint);
  void loadCompoundGlyph (jint, jdouble, ::java::awt::geom::AffineTransform *, jboolean, ::java::nio::ByteBuffer *, ::gnu::java::awt::font::opentype::truetype::Zone *, jint, jint);
  jdouble getDouble214 (::java::nio::ByteBuffer *);
  void loadFlags (jint, ::java::nio::ByteBuffer *);
  void loadCoordinates (jint, ::java::nio::ByteBuffer *, ::gnu::java::awt::font::opentype::truetype::Zone *);
  void setPhantomPoints (jint, jint, ::gnu::java::awt::font::opentype::truetype::Zone *);
  ::gnu::java::awt::font::opentype::truetype::GlyphLocator * __attribute__((aligned(__alignof__( ::java::lang::Object )))) glyphLocator;
  ::gnu::java::awt::font::opentype::truetype::GlyphMeasurer *glyphMeasurer;
  ::gnu::java::awt::font::opentype::truetype::VirtualMachine *vm;
  jint unitsPerEm;
  jintArray contourEndPoints;
  jbyteArray pointFlags;
  static const jint ARGS_ARE_WORDS = 1L;
  static const jint ARGS_ARE_XY_VALUES = 2L;
  static const jint ROUND_XY_TO_GRID = 4L;
  static const jint WE_HAVE_A_SCALE = 8L;
  static const jint MORE_COMPONENTS = 32L;
  static const jint WE_HAVE_AN_X_AND_Y_SCALE = 64L;
  static const jint WE_HAVE_A_TWO_BY_TWO = 128L;
  static const jint WE_HAVE_INSTRUCTIONS = 256L;
  static const jint USE_MY_METRICS = 512L;
  static const jint OVERLAP_COMPOUND = 1024L;
  static const jint SCALED_COMPONENT_OFFSET = 2048L;
  static const jint UNSCALED_COMPONENT_OFFSET = 4096L;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_awt_font_opentype_truetype_GlyphLoader__ */
