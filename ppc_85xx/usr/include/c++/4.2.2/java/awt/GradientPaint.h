// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_GradientPaint__
#define __java_awt_GradientPaint__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class GradientPaint;
      class PaintContext;
      class RenderingHints;
      class Rectangle;
      namespace image
      {
        class ColorModel;
      }
      namespace geom
      {
        class AffineTransform;
        class Rectangle2D;
        class Point2D;
      }
      class Color;
    }
  }
}

class java::awt::GradientPaint : public ::java::lang::Object
{
public:
  GradientPaint (jfloat, jfloat, ::java::awt::Color *, jfloat, jfloat, ::java::awt::Color *);
  GradientPaint (::java::awt::geom::Point2D *, ::java::awt::Color *, ::java::awt::geom::Point2D *, ::java::awt::Color *);
  GradientPaint (jfloat, jfloat, ::java::awt::Color *, jfloat, jfloat, ::java::awt::Color *, jboolean);
  GradientPaint (::java::awt::geom::Point2D *, ::java::awt::Color *, ::java::awt::geom::Point2D *, ::java::awt::Color *, jboolean);
  virtual ::java::awt::geom::Point2D *getPoint1 ();
  virtual ::java::awt::Color *getColor1 () { return c1; }
  virtual ::java::awt::geom::Point2D *getPoint2 ();
  virtual ::java::awt::Color *getColor2 () { return c2; }
  virtual jboolean isCyclic () { return cyclic; }
  virtual ::java::awt::PaintContext *createContext (::java::awt::image::ColorModel *, ::java::awt::Rectangle *, ::java::awt::geom::Rectangle2D *, ::java::awt::geom::AffineTransform *, ::java::awt::RenderingHints *);
  virtual jint getTransparency ();
private:
  jfloat __attribute__((aligned(__alignof__( ::java::lang::Object ))))  x1;
  jfloat y1;
  ::java::awt::Color *c1;
  jfloat x2;
  jfloat y2;
  ::java::awt::Color *c2;
  jboolean cyclic;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_GradientPaint__ */
