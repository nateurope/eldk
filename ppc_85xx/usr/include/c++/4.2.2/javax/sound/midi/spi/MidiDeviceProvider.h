// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_spi_MidiDeviceProvider__
#define __javax_sound_midi_spi_MidiDeviceProvider__

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
        namespace spi
        {
          class MidiDeviceProvider;
        }
        class MidiDevice;
        class MidiDevice$Info;
      }
    }
  }
}

class javax::sound::midi::spi::MidiDeviceProvider : public ::java::lang::Object
{
public:
  virtual jboolean isDeviceSupported (::javax::sound::midi::MidiDevice$Info *);
  virtual JArray< ::javax::sound::midi::MidiDevice$Info *> *getDeviceInfo () = 0;
  virtual ::javax::sound::midi::MidiDevice *getDevice (::javax::sound::midi::MidiDevice$Info *) = 0;
  MidiDeviceProvider ();

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_midi_spi_MidiDeviceProvider__ */
