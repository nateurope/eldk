// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_synth_SynthStyleFactory__
#define __javax_swing_plaf_synth_SynthStyleFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace synth
        {
          class SynthStyleFactory;
          class SynthStyle;
          class Region;
        }
      }
      class JComponent;
    }
  }
}

class javax::swing::plaf::synth::SynthStyleFactory : public ::java::lang::Object
{
public:
  SynthStyleFactory ();
  virtual ::javax::swing::plaf::synth::SynthStyle *getStyle (::javax::swing::JComponent *, ::javax::swing::plaf::synth::Region *) = 0;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_synth_SynthStyleFactory__ */