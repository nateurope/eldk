// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_Control__
#define __javax_sound_sampled_Control__

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
        class Control;
        class Control$Type;
      }
    }
  }
}

class javax::sound::sampled::Control : public ::java::lang::Object
{
public:  // actually protected
  Control (::javax::sound::sampled::Control$Type *);
public:
  virtual ::javax::sound::sampled::Control$Type *getType () { return type; }
  virtual ::java::lang::String *toString ();
private:
  ::javax::sound::sampled::Control$Type * __attribute__((aligned(__alignof__( ::java::lang::Object )))) type;

  friend class javax_sound_sampled_Control$Type;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_sampled_Control__ */
