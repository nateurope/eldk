// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JToggleButton__
#define __javax_swing_JToggleButton__

#pragma interface

#include <javax/swing/AbstractButton.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
    namespace swing
    {
      class JToggleButton;
      class Icon;
      class Action;
    }
  }
}

class javax::swing::JToggleButton : public ::javax::swing::AbstractButton
{
public:
  JToggleButton ();
  JToggleButton (::javax::swing::Action *);
  JToggleButton (::javax::swing::Icon *);
  JToggleButton (::javax::swing::Icon *, jboolean);
  JToggleButton (::java::lang::String *);
  JToggleButton (::java::lang::String *, jboolean);
  JToggleButton (::java::lang::String *, ::javax::swing::Icon *);
  JToggleButton (::java::lang::String *, ::javax::swing::Icon *, jboolean);
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
  virtual ::java::lang::String *getUIClassID ();
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public:
  virtual void updateUI ();
private:
  static const jlong serialVersionUID = -3128248873429850443LL;

  friend class javax_swing_JToggleButton$ToggleButtonModel;
  friend class javax_swing_JToggleButton$AccessibleJToggleButton;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JToggleButton__ */
