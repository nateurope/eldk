// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_PropertyChangeSupport__
#define __java_beans_PropertyChangeSupport__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class PropertyChangeSupport;
      class PropertyChangeEvent;
      class PropertyChangeListener;
    }
  }
}

class java::beans::PropertyChangeSupport : public ::java::lang::Object
{
public:
  PropertyChangeSupport (::java::lang::Object *);
  virtual void addPropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual JArray< ::java::beans::PropertyChangeListener *> *getPropertyChangeListeners ();
  virtual void addPropertyChangeListener (::java::lang::String *, ::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener (::java::lang::String *, ::java::beans::PropertyChangeListener *);
  virtual JArray< ::java::beans::PropertyChangeListener *> *getPropertyChangeListeners (::java::lang::String *);
  virtual void firePropertyChange (::java::lang::String *, ::java::lang::Object *, ::java::lang::Object *);
  virtual void firePropertyChange (::java::lang::String *, jint, jint);
  virtual void firePropertyChange (::java::lang::String *, jboolean, jboolean);
  virtual void firePropertyChange (::java::beans::PropertyChangeEvent *);
  virtual void fireIndexedPropertyChange (::java::lang::String *, jint, ::java::lang::Object *, ::java::lang::Object *);
  virtual void fireIndexedPropertyChange (::java::lang::String *, jint, jint, jint);
  virtual void fireIndexedPropertyChange (::java::lang::String *, jint, jboolean, jboolean);
  virtual jboolean hasListeners (::java::lang::String *);
private:
  void writeObject (::java::io::ObjectOutputStream *);
  void readObject (::java::io::ObjectInputStream *);
  static const jlong serialVersionUID = 6401253773779951803LL;
  ::java::util::Hashtable * __attribute__((aligned(__alignof__( ::java::lang::Object )))) children;
  ::java::lang::Object *source;
  static const jint propertyChangeSupportSerializedDataVersion = 2L;
  ::java::util::Vector *listeners;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_beans_PropertyChangeSupport__ */
