// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_KeyboardManager__
#define __javax_swing_KeyboardManager__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class KeyEvent;
      }
      class Container;
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      class JMenuBar;
      class ComponentInputMap;
      class KeyStroke;
      class JComponent;
      class KeyboardManager;
    }
  }
}

class javax::swing::KeyboardManager : public ::java::lang::Object
{
public:
  static ::javax::swing::KeyboardManager *getManager ();
public: // actually package-private
  static ::java::awt::Container *findTopLevel (::java::awt::Component *);
  virtual ::java::util::Hashtable *getHashtableForTopLevel (::java::awt::Container *);
public:
  virtual void registerBinding (::javax::swing::JComponent *, ::javax::swing::KeyStroke *);
  virtual void clearBindingsForComp (::javax::swing::JComponent *);
  virtual void registerEntireMap (::javax::swing::ComponentInputMap *);
  virtual jboolean processKeyStroke (::java::awt::Component *, ::javax::swing::KeyStroke *, ::java::awt::event::KeyEvent *);
public: // actually package-private
  virtual ::java::util::Vector *getVectorForTopLevel (::java::awt::Container *);
public:
  virtual void registerJMenuBar (::javax::swing::JMenuBar *);
  virtual void unregisterJMenuBar (::javax::swing::JMenuBar *);
public: // actually package-private
  KeyboardManager ();
  static ::javax::swing::KeyboardManager *manager;
  ::java::util::WeakHashMap * __attribute__((aligned(__alignof__( ::java::lang::Object )))) topLevelLookup;
  ::java::util::Hashtable *menuBarLookup;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_KeyboardManager__ */