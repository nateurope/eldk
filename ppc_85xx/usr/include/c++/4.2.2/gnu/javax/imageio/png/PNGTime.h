// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_png_PNGTime__
#define __gnu_javax_imageio_png_PNGTime__

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
          class PNGTime;
        }
      }
    }
  }
}

class gnu::javax::imageio::png::PNGTime : public ::gnu::javax::imageio::png::PNGChunk
{
public:  // actually protected
  PNGTime (jint, jbyteArray, jint);
public:
  PNGTime (::java::util::Date *);
  virtual ::java::lang::String *toString ();
private:
  ::java::util::Date * __attribute__((aligned(__alignof__( ::gnu::javax::imageio::png::PNGChunk )))) date;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_imageio_png_PNGTime__ */
