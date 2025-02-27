// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_SysexMessage__
#define __javax_sound_midi_SysexMessage__

#pragma interface

#include <javax/sound/midi/MidiMessage.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace midi
      {
        class SysexMessage;
      }
    }
  }
}

class javax::sound::midi::SysexMessage : public ::javax::sound::midi::MidiMessage
{
public:
  SysexMessage ();
public:  // actually protected
  SysexMessage (jbyteArray);
public:
  virtual void setMessage (jbyteArray, jint);
  virtual void setMessage (jint, jbyteArray, jint);
  virtual jbyteArray getData ();
  virtual ::java::lang::Object *clone ();
  static const jint SYSTEM_EXCLUSIVE = 240L;
  static const jint SPECIAL_SYSTEM_EXCLUSIVE = 247L;

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_midi_SysexMessage__ */
