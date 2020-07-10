// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_Mixer__
#define __javax_sound_sampled_Mixer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
        class Mixer;
        class Mixer$Info;
        class Line;
        class Line$Info;
      }
    }
  }
}

class javax::sound::sampled::Mixer : public ::java::lang::Object
{
public:
  virtual ::javax::sound::sampled::Line *getLine (::javax::sound::sampled::Line$Info *) = 0;
  virtual jint getMaxLines (::javax::sound::sampled::Line$Info *) = 0;
  virtual ::javax::sound::sampled::Mixer$Info *getMixerInfo () = 0;
  virtual JArray< ::javax::sound::sampled::Line$Info *> *getSourceLineInfo () = 0;
  virtual JArray< ::javax::sound::sampled::Line$Info *> *getSourceLineInfo (::javax::sound::sampled::Line$Info *) = 0;
  virtual JArray< ::javax::sound::sampled::Line *> *getSourceLines () = 0;
  virtual JArray< ::javax::sound::sampled::Line$Info *> *getTargetLineInfo () = 0;
  virtual JArray< ::javax::sound::sampled::Line$Info *> *getTargetLineInfo (::javax::sound::sampled::Line$Info *) = 0;
  virtual JArray< ::javax::sound::sampled::Line *> *getTargetLines () = 0;
  virtual jboolean isLineSupported (::javax::sound::sampled::Line$Info *) = 0;
  virtual jboolean isSynchronizationSupported (JArray< ::javax::sound::sampled::Line *> *, jboolean) = 0;
  virtual void synchronize (JArray< ::javax::sound::sampled::Line *> *, jboolean) = 0;
  virtual void unsynchronize (JArray< ::javax::sound::sampled::Line *> *) = 0;

  friend class javax_sound_sampled_Mixer$Info;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_sound_sampled_Mixer__ */