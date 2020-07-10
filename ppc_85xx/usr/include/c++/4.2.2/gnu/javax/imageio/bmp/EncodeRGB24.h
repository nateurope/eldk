// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_bmp_EncodeRGB24__
#define __gnu_javax_imageio_bmp_EncodeRGB24__

#pragma interface

#include <gnu/javax/imageio/bmp/BMPEncoder.h>

extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      class ImageWriteParam;
      class IIOImage;
      namespace metadata
      {
        class IIOMetadata;
      }
      namespace stream
      {
        class ImageOutputStream;
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
          class EncodeRGB24;
          class BMPFileHeader;
          class BMPInfoHeader;
        }
      }
    }
  }
}

class gnu::javax::imageio::bmp::EncodeRGB24 : public ::gnu::javax::imageio::bmp::BMPEncoder
{
public:
  EncodeRGB24 (::gnu::javax::imageio::bmp::BMPFileHeader *, ::gnu::javax::imageio::bmp::BMPInfoHeader *);
  virtual void encode (::javax::imageio::stream::ImageOutputStream *, ::javax::imageio::metadata::IIOMetadata *, ::javax::imageio::IIOImage *, ::javax::imageio::ImageWriteParam *);
public:  // actually protected
  ::gnu::javax::imageio::bmp::BMPInfoHeader * __attribute__((aligned(__alignof__( ::gnu::javax::imageio::bmp::BMPEncoder )))) infoHeader;
  ::gnu::javax::imageio::bmp::BMPFileHeader *fileHeader;
  jlong offset;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_imageio_bmp_EncodeRGB24__ */
