// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_jpeg_JPEGComponent__
#define __gnu_javax_imageio_jpeg_JPEGComponent__

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
        class WritableRaster;
      }
    }
  }
  namespace javax
  {
    namespace imageio
    {
      namespace plugins
      {
        namespace jpeg
        {
          class JPEGHuffmanTable;
        }
      }
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace imageio
      {
        namespace jpeg
        {
          class JPEGComponent;
          class JPEGImageInputStream;
          class DCT;
          class HuffmanTable;
        }
      }
    }
  }
}

class gnu::javax::imageio::jpeg::JPEGComponent : public ::java::lang::Object
{
public:
  JPEGComponent (jbyte, jbyte, jbyte, jbyte);
  virtual void padMCU (jint, jint);
  virtual void resetInterval ();
  virtual void quantitizeData ();
  virtual void setDCTable (::javax::imageio::plugins::jpeg::JPEGHuffmanTable *);
  virtual void setACTable (::javax::imageio::plugins::jpeg::JPEGHuffmanTable *);
  virtual void idctData (::gnu::javax::imageio::jpeg::DCT *);
  virtual void scaleByFactors ();
  virtual void writeBlock (::java::awt::image::WritableRaster *, JArray<jdoubleArray> *, jint, jint, jint);
  virtual void writeData (::java::awt::image::WritableRaster *, jint);
  virtual void setQuantizationTable (jintArray);
  virtual void readComponentMCU (::gnu::javax::imageio::jpeg::JPEGImageInputStream *);
  virtual jdouble decode_dc_coefficient (::gnu::javax::imageio::jpeg::JPEGImageInputStream *);
  virtual jdoubleArray decode_ac_coefficients (::gnu::javax::imageio::jpeg::JPEGImageInputStream *);
  jbyte __attribute__((aligned(__alignof__( ::java::lang::Object ))))  factorH;
  jbyte factorV;
  jbyte component_id;
  jbyte quant_id;
  jint width;
  jint height;
  jint maxV;
  jint maxH;
  ::gnu::javax::imageio::jpeg::HuffmanTable *ACTable;
  ::gnu::javax::imageio::jpeg::HuffmanTable *DCTable;
  jintArray quantizationTable;
  jdouble previousDC;
public: // actually package-private
  ::java::util::ArrayList *data;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_imageio_jpeg_JPEGComponent__ */