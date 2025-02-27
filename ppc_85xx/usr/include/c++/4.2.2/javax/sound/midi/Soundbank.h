// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_Soundbank__
#define __javax_sound_midi_Soundbank__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace midi
      {
        class Soundbank;
        class Patch;
        class Instrument;
        class SoundbankResource;
      }
    }
  }
}

class javax::sound::midi::Soundbank : public ::java::lang::Object
{
public:
  virtual ::java::lang::String *getName () = 0;
  virtual ::java::lang::String *getVersion () = 0;
  virtual ::java::lang::String *getVendor () = 0;
  virtual ::java::lang::String *getDescription () = 0;
  virtual JArray< ::javax::sound::midi::SoundbankResource *> *getResources () = 0;
  virtual JArray< ::javax::sound::midi::Instrument *> *getInstruments () = 0;
  virtual ::javax::sound::midi::Instrument *getInstrument (::javax::sound::midi::Patch *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_sound_midi_Soundbank__ */
