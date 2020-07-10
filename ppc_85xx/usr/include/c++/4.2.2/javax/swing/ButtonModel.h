// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_ButtonModel__
#define __javax_swing_ButtonModel__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class ButtonModel;
      class ButtonGroup;
      namespace event
      {
        class ChangeListener;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class ItemListener;
        class ActionListener;
      }
    }
  }
}

class javax::swing::ButtonModel : public ::java::lang::Object
{
public:
  virtual jboolean isArmed () = 0;
  virtual void setArmed (jboolean) = 0;
  virtual jboolean isEnabled () = 0;
  virtual void setEnabled (jboolean) = 0;
  virtual void setPressed (jboolean) = 0;
  virtual jboolean isPressed () = 0;
  virtual void removeActionListener (::java::awt::event::ActionListener *) = 0;
  virtual void addActionListener (::java::awt::event::ActionListener *) = 0;
  virtual void addItemListener (::java::awt::event::ItemListener *) = 0;
  virtual void removeItemListener (::java::awt::event::ItemListener *) = 0;
  virtual void addChangeListener (::javax::swing::event::ChangeListener *) = 0;
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *) = 0;
  virtual void setRollover (jboolean) = 0;
  virtual jboolean isRollover () = 0;
  virtual jint getMnemonic () = 0;
  virtual void setMnemonic (jint) = 0;
  virtual void setActionCommand (::java::lang::String *) = 0;
  virtual ::java::lang::String *getActionCommand () = 0;
  virtual void setGroup (::javax::swing::ButtonGroup *) = 0;
  virtual void setSelected (jboolean) = 0;
  virtual jboolean isSelected () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_ButtonModel__ */
