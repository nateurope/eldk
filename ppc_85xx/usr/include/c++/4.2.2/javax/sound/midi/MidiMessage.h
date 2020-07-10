// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_MidiMessage__
#define __javax_sound_midi_MidiMessage__

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
        class MidiMessage;
      }
    }
  }
}

class javax::sound::midi::MidiMessage : public ::java::lang::Object
{
public:  // actually protected
  MidiMessage (jbyteArray);
  virtual void setMessage (jbyteArray, jint);
public:
  virtual jbyteArray getMessage ();
  virtual jint getStatus ();
  virtual jint getLength () { return length; }
  virtual ::java::lang::Object *clone () = 0;
public:  // actually protected
  jbyteArray __attribute__((aligned(__alignof__( ::java::lang::Object ))))  data;
  jint length;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_midi_MidiMessage__ */
