// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_EnumControl__
#define __javax_sound_sampled_EnumControl__

#pragma interface

#include <javax/sound/sampled/Control.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
        class EnumControl;
        class EnumControl$Type;
      }
    }
  }
}

class javax::sound::sampled::EnumControl : public ::javax::sound::sampled::Control
{
public:  // actually protected
  EnumControl (::javax::sound::sampled::EnumControl$Type *, JArray< ::java::lang::Object *> *, ::java::lang::Object *);
public:
  virtual ::java::lang::Object *getValue () { return value; }
  virtual JArray< ::java::lang::Object *> *getValues () { return values; }
  virtual void setValue (::java::lang::Object *);
  virtual ::java::lang::String *toString ();
private:
  JArray< ::java::lang::Object *> * __attribute__((aligned(__alignof__( ::javax::sound::sampled::Control )))) values;
  ::java::lang::Object *value;

  friend class javax_sound_sampled_EnumControl$Type;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_sampled_EnumControl__ */