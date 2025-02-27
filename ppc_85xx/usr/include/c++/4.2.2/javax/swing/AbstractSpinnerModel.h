// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_AbstractSpinnerModel__
#define __javax_swing_AbstractSpinnerModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class AbstractSpinnerModel;
      namespace event
      {
        class ChangeListener;
        class EventListenerList;
        class ChangeEvent;
      }
    }
  }
}

class javax::swing::AbstractSpinnerModel : public ::java::lang::Object
{
public:
  AbstractSpinnerModel ();
  virtual void addChangeListener (::javax::swing::event::ChangeListener *);
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
  virtual JArray< ::javax::swing::event::ChangeListener *> *getChangeListeners ();
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *);
public:  // actually protected
  virtual void fireStateChanged ();
private:
  ::javax::swing::event::ChangeEvent * __attribute__((aligned(__alignof__( ::java::lang::Object )))) changeEvent;
public:  // actually protected
  ::javax::swing::event::EventListenerList *listenerList;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_AbstractSpinnerModel__ */
