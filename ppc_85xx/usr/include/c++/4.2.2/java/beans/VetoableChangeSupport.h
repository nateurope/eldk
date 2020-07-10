// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_VetoableChangeSupport__
#define __java_beans_VetoableChangeSupport__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class VetoableChangeSupport;
      class PropertyChangeEvent;
      class VetoableChangeListener;
    }
  }
}

class java::beans::VetoableChangeSupport : public ::java::lang::Object
{
public:
  VetoableChangeSupport (::java::lang::Object *);
  virtual void addVetoableChangeListener (::java::beans::VetoableChangeListener *);
  virtual void removeVetoableChangeListener (::java::beans::VetoableChangeListener *);
  virtual JArray< ::java::beans::VetoableChangeListener *> *getVetoableChangeListeners ();
  virtual void addVetoableChangeListener (::java::lang::String *, ::java::beans::VetoableChangeListener *);
  virtual void removeVetoableChangeListener (::java::lang::String *, ::java::beans::VetoableChangeListener *);
  virtual JArray< ::java::beans::VetoableChangeListener *> *getVetoableChangeListeners (::java::lang::String *);
  virtual void fireVetoableChange (::java::lang::String *, ::java::lang::Object *, ::java::lang::Object *);
  virtual void fireVetoableChange (::java::lang::String *, jint, jint);
  virtual void fireVetoableChange (::java::lang::String *, jboolean, jboolean);
  virtual void fireVetoableChange (::java::beans::PropertyChangeEvent *);
  virtual jboolean hasListeners (::java::lang::String *);
private:
  void writeObject (::java::io::ObjectOutputStream *);
  void readObject (::java::io::ObjectInputStream *);
  static const jlong serialVersionUID = -5090210921595982017LL;
  ::java::util::Hashtable * __attribute__((aligned(__alignof__( ::java::lang::Object )))) children;
  ::java::lang::Object *source;
  static const jint vetoableChangeSupportSerializedDataVersion = 2L;
  ::java::util::Vector *listeners;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_beans_VetoableChangeSupport__ */
