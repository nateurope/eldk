// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_dnd_DropTargetDropEvent__
#define __java_awt_dnd_DropTargetDropEvent__

#pragma interface

#include <java/awt/dnd/DropTargetEvent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace datatransfer
      {
        class Transferable;
        class DataFlavor;
      }
      namespace dnd
      {
        class DropTargetDropEvent;
        class DropTargetContext;
      }
      class Point;
    }
  }
}

class java::awt::dnd::DropTargetDropEvent : public ::java::awt::dnd::DropTargetEvent
{
public:
  DropTargetDropEvent (::java::awt::dnd::DropTargetContext *, ::java::awt::Point *, jint, jint);
  DropTargetDropEvent (::java::awt::dnd::DropTargetContext *, ::java::awt::Point *, jint, jint, jboolean);
  virtual ::java::awt::Point *getLocation () { return location; }
  virtual JArray< ::java::awt::datatransfer::DataFlavor *> *getCurrentDataFlavors ();
  virtual ::java::util::List *getCurrentDataFlavorsAsList ();
  virtual jboolean isDataFlavorSupported (::java::awt::datatransfer::DataFlavor *);
  virtual jint getSourceActions () { return actions; }
  virtual jint getDropAction () { return dropAction; }
  virtual ::java::awt::datatransfer::Transferable *getTransferable ();
  virtual void acceptDrop (jint);
  virtual void rejectDrop ();
  virtual void dropComplete (jboolean);
  virtual jboolean isLocalTransfer () { return isLocalTx; }
private:
  static const jlong serialVersionUID = -1721911170440459322LL;
  jint __attribute__((aligned(__alignof__( ::java::awt::dnd::DropTargetEvent ))))  dropAction;
  jint actions;
  ::java::awt::Point *location;
  jboolean isLocalTx;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_dnd_DropTargetDropEvent__ */
