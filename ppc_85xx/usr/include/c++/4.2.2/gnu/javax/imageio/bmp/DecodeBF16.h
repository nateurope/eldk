// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_bmp_DecodeBF16__
#define __gnu_javax_imageio_bmp_DecodeBF16__

#pragma interface

#include <gnu/javax/imageio/bmp/BMPDecoder.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class BufferedImage;
      }
    }
  }
  namespace javax
  {
    namespace imageio
    {
      namespace stream
      {
        class ImageInputStream;
      }
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace imageio
      {
        namespace bmp
        {
          class DecodeBF16;
          class BMPInfoHeader;
          class BMPFileHeader;
        }
      }
    }
  }
}

class gnu::javax::imageio::bmp::DecodeBF16 : public ::gnu::javax::imageio::bmp::BMPDecoder
{
public:
  DecodeBF16 (::gnu::javax::imageio::bmp::BMPFileHeader *, ::gnu::javax::imageio::bmp::BMPInfoHeader *, jboolean);
  virtual ::java::awt::image::BufferedImage *decode (::javax::imageio::stream::ImageInputStream *);
private:
  jintArray __attribute__((aligned(__alignof__( ::gnu::javax::imageio::bmp::BMPDecoder ))))  bitmasks;
  jboolean useDefaultMasks;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_imageio_bmp_DecodeBF16__ */
