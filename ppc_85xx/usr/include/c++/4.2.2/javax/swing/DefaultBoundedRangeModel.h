// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_DefaultBoundedRangeModel__
#define __javax_swing_DefaultBoundedRangeModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class DefaultBoundedRangeModel;
      namespace event
      {
        class ChangeListener;
        class EventListenerList;
        class ChangeEvent;
      }
    }
  }
}

class javax::swing::DefaultBoundedRangeModel : public ::java::lang::Object
{
public:
  DefaultBoundedRangeModel ();
  DefaultBoundedRangeModel (jint, jint, jint, jint);
  virtual ::java::lang::String *toString ();
  virtual jint getValue () { return value; }
  virtual void setValue (jint);
  virtual jint getExtent () { return extent; }
  virtual void setExtent (jint);
  virtual jint getMinimum () { return minimum; }
  virtual void setMinimum (jint);
  virtual jint getMaximum () { return maximum; }
  virtual void setMaximum (jint);
  virtual jboolean getValueIsAdjusting () { return isAdjusting; }
  virtual void setValueIsAdjusting (jboolean);
  virtual void setRangeProperties (jint, jint, jint, jint, jboolean);
  virtual void addChangeListener (::javax::swing::event::ChangeListener *);
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *);
public:  // actually protected
  virtual void fireStateChanged ();
public:
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
  virtual JArray< ::javax::swing::event::ChangeListener *> *getChangeListeners ();
private:
  void writeObject (::java::io::ObjectOutputStream *);
  void readObject (::java::io::ObjectInputStream *);
  static const jlong serialVersionUID = 5034068491295259790LL;
public:  // actually protected
  ::javax::swing::event::ChangeEvent * __attribute__((aligned(__alignof__( ::java::lang::Object )))) changeEvent;
  ::javax::swing::event::EventListenerList *listenerList;
private:
  jint value;
  jint extent;
  jint minimum;
  jint maximum;
  jboolean isAdjusting;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_DefaultBoundedRangeModel__ */
