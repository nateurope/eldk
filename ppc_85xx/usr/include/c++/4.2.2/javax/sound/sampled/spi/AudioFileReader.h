// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_spi_AudioFileReader__
#define __javax_sound_sampled_spi_AudioFileReader__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URL;
    }
  }
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
        namespace spi
        {
          class AudioFileReader;
        }
        class AudioInputStream;
        class AudioFileFormat;
      }
    }
  }
}

class javax::sound::sampled::spi::AudioFileReader : public ::java::lang::Object
{
public:
  AudioFileReader ();
  virtual ::javax::sound::sampled::AudioFileFormat *getAudioFileFormat (::java::io::File *) = 0;
  virtual ::javax::sound::sampled::AudioFileFormat *getAudioFileFormat (::java::io::InputStream *) = 0;
  virtual ::javax::sound::sampled::AudioFileFormat *getAudioFileFormat (::java::net::URL *) = 0;
  virtual ::javax::sound::sampled::AudioInputStream *getAudioInputStream (::java::io::File *) = 0;
  virtual ::javax::sound::sampled::AudioInputStream *getAudioInputStream (::java::io::InputStream *) = 0;
  virtual ::javax::sound::sampled::AudioInputStream *getAudioInputStream (::java::net::URL *) = 0;

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_sampled_spi_AudioFileReader__ */
