// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_VolatileImage__
#define __java_awt_image_VolatileImage__

#pragma interface

#include <java/awt/Image.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class ImageCapabilities;
      class GraphicsConfiguration;
      class Graphics2D;
      class Graphics;
      namespace image
      {
        class VolatileImage;
        class ImageProducer;
        class BufferedImage;
      }
    }
  }
}

class java::awt::image::VolatileImage : public ::java::awt::Image
{
public:
  VolatileImage ();
  virtual ::java::awt::image::BufferedImage *getSnapshot () = 0;
  virtual jint getWidth () = 0;
  virtual jint getHeight () = 0;
  virtual ::java::awt::image::ImageProducer *getSource ();
  virtual void flush () { }
  virtual ::java::awt::Graphics *getGraphics ();
  virtual ::java::awt::Graphics2D *createGraphics () = 0;
  virtual jint validate (::java::awt::GraphicsConfiguration *) = 0;
  virtual jboolean contentsLost () = 0;
  virtual ::java::awt::ImageCapabilities *getCapabilities () = 0;
  virtual jint getTransparency () { return transparency; }
  static const jint IMAGE_OK = 0L;
  static const jint IMAGE_RESTORED = 1L;
  static const jint IMAGE_INCOMPATIBLE = 2L;
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::java::awt::Image ))))  transparency;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_VolatileImage__ */
