// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_java2d_ImagePaint__
#define __gnu_java_awt_java2d_ImagePaint__

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
        namespace java2d
        {
          class ImagePaint;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class PaintContext;
      class RenderingHints;
      class Rectangle;
      namespace geom
      {
        class Rectangle2D;
        class AffineTransform;
      }
      namespace image
      {
        class ColorModel;
        class RenderedImage;
      }
    }
  }
}

class gnu::java::awt::java2d::ImagePaint : public ::java::lang::Object
{
public: // actually package-private
  ImagePaint (::java::awt::image::RenderedImage *, ::java::awt::geom::AffineTransform *);
public:
  virtual ::java::awt::PaintContext *createContext (::java::awt::image::ColorModel *, ::java::awt::Rectangle *, ::java::awt::geom::Rectangle2D *, ::java::awt::geom::AffineTransform *, ::java::awt::RenderingHints *);
  virtual jint getTransparency ();
public: // actually package-private
  ::java::awt::image::RenderedImage * __attribute__((aligned(__alignof__( ::java::lang::Object )))) image;
  ::java::awt::geom::AffineTransform *transform;

  friend class gnu_java_awt_java2d_ImagePaint$ImagePaintContext;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_awt_java2d_ImagePaint__ */
