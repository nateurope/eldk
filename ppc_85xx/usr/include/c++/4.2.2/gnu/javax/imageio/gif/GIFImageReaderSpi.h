// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_gif_GIFImageReaderSpi__
#define __gnu_javax_imageio_gif_GIFImageReaderSpi__

#pragma interface

#include <javax/imageio/spi/ImageReaderSpi.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace imageio
      {
        namespace gif
        {
          class GIFImageReaderSpi;
        }
      }
    }
  }
  namespace javax
  {
    namespace imageio
    {
      class ImageReader;
    }
  }
}

class gnu::javax::imageio::gif::GIFImageReaderSpi : public ::javax::imageio::spi::ImageReaderSpi
{
public:
  GIFImageReaderSpi ();
  virtual ::java::lang::String *getDescription (::java::util::Locale *);
  virtual jboolean canDecodeInput (::java::lang::Object *);
  virtual ::javax::imageio::ImageReader *createReaderInstance (::java::lang::Object *);
public: // actually package-private
  static ::java::lang::String *vendorName;
  static ::java::lang::String *version;
  static ::java::lang::String *readerClassName;
  static JArray< ::java::lang::String *> *names;
  static JArray< ::java::lang::String *> *suffixes;
  static JArray< ::java::lang::String *> *MIMETypes;
  static JArray< ::java::lang::String *> *writerSpiNames;
  static const jint supportsStandardStreamMetadataFormat = 0L;
  static ::java::lang::String *nativeStreamMetadataFormatName;
  static ::java::lang::String *nativeStreamMetadataFormatClassName;
  static JArray< ::java::lang::String *> *extraStreamMetadataFormatNames;
  static JArray< ::java::lang::String *> *extraStreamMetadataFormatClassNames;
  static const jint supportsStandardImageMetadataFormat = 0L;
  static ::java::lang::String *nativeImageMetadataFormatName;
  static ::java::lang::String *nativeImageMetadataFormatClassName;
  static JArray< ::java::lang::String *> *extraImageMetadataFormatNames;
  static JArray< ::java::lang::String *> *extraImageMetadataFormatClassNames;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_imageio_gif_GIFImageReaderSpi__ */
