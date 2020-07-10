// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_ShortMessage__
#define __javax_sound_midi_ShortMessage__

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
        class ShortMessage;
      }
    }
  }
}

class javax::sound::midi::ShortMessage : public ::javax::sound::midi::MidiMessage
{
public:
  ShortMessage ();
public:  // actually protected
  ShortMessage (jbyteArray);
public:
  virtual void setMessage (jint, jint, jint);
  virtual void setMessage (jint, jint, jint, jint);
  virtual void setMessage (jint);
public:  // actually protected
  virtual jint getDataLength (jint);
public:
  virtual jint getChannel ();
  virtual jint getCommand ();
  virtual jint getData1 ();
  virtual jint getData2 ();
  virtual ::java::lang::Object *clone ();
  static const jint MIDI_TIME_CODE = 241L;
  static const jint SONG_POSITION_POINTER = 242L;
  static const jint SONG_SELECT = 243L;
  static const jint TUNE_REQUEST = 246L;
  static const jint END_OF_EXCLUSIVE = 247L;
  static const jint TIMING_CLOCK = 248L;
  static const jint START = 250L;
  static const jint CONTINUE = 251L;
  static const jint STOP = 252L;
  static const jint ACTIVE_SENSING = 254L;
  static const jint SYSTEM_RESET = 255L;
  static const jint NOTE_OFF = 128L;
  static const jint NOTE_ON = 144L;
  static const jint POLY_PRESSURE = 160L;
  static const jint CONTROL_CHANGE = 176L;
  static const jint PROGRAM_CHANGE = 192L;
  static const jint CHANNEL_PRESSURE = 208L;
  static const jint PITCH_BEND = 224L;
private:
  static jbyteArray defaultMessage;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_sound_midi_ShortMessage__ */
