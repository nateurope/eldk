// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_AudioPermission__
#define __javax_sound_sampled_AudioPermission__

#pragma interface

#include <java/security/BasicPermission.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
        class AudioPermission;
      }
    }
  }
}

class javax::sound::sampled::AudioPermission : public ::java::security::BasicPermission
{
public:
  AudioPermission (::java::lang::String *);
  AudioPermission (::java::lang::String *, ::java::lang::String *);
private:
  static const jlong serialVersionUID = -5518053473477801126LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_sampled_AudioPermission__ */