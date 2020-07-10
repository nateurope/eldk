// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_ColorConvertOp__
#define __java_awt_image_ColorConvertOp__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
        class Rectangle2D;
        class Point2D;
      }
      namespace image
      {
        class ColorConvertOp;
        class WritableRaster;
        class Raster;
        class ColorModel;
        class BufferedImage;
      }
      class RenderingHints;
      namespace color
      {
        class ICC_Profile;
        class ColorSpace;
      }
    }
  }
}

class java::awt::image::ColorConvertOp : public ::java::lang::Object
{
public:
  ColorConvertOp (::java::awt::color::ColorSpace *, ::java::awt::RenderingHints *);
  ColorConvertOp (::java::awt::color::ColorSpace *, ::java::awt::color::ColorSpace *, ::java::awt::RenderingHints *);
  ColorConvertOp (JArray< ::java::awt::color::ICC_Profile *> *, ::java::awt::RenderingHints *);
  ColorConvertOp (::java::awt::RenderingHints *);
  virtual ::java::awt::image::BufferedImage *filter (::java::awt::image::BufferedImage *, ::java::awt::image::BufferedImage *);
  virtual ::java::awt::image::BufferedImage *createCompatibleDestImage (::java::awt::image::BufferedImage *, ::java::awt::image::ColorModel *);
  virtual JArray< ::java::awt::color::ICC_Profile *> *getICC_Profiles () { return profiles; }
  virtual ::java::awt::RenderingHints *getRenderingHints () { return hints; }
  virtual ::java::awt::image::WritableRaster *filter (::java::awt::image::Raster *, ::java::awt::image::WritableRaster *);
  virtual ::java::awt::image::WritableRaster *createCompatibleDestRaster (::java::awt::image::Raster *);
  virtual ::java::awt::geom::Point2D *getPoint2D (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual ::java::awt::geom::Rectangle2D *getBounds2D (::java::awt::image::BufferedImage *);
  virtual ::java::awt::geom::Rectangle2D *getBounds2D (::java::awt::image::Raster *);
private:
  void copyimage (::java::awt::image::BufferedImage *, ::java::awt::image::BufferedImage *);
  void copyraster (::java::awt::image::Raster *, ::java::awt::color::ColorSpace *, ::java::awt::image::WritableRaster *, ::java::awt::color::ColorSpace *);
  ::java::awt::color::ColorSpace * __attribute__((aligned(__alignof__( ::java::lang::Object )))) srccs;
  ::java::awt::color::ColorSpace *dstcs;
  ::java::awt::RenderingHints *hints;
  JArray< ::java::awt::color::ICC_Profile *> *profiles;
  JArray< ::java::awt::color::ColorSpace *> *spaces;
  jboolean rasterValid;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_ColorConvertOp__ */
