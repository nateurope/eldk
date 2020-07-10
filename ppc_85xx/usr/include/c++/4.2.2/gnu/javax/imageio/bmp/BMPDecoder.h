// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_bmp_BMPDecoder__
#define __gnu_javax_imageio_bmp_BMPDecoder__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class IndexColorModel;
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
          class BMPDecoder;
          class BMPFileHeader;
          class BMPInfoHeader;
        }
      }
    }
  }
}

class gnu::javax::imageio::bmp::BMPDecoder : public ::java::lang::Object
{
public:
  BMPDecoder (::gnu::javax::imageio::bmp::BMPFileHeader *, ::gnu::javax::imageio::bmp::BMPInfoHeader *);
  static ::gnu::javax::imageio::bmp::BMPDecoder *getDecoder (::gnu::javax::imageio::bmp::BMPFileHeader *, ::gnu::javax::imageio::bmp::BMPInfoHeader *);
  virtual ::java::awt::image::BufferedImage *decode (::javax::imageio::stream::ImageInputStream *) = 0;
public:  // actually protected
  virtual jintArray readBitMasks (::javax::imageio::stream::ImageInputStream *);
  virtual ::java::awt::image::IndexColorModel *readPalette (::javax::imageio::stream::ImageInputStream *);
  virtual void skipToImage (::javax::imageio::stream::ImageInputStream *);
  ::gnu::javax::imageio::bmp::BMPInfoHeader * __attribute__((aligned(__alignof__( ::java::lang::Object )))) infoHeader;
  ::gnu::javax::imageio::bmp::BMPFileHeader *fileHeader;
  jlong offset;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_imageio_bmp_BMPDecoder__ */
