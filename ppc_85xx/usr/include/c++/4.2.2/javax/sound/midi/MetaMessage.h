// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_MetaMessage__
#define __javax_sound_midi_MetaMessage__

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
        class MetaMessage;
      }
    }
  }
}

class javax::sound::midi::MetaMessage : public ::javax::sound::midi::MidiMessage
{
public:
  MetaMessage ();
public:  // actually protected
  MetaMessage (jbyteArray);
public:
  virtual void setMessage (jint, jbyteArray, jint);
  virtual jint getType ();
  virtual jbyteArray getData ();
  virtual ::java::lang::Object *clone ();
  static const jint META = 255L;
private:
  jint __attribute__((aligned(__alignof__( ::javax::sound::midi::MidiMessage ))))  lengthLength;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_midi_MetaMessage__ */
