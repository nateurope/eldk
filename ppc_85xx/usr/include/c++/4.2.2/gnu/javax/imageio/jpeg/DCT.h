// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_jpeg_DCT__
#define __gnu_javax_imageio_jpeg_DCT__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace imageio
      {
        namespace jpeg
        {
          class DCT;
        }
      }
    }
  }
}

class gnu::javax::imageio::jpeg::DCT : public ::java::lang::Object
{
public:
  DCT ();
  static jdouble C (jint);
private:
  void initMatrix ();
public:
  static JArray<jdoubleArray> * slow_idct (JArray<jdoubleArray> *);
  static JArray<jfloatArray> * slow_fdct (JArray<jfloatArray> *);
  virtual JArray<jfloatArray> * fast_fdct (JArray<jfloatArray> *);
  virtual JArray<jdoubleArray> * fast_idct (JArray<jdoubleArray> *);
  virtual JArray<jdoubleArray> * idj_fast_fdct (JArray<jfloatArray> *);
  JArray<jdoubleArray> * __attribute__((aligned(__alignof__( ::java::lang::Object ))))  c;
  JArray<jdoubleArray> * cT;

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_imageio_jpeg_DCT__ */
