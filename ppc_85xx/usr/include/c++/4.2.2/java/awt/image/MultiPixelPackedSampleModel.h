// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_MultiPixelPackedSampleModel__
#define __java_awt_image_MultiPixelPackedSampleModel__

#pragma interface

#include <java/awt/image/SampleModel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class MultiPixelPackedSampleModel;
        class DataBuffer;
        class SampleModel;
      }
    }
  }
}

class java::awt::image::MultiPixelPackedSampleModel : public ::java::awt::image::SampleModel
{
public:
  MultiPixelPackedSampleModel (jint, jint, jint, jint);
  MultiPixelPackedSampleModel (jint, jint, jint, jint, jint, jint);
  virtual ::java::awt::image::SampleModel *createCompatibleSampleModel (jint, jint);
  virtual ::java::awt::image::DataBuffer *createDataBuffer ();
  virtual jint getNumDataElements ();
  virtual jintArray getSampleSize ();
  virtual jint getSampleSize (jint);
  virtual jint getOffset (jint, jint);
  virtual jint getBitOffset (jint);
  virtual jint getDataBitOffset () { return dataBitOffset; }
  virtual jint getScanlineStride () { return scanlineStride; }
  virtual jint getPixelBitStride () { return numberOfBits; }
  virtual jint getTransferType ();
  virtual ::java::awt::image::SampleModel *createSubsetSampleModel (jintArray);
  virtual ::java::lang::Object *getDataElements (jint, jint, ::java::lang::Object *, ::java::awt::image::DataBuffer *);
  virtual jintArray getPixel (jint, jint, jintArray, ::java::awt::image::DataBuffer *);
  virtual jint getSample (jint, jint, jint, ::java::awt::image::DataBuffer *);
  virtual void setDataElements (jint, jint, ::java::lang::Object *, ::java::awt::image::DataBuffer *);
  virtual void setPixel (jint, jint, jintArray, ::java::awt::image::DataBuffer *);
  virtual void setSample (jint, jint, jint, jint, ::java::awt::image::DataBuffer *);
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual ::java::lang::String *toString ();
private:
  jint __attribute__((aligned(__alignof__( ::java::awt::image::SampleModel ))))  scanlineStride;
  jintArray bitMasks;
  jintArray bitOffsets;
  jintArray sampleSize;
  jint dataBitOffset;
  jint elemBits;
  jint numberOfBits;
  jint numElems;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_MultiPixelPackedSampleModel__ */
