// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_png_PNGPhys__
#define __gnu_javax_imageio_png_PNGPhys__

#pragma interface

#include <gnu/javax/imageio/png/PNGChunk.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace imageio
      {
        namespace png
        {
          class PNGPhys;
        }
      }
    }
  }
}

class gnu::javax::imageio::png::PNGPhys : public ::gnu::javax::imageio::png::PNGChunk
{
public:  // actually protected
  PNGPhys (jint, jbyteArray, jint);
public:
  PNGPhys (jdouble);
  PNGPhys (jint, jint);
private:
  void makeData ();
public:
  virtual ::java::lang::String *toString ();
public: // actually package-private
  jlong __attribute__((aligned(__alignof__( ::gnu::javax::imageio::png::PNGChunk ))))  x;
  jlong y;
  jdouble ratio;
  jboolean usesRatio;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_imageio_png_PNGPhys__ */
