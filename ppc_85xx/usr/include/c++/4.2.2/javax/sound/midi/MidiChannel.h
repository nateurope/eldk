// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_MidiChannel__
#define __javax_sound_midi_MidiChannel__

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
        class MidiChannel;
      }
    }
  }
}

class javax::sound::midi::MidiChannel : public ::java::lang::Object
{
public:
  virtual void noteOn (jint, jint) = 0;
  virtual void noteOff (jint, jint) = 0;
  virtual void noteOff (jint) = 0;
  virtual void setPolyPressure (jint, jint) = 0;
  virtual jint getPolyPressure (jint) = 0;
  virtual void setChannelPressure (jint) = 0;
  virtual jint getChannelPressure () = 0;
  virtual void controlChange (jint, jint) = 0;
  virtual jint getController (jint) = 0;
  virtual void programChange (jint) = 0;
  virtual void programChange (jint, jint) = 0;
  virtual jint getProgram () = 0;
  virtual void setPitchBend (jint) = 0;
  virtual jint getPitchBend () = 0;
  virtual void resetAllControllers () = 0;
  virtual void allNotesOff () = 0;
  virtual void allSoundOff () = 0;
  virtual jboolean localControl (jboolean) = 0;
  virtual void setMono (jboolean) = 0;
  virtual jboolean getMono () = 0;
  virtual void setOmni (jboolean) = 0;
  virtual jboolean getOmni () = 0;
  virtual void setMute (jboolean) = 0;
  virtual jboolean getMute () = 0;
  virtual void setSolo (jboolean) = 0;
  virtual jboolean getSolo () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_sound_midi_MidiChannel__ */
