// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_MidiEvent__
#define __javax_sound_midi_MidiEvent__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace midi
      {
        class MidiEvent;
        class MidiMessage;
      }
    }
  }
}

class javax::sound::midi::MidiEvent : public ::java::lang::Object
{
public:
  MidiEvent (::javax::sound::midi::MidiMessage *, jlong);
  virtual ::javax::sound::midi::MidiMessage *getMessage () { return message; }
  virtual void setTick (jlong);
  virtual jlong getTick () { return tick; }
private:
  ::javax::sound::midi::MidiMessage * __attribute__((aligned(__alignof__( ::java::lang::Object )))) message;
  jlong tick;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_midi_MidiEvent__ */
