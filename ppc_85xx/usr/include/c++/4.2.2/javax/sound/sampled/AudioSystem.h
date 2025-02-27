// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_AudioSystem__
#define __javax_sound_sampled_AudioSystem__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

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
        class AudioSystem;
        class TargetDataLine;
        class SourceDataLine;
        class Mixer;
        class Line;
        class Line$Info;
        class Mixer$Info;
        class Clip;
        class AudioFormat;
        class AudioFormat$Encoding;
        class AudioInputStream;
        class AudioFileFormat$Type;
        class AudioFileFormat;
      }
    }
  }
}

class javax::sound::sampled::AudioSystem : public ::java::lang::Object
{
private:
  AudioSystem ();
public:
  static ::javax::sound::sampled::AudioFileFormat *getAudioFileFormat (::java::io::File *);
  static ::javax::sound::sampled::AudioFileFormat *getAudioFileFormat (::java::io::InputStream *);
  static ::javax::sound::sampled::AudioFileFormat *getAudioFileFormat (::java::net::URL *);
  static JArray< ::javax::sound::sampled::AudioFileFormat$Type *> *getAudioFileTypes ();
  static JArray< ::javax::sound::sampled::AudioFileFormat$Type *> *getAudioFileTypes (::javax::sound::sampled::AudioInputStream *);
  static ::javax::sound::sampled::AudioInputStream *getAudioInputStream (::javax::sound::sampled::AudioFormat$Encoding *, ::javax::sound::sampled::AudioInputStream *);
  static ::javax::sound::sampled::AudioInputStream *getAudioInputStream (::javax::sound::sampled::AudioFormat *, ::javax::sound::sampled::AudioInputStream *);
  static ::javax::sound::sampled::AudioInputStream *getAudioInputStream (::java::io::File *);
  static ::javax::sound::sampled::AudioInputStream *getAudioInputStream (::java::io::InputStream *);
  static ::javax::sound::sampled::AudioInputStream *getAudioInputStream (::java::net::URL *);
  static ::javax::sound::sampled::Clip *getClip ();
  static ::javax::sound::sampled::Clip *getClip (::javax::sound::sampled::Mixer$Info *);
  static ::javax::sound::sampled::Line *getLine (::javax::sound::sampled::Line$Info *);
  static ::javax::sound::sampled::Mixer *getMixer (::javax::sound::sampled::Mixer$Info *);
  static JArray< ::javax::sound::sampled::Mixer$Info *> *getMixerInfo ();
  static ::javax::sound::sampled::SourceDataLine *getSourceDataLine (::javax::sound::sampled::AudioFormat *);
  static ::javax::sound::sampled::SourceDataLine *getSourceDataLine (::javax::sound::sampled::AudioFormat *, ::javax::sound::sampled::Mixer$Info *);
  static JArray< ::javax::sound::sampled::Line$Info *> *getSourceLineInfo (::javax::sound::sampled::Line$Info *);
  static ::javax::sound::sampled::TargetDataLine *getTargetDataLine (::javax::sound::sampled::AudioFormat *);
  static ::javax::sound::sampled::TargetDataLine *getTargetDataLine (::javax::sound::sampled::AudioFormat *, ::javax::sound::sampled::Mixer$Info *);
  static JArray< ::javax::sound::sampled::AudioFormat$Encoding *> *getTargetEncodings (::javax::sound::sampled::AudioFormat$Encoding *);
  static JArray< ::javax::sound::sampled::AudioFormat$Encoding *> *getTargetEncodings (::javax::sound::sampled::AudioFormat *);
  static JArray< ::javax::sound::sampled::AudioFormat *> *getTargetFormats (::javax::sound::sampled::AudioFormat$Encoding *, ::javax::sound::sampled::AudioFormat *);
  static JArray< ::javax::sound::sampled::Line$Info *> *getTargetLineInfo (::javax::sound::sampled::Line$Info *);
  static jboolean isConversionSupported (::javax::sound::sampled::AudioFormat$Encoding *, ::javax::sound::sampled::AudioFormat *);
  static jboolean isConversionSupported (::javax::sound::sampled::AudioFormat *, ::javax::sound::sampled::AudioFormat *);
private:
  static jboolean isFileTypeSupported (JArray< ::javax::sound::sampled::AudioFileFormat$Type *> *, ::javax::sound::sampled::AudioFileFormat$Type *);
public:
  static jboolean isFileTypeSupported (::javax::sound::sampled::AudioFileFormat$Type *);
  static jboolean isFileTypeSupported (::javax::sound::sampled::AudioFileFormat$Type *, ::javax::sound::sampled::AudioInputStream *);
  static jboolean isLineSupported (::javax::sound::sampled::Line$Info *);
  static jint write (::javax::sound::sampled::AudioInputStream *, ::javax::sound::sampled::AudioFileFormat$Type *, ::java::io::File *);
  static jint write (::javax::sound::sampled::AudioInputStream *, ::javax::sound::sampled::AudioFileFormat$Type *, ::java::io::OutputStream *);
  static const jint NOT_SPECIFIED = -1L;

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_sampled_AudioSystem__ */
