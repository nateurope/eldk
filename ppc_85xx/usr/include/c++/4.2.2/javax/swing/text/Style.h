// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_Style__
#define __javax_swing_text_Style__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class Style;
      }
      namespace event
      {
        class ChangeListener;
      }
    }
  }
}

class javax::swing::text::Style : public ::java::lang::Object
{
public:
  virtual ::java::lang::String *getName () = 0;
  virtual void addChangeListener (::javax::swing::event::ChangeListener *) = 0;
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_text_Style__ */
