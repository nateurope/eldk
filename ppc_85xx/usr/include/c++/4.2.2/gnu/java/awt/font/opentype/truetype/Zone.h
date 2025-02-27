// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_font_opentype_truetype_Zone__
#define __gnu_java_awt_font_opentype_truetype_Zone__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

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
              class Zone;
            }
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
        class GeneralPath;
        class PathIterator;
        class AffineTransform;
      }
    }
  }
}

class gnu::java::awt::font::opentype::truetype::Zone : public ::java::lang::Object
{
public:
  Zone (jint);
  virtual jint getCapacity ();
  virtual jint getSize () { return numPoints; }
  virtual jint getX (jint);
  virtual void setX (jint, jint, jboolean);
  virtual void setY (jint, jint, jboolean);
  virtual jint getY (jint);
  virtual jint getOriginalX (jint);
  virtual jint getOriginalY (jint);
  virtual void setOriginalX (jint, jint);
  virtual void setOriginalY (jint, jint);
  virtual void setNumPoints (jint);
  virtual jboolean isOnCurve (jint);
  virtual void setOnCurve (jint, jboolean);
  virtual jboolean isContourEnd (jint);
  virtual void setContourEnd (jint, jboolean);
public: // actually package-private
  virtual void transform (jdouble, ::java::awt::geom::AffineTransform *, jint, jint, jint);
  virtual void combineWithSubGlyph (::gnu::java::awt::font::opentype::truetype::Zone *, jint);
private:
  void dump ();
public:
  virtual ::java::awt::geom::PathIterator *getPathIterator ();
  virtual ::java::awt::geom::GeneralPath *getPath ();
private:
  jintArray __attribute__((aligned(__alignof__( ::java::lang::Object ))))  pos;
  jintArray origPos;
  jbyteArray flags;
  jint numPoints;
  static const jint FLAG_TOUCHED_X = 1L;
  static const jint FLAG_TOUCHED_Y = 2L;
  static const jint FLAG_ON_CURVE = 4L;
  static const jint FLAG_CONTOUR_END = 8L;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_awt_font_opentype_truetype_Zone__ */
