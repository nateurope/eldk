// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_AbstractAction__
#define __javax_swing_AbstractAction__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace swing
    {
      class AbstractAction;
      class Icon;
      namespace event
      {
        class SwingPropertyChangeSupport;
      }
    }
  }
}

class javax::swing::AbstractAction : public ::java::lang::Object
{
public:
  AbstractAction ();
  AbstractAction (::java::lang::String *);
  AbstractAction (::java::lang::String *, ::javax::swing::Icon *);
public:  // actually protected
  virtual ::java::lang::Object *clone ();
public:
  virtual ::java::lang::Object *getValue (::java::lang::String *);
  virtual void putValue (::java::lang::String *, ::java::lang::Object *);
  virtual jboolean isEnabled () { return enabled; }
  virtual void setEnabled (jboolean);
  virtual JArray< ::java::lang::Object *> *getKeys ();
public:  // actually protected
  virtual void firePropertyChange (::java::lang::String *, ::java::lang::Object *, ::java::lang::Object *);
private:
  void firePropertyChange (::java::lang::String *, jboolean, jboolean);
public:
  virtual void addPropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual JArray< ::java::beans::PropertyChangeListener *> *getPropertyChangeListeners ();
private:
  static const jlong serialVersionUID = -6803159439231523484LL;
public:  // actually protected
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object ))))  enabled;
  ::javax::swing::event::SwingPropertyChangeSupport *changeSupport;
private:
  ::java::util::HashMap *store;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_AbstractAction__ */
