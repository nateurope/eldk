// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicComboBoxEditor__
#define __javax_swing_plaf_basic_BasicComboBoxEditor__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class ActionListener;
        class FocusEvent;
      }
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
          class BasicComboBoxEditor;
        }
      }
      class JTextField;
    }
  }
}

class javax::swing::plaf::basic::BasicComboBoxEditor : public ::java::lang::Object
{
public:
  BasicComboBoxEditor ();
  virtual ::java::awt::Component *getEditorComponent () { return reinterpret_cast< ::java::awt::Component *> (editor); }
  virtual void setItem (::java::lang::Object *);
  virtual ::java::lang::Object *getItem ();
  virtual void selectAll ();
  virtual void focusGained (::java::awt::event::FocusEvent *) { }
  virtual void focusLost (::java::awt::event::FocusEvent *) { }
  virtual void addActionListener (::java::awt::event::ActionListener *);
  virtual void removeActionListener (::java::awt::event::ActionListener *);
public:  // actually protected
  ::javax::swing::JTextField * __attribute__((aligned(__alignof__( ::java::lang::Object )))) editor;

  friend class javax_swing_plaf_basic_BasicComboBoxEditor$UIResource;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicComboBoxEditor__ */
