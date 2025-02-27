// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JButton__
#define __javax_swing_JButton__

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
      class JButton;
      class Icon;
      class Action;
    }
  }
}

class javax::swing::JButton : public ::javax::swing::AbstractButton
{
public:
  JButton ();
  JButton (::javax::swing::Action *);
  JButton (::javax::swing::Icon *);
  JButton (::java::lang::String *);
  JButton (::java::lang::String *, ::javax::swing::Icon *);
public:  // actually protected
  virtual void configurePropertiesFromAction (::javax::swing::Action *);
public:
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
  virtual ::java::lang::String *getUIClassID ();
  virtual jboolean isDefaultButton ();
  virtual jboolean isDefaultCapable () { return defaultCapable; }
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public:
  virtual void removeNotify ();
  virtual void setDefaultCapable (jboolean);
  virtual void updateUI ();
private:
  static const jlong serialVersionUID = -1907255238954382202LL;
  jboolean __attribute__((aligned(__alignof__( ::javax::swing::AbstractButton ))))  defaultCapable;

  friend class javax_swing_JButton$AccessibleJButton;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JButton__ */
