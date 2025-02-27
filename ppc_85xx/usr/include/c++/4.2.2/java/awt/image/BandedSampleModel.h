// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_BandedSampleModel__
#define __java_awt_image_BandedSampleModel__

#pragma interface

#include <java/awt/image/ComponentSampleModel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class BandedSampleModel;
        class SampleModel;
        class DataBuffer;
      }
    }
  }
}

class java::awt::image::BandedSampleModel : public ::java::awt::image::ComponentSampleModel
{
private:
  static jintArray createBankArray (jint);
public:
  BandedSampleModel (jint, jint, jint, jint);
  BandedSampleModel (jint, jint, jint, jint, jintArray, jintArray);
  virtual ::java::awt::image::DataBuffer *createDataBuffer ();
  virtual ::java::awt::image::SampleModel *createCompatibleSampleModel (jint, jint);
  virtual ::java::awt::image::SampleModel *createSubsetSampleModel (jintArray);
  virtual ::java::lang::Object *getDataElements (jint, jint, ::java::lang::Object *, ::java::awt::image::DataBuffer *);
  virtual jintArray getPixel (jint, jint, jintArray, ::java::awt::image::DataBuffer *);
  virtual jintArray getPixels (jint, jint, jint, jint, jintArray, ::java::awt::image::DataBuffer *);
  virtual jint getSample (jint, jint, jint, ::java::awt::image::DataBuffer *);
  virtual jfloat getSampleFloat (jint, jint, jint, ::java::awt::image::DataBuffer *);
  virtual jdouble getSampleDouble (jint, jint, jint, ::java::awt::image::DataBuffer *);
  virtual jintArray getSamples (jint, jint, jint, jint, jint, jintArray, ::java::awt::image::DataBuffer *);
  virtual void setDataElements (jint, jint, ::java::lang::Object *, ::java::awt::image::DataBuffer *);
  virtual void setPixel (jint, jint, jintArray, ::java::awt::image::DataBuffer *);
  virtual void setPixels (jint, jint, jint, jint, jintArray, ::java::awt::image::DataBuffer *);
  virtual void setSample (jint, jint, jint, jint, ::java::awt::image::DataBuffer *);
  virtual void setSample (jint, jint, jint, jfloat, ::java::awt::image::DataBuffer *);
  virtual void setSample (jint, jint, jint, jdouble, ::java::awt::image::DataBuffer *);
  virtual void setSamples (jint, jint, jint, jint, jint, jintArray, ::java::awt::image::DataBuffer *);
  virtual ::java::lang::String *toString ();
private:
  jintArray __attribute__((aligned(__alignof__( ::java::awt::image::ComponentSampleModel ))))  bitMasks;
  jintArray bitOffsets;
  jintArray sampleSize;
  jint dataBitOffset;
  jint elemBits;
  jint numberOfBits;
  jint numElems;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_BandedSampleModel__ */
