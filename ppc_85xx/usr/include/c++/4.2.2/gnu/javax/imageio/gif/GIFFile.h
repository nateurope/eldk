// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_gif_GIFFile__
#define __gnu_javax_imageio_gif_GIFFile__

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
        namespace gif
        {
          class GIFFile;
        }
      }
    }
  }
}

class gnu::javax::imageio::gif::GIFFile : public ::java::lang::Object
{
public:
  GIFFile (::java::io::InputStream *);
private:
  GIFFile (::gnu::javax::imageio::gif::GIFFile *, ::java::io::InputStream *, jint);
public:
  static jboolean readSignature (::java::io::InputStream *);
private:
  void loadImage (::java::io::InputStream *);
  void packPixels ();
public:
  virtual jint getWidth () { return width; }
  virtual jint getHeight () { return height; }
  virtual jint getNColors () { return nColors; }
  virtual jboolean hasTransparency () { return hasTransparency__; }
  virtual jint getTransparentIndex () { return transparentIndex; }
  virtual ::java::lang::String *getComment () { return comment; }
  virtual jint getDuration () { return duration; }
private:
  void deinterlace ();
  void readLocal (::java::io::InputStream *);
public:
  virtual jbyteArray getRawPalette ();
  virtual ::gnu::javax::imageio::gif::GIFFile *getImage (jint);
  virtual jbyteArray getRawImage () { return raster; }
  virtual jint nImages ();
private:
  void readExtension (::java::io::InputStream *);
  jbyteArray readData (::java::io::InputStream *);
  void decodeRaster (::java::io::InputStream *);
  jint getBits (jint);
  static jbyteArray nsBlock;
  static const jint EXTENSION = 33L;
  static const jint LOCAL = 44L;
  static const jint TERMINATOR = 59L;
  static const jint EXTENSION_COMMENT = 254L;
  static const jint EXTENSION_GCONTROL = 249L;
  static const jint EXTENSION_APPLICATION = 255L;
  static const jint UNDRAW_OVERWRITE = 1L;
  static const jint UNDRAW_RESTORE_BACKGROUND = 2L;
  static const jint UNDRAW_RESTORE_PREVIOUS = 3L;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  x;
  jint y;
  jint width;
  jint height;
  jint globalWidth;
  jint globalHeight;
  jbyte bgIndex;
  jint nColors;
  jbyteArray globalPalette;
  jboolean hasGlobalColorMap;
  jbyteArray localPalette;
  jboolean interlaced;
  jboolean hasTransparency__;
  jint undraw;
  jint transparentIndex;
  jbyteArray raster;
  jbyteArray compressedData;
  jint duration;
  jint dataBlockIndex;
  ::java::lang::String *comment;
  jint remainingBits;
  jint currentBits;
  jboolean isLooped;
  jint loops;
  ::java::util::Vector *animationFrames;

  friend class gnu_javax_imageio_gif_GIFFile$GIFException;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_imageio_gif_GIFFile__ */
