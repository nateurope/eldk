// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_DefaultButtonModel__
#define __javax_swing_DefaultButtonModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class ActionEvent;
        class ItemEvent;
        class ItemListener;
        class ActionListener;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      class DefaultButtonModel;
      class ButtonGroup;
      namespace event
      {
        class ChangeListener;
        class ChangeEvent;
        class EventListenerList;
      }
    }
  }
}

class javax::swing::DefaultButtonModel : public ::java::lang::Object
{
public:
  DefaultButtonModel ();
  virtual JArray< ::java::lang::Object *> *getSelectedObjects () { return 0; }
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
  virtual void addActionListener (::java::awt::event::ActionListener *);
  virtual void removeActionListener (::java::awt::event::ActionListener *);
  virtual JArray< ::java::awt::event::ActionListener *> *getActionListeners ();
  virtual void addItemListener (::java::awt::event::ItemListener *);
  virtual void removeItemListener (::java::awt::event::ItemListener *);
  virtual JArray< ::java::awt::event::ItemListener *> *getItemListeners ();
  virtual void addChangeListener (::javax::swing::event::ChangeListener *);
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *);
  virtual JArray< ::javax::swing::event::ChangeListener *> *getChangeListeners ();
public:  // actually protected
  virtual void fireItemStateChanged (::java::awt::event::ItemEvent *);
  virtual void fireActionPerformed (::java::awt::event::ActionEvent *);
  virtual void fireStateChanged ();
public:
  virtual jboolean isArmed ();
  virtual void setArmed (jboolean);
  virtual jboolean isEnabled ();
  virtual void setEnabled (jboolean);
  virtual void setPressed (jboolean);
  virtual jboolean isPressed ();
  virtual void setRollover (jboolean);
  virtual void setSelected (jboolean);
  virtual jboolean isSelected ();
  virtual jboolean isRollover ();
  virtual jint getMnemonic () { return mnemonic; }
  virtual void setMnemonic (jint);
  virtual void setActionCommand (::java::lang::String *);
  virtual ::java::lang::String *getActionCommand () { return actionCommand; }
  virtual void setGroup (::javax::swing::ButtonGroup *);
  virtual ::javax::swing::ButtonGroup *getGroup () { return group; }
private:
  static const jlong serialVersionUID = -5342609566534980231LL;
public:
  static const jint ARMED = 1L;
  static const jint ENABLED = 8L;
  static const jint PRESSED = 4L;
  static const jint ROLLOVER = 16L;
  static const jint SELECTED = 2L;
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  stateMask;
  ::javax::swing::event::EventListenerList *listenerList;
  ::javax::swing::event::ChangeEvent *changeEvent;
  ::javax::swing::ButtonGroup *group;
  jint mnemonic;
  ::java::lang::String *actionCommand;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_DefaultButtonModel__ */
