// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_ReverbType__
#define __javax_sound_sampled_ReverbType__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
        class ReverbType;
      }
    }
  }
}

class javax::sound::sampled::ReverbType : public ::java::lang::Object
{
public:  // actually protected
  ReverbType (::java::lang::String *, jint, jfloat, jint, jfloat, jint);
public:
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual jint getDecayTime () { return decayTime; }
  virtual jint getEarlyReflectionDelay () { return earlyReflectionDelay; }
  virtual jfloat getEarlyReflectionIntensity () { return earlyReflectionIntensity; }
  virtual jint getLateReflectionDelay () { return lateReflectionDelay; }
  virtual jfloat getLateReflectionIntensity () { return lateReflectionIntensity; }
  virtual ::java::lang::String *getName () { return name; }
  virtual ::java::lang::String *toString ();
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) name;
  jint earlyReflectionDelay;
  jfloat earlyReflectionIntensity;
  jint lateReflectionDelay;
  jfloat lateReflectionIntensity;
  jint decayTime;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_sampled_ReverbType__ */