// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Choice__
#define __java_awt_Choice__

#pragma interface

#include <java/awt/Component.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
  }
  namespace java
  {
    namespace awt
    {
      class Choice;
      class AWTEvent;
      namespace event
      {
        class ItemEvent;
        class ItemListener;
      }
    }
  }
}

class java::awt::Choice : public ::java::awt::Component
{
public:
  Choice ();
  virtual jint getItemCount ();
  virtual jint countItems ();
  virtual ::java::lang::String *getItem (jint);
  virtual void add (::java::lang::String *);
  virtual void addItem (::java::lang::String *);
  virtual void insert (::java::lang::String *, jint);
  virtual void remove (::java::lang::String *);
  virtual void remove (jint);
  virtual void removeAll ();
  virtual ::java::lang::String *getSelectedItem ();
  virtual JArray< ::java::lang::Object *> *getSelectedObjects ();
  virtual jint getSelectedIndex () { return selectedIndex; }
  virtual void select (jint);
  virtual void select (::java::lang::String *);
  virtual void addNotify ();
  virtual void addItemListener (::java::awt::event::ItemListener *);
  virtual void removeItemListener (::java::awt::event::ItemListener *);
public:  // actually protected
  virtual void processEvent (::java::awt::AWTEvent *);
public: // actually package-private
  virtual void dispatchEventImpl (::java::awt::AWTEvent *);
public:  // actually protected
  virtual void processItemEvent (::java::awt::event::ItemEvent *);
  virtual ::java::lang::String *paramString ();
public:
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
  virtual JArray< ::java::awt::event::ItemListener *> *getItemListeners ();
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
public: // actually package-private
  virtual ::java::lang::String *generateName ();
private:
  static jlong getUniqueLong ();
  static jlong next_choice_number;
  static const jlong serialVersionUID = -4075310674757313071LL;
public: // actually package-private
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::java::awt::Component )))) pItems;
private:
  jint selectedIndex;
  ::java::awt::event::ItemListener *item_listeners;

  friend class java_awt_Choice$AccessibleAWTChoice;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_Choice__ */
