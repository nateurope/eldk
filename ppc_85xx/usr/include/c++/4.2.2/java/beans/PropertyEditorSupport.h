// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_PropertyEditorSupport__
#define __java_beans_PropertyEditorSupport__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Component;
      class Rectangle;
      class Graphics;
    }
    namespace beans
    {
      class PropertyEditorSupport;
      class PropertyChangeListener;
      class PropertyChangeSupport;
    }
  }
}

class java::beans::PropertyEditorSupport : public ::java::lang::Object
{
public:
  PropertyEditorSupport ();
  PropertyEditorSupport (::java::lang::Object *);
  virtual void setValue (::java::lang::Object *);
  virtual ::java::lang::Object *getValue () { return value; }
  virtual jboolean isPaintable ();
  virtual void paintValue (::java::awt::Graphics *, ::java::awt::Rectangle *) { }
  virtual ::java::lang::String *getJavaInitializationString ();
  virtual ::java::lang::String *getAsText ();
  virtual void setAsText (::java::lang::String *);
  virtual JArray< ::java::lang::String *> *getTags () { return 0; }
  virtual ::java::awt::Component *getCustomEditor () { return 0; }
  virtual jboolean supportsCustomEditor ();
  virtual void addPropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual void firePropertyChange ();
  virtual ::java::lang::Object *getSource () { return eventSource; }
  virtual void setSource (::java::lang::Object *);
public: // actually package-private
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object )))) eventSource;
  ::java::lang::Object *value;
  ::java::beans::PropertyChangeSupport *pSupport;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_beans_PropertyEditorSupport__ */
