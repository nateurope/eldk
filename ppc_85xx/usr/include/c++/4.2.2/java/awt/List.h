// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_List__
#define __java_awt_List__

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
      class List;
      class AWTEvent;
      class Dimension;
      namespace event
      {
        class ItemEvent;
        class ActionEvent;
        class ActionListener;
        class ItemListener;
      }
    }
  }
}

class java::awt::List : public ::java::awt::Component
{
public:
  List ();
  List (jint);
  List (jint, jboolean);
  virtual jint getItemCount ();
  virtual jint countItems ();
  virtual JArray< ::java::lang::String *> *getItems ();
  virtual ::java::lang::String *getItem (jint);
  virtual jint getRows () { return rows; }
  virtual jboolean isMultipleMode ();
  virtual jboolean allowsMultipleSelections () { return multipleMode; }
  virtual void setMultipleMode (jboolean);
  virtual void setMultipleSelections (jboolean);
  virtual ::java::awt::Dimension *getMinimumSize ();
  virtual ::java::awt::Dimension *minimumSize ();
  virtual ::java::awt::Dimension *getMinimumSize (jint);
  virtual ::java::awt::Dimension *minimumSize (jint);
  virtual ::java::awt::Dimension *getPreferredSize ();
  virtual ::java::awt::Dimension *preferredSize ();
  virtual ::java::awt::Dimension *getPreferredSize (jint);
  virtual ::java::awt::Dimension *preferredSize (jint);
  virtual void add (::java::lang::String *);
  virtual void addItem (::java::lang::String *);
  virtual void add (::java::lang::String *, jint);
  virtual void addItem (::java::lang::String *, jint);
  virtual void delItem (jint);
  virtual void remove (jint);
  virtual void delItems (jint, jint);
  virtual void remove (::java::lang::String *);
  virtual void removeAll ();
  virtual void clear ();
  virtual void replaceItem (::java::lang::String *, jint);
  virtual jint getSelectedIndex ();
  virtual jintArray getSelectedIndexes ();
  virtual ::java::lang::String *getSelectedItem ();
  virtual JArray< ::java::lang::String *> *getSelectedItems ();
  virtual JArray< ::java::lang::Object *> *getSelectedObjects ();
  virtual jboolean isIndexSelected (jint);
  virtual jboolean isSelected (jint);
  virtual void makeVisible (jint);
  virtual jint getVisibleIndex () { return visibleIndex; }
  virtual void select (jint);
  virtual void deselect (jint);
  virtual void addNotify ();
  virtual void removeNotify ();
  virtual void addActionListener (::java::awt::event::ActionListener *);
  virtual void removeActionListener (::java::awt::event::ActionListener *);
  virtual void addItemListener (::java::awt::event::ItemListener *);
  virtual void removeItemListener (::java::awt::event::ItemListener *);
public:  // actually protected
  virtual void processEvent (::java::awt::AWTEvent *);
  virtual void processActionEvent (::java::awt::event::ActionEvent *);
  virtual void processItemEvent (::java::awt::event::ItemEvent *);
public: // actually package-private
  virtual void dispatchEventImpl (::java::awt::AWTEvent *);
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public:
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
  virtual JArray< ::java::awt::event::ActionListener *> *getActionListeners ();
  virtual JArray< ::java::awt::event::ItemListener *> *getItemListeners ();
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
public: // actually package-private
  virtual ::java::lang::String *generateName ();
private:
  static jlong getUniqueLong ();
  static jlong next_list_number;
  static const jlong serialVersionUID = -3304312411574666869LL;
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::java::awt::Component )))) items;
  jboolean multipleMode;
  jint rows;
  jintArray selected;
  jint visibleIndex;
  ::java::awt::event::ItemListener *item_listeners;
  ::java::awt::event::ActionListener *action_listeners;

  friend class java_awt_List$AccessibleAWTList;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_List__ */
