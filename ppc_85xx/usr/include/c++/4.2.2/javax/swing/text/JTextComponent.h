// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_JTextComponent__
#define __javax_swing_text_JTextComponent__

#pragma interface

#include <javax/swing/JComponent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Point;
      namespace event
      {
        class MouseEvent;
        class InputMethodListener;
      }
      class Rectangle;
      class Dimension;
      class Insets;
      class Color;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
    namespace swing
    {
      namespace event
      {
        class CaretEvent;
        class CaretListener;
      }
      namespace plaf
      {
        class TextUI;
      }
      class Action;
      namespace text
      {
        class JTextComponent;
        class JTextComponent$KeyBinding;
        class Highlighter;
        class Caret;
        class Document;
        class NavigationFilter;
        class Keymap;
        class JTextComponent$DefaultTransferHandler;
      }
    }
  }
}

class javax::swing::text::JTextComponent : public ::javax::swing::JComponent
{
public:
  static ::javax::swing::text::Keymap *getKeymap (::java::lang::String *);
  static ::javax::swing::text::Keymap *removeKeymap (::java::lang::String *);
  static ::javax::swing::text::Keymap *addKeymap (::java::lang::String *, ::javax::swing::text::Keymap *);
  virtual ::javax::swing::text::Keymap *getKeymap () { return keymap; }
  virtual void setKeymap (::javax::swing::text::Keymap *);
  static void loadKeymap (::javax::swing::text::Keymap *, JArray< ::javax::swing::text::JTextComponent$KeyBinding *> *, JArray< ::javax::swing::Action *> *);
  virtual JArray< ::javax::swing::Action *> *getActions ();
  JTextComponent ();
  virtual void setDocument (::javax::swing::text::Document *);
  virtual ::javax::swing::text::Document *getDocument () { return doc; }
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
  virtual void setMargin (::java::awt::Insets *);
  virtual ::java::awt::Insets *getMargin () { return margin; }
  virtual void setText (::java::lang::String *);
  virtual ::java::lang::String *getText ();
  virtual ::java::lang::String *getText (jint, jint);
  virtual ::java::lang::String *getSelectedText ();
  virtual ::java::lang::String *getUIClassID ();
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public:
  virtual ::javax::swing::plaf::TextUI *getUI ();
  virtual void setUI (::javax::swing::plaf::TextUI *);
  virtual void updateUI ();
  virtual ::java::awt::Dimension *getPreferredScrollableViewportSize ();
  virtual jint getScrollableUnitIncrement (::java::awt::Rectangle *, jint, jint);
  virtual jint getScrollableBlockIncrement (::java::awt::Rectangle *, jint, jint);
  virtual jboolean isEditable () { return editable; }
  virtual void setEditable (jboolean);
  virtual ::javax::swing::text::Caret *getCaret () { return caret; }
  virtual void setCaret (::javax::swing::text::Caret *);
  virtual ::java::awt::Color *getCaretColor () { return caretColor; }
  virtual void setCaretColor (::java::awt::Color *);
  virtual ::java::awt::Color *getDisabledTextColor () { return disabledTextColor; }
  virtual void setDisabledTextColor (::java::awt::Color *);
  virtual ::java::awt::Color *getSelectedTextColor () { return selectedTextColor; }
  virtual void setSelectedTextColor (::java::awt::Color *);
  virtual ::java::awt::Color *getSelectionColor () { return selectionColor; }
  virtual void setSelectionColor (::java::awt::Color *);
  virtual jint getCaretPosition ();
  virtual void setCaretPosition (jint);
  virtual void moveCaretPosition (jint);
  virtual ::javax::swing::text::Highlighter *getHighlighter () { return highlighter; }
  virtual void setHighlighter (::javax::swing::text::Highlighter *);
  virtual jint getSelectionStart ();
  virtual void setSelectionStart (jint);
  virtual jint getSelectionEnd ();
  virtual void setSelectionEnd (jint);
  virtual void select (jint, jint);
  virtual void selectAll ();
  virtual void replaceSelection (::java::lang::String *);
  virtual jboolean getScrollableTracksViewportHeight ();
  virtual jboolean getScrollableTracksViewportWidth ();
  virtual void addCaretListener (::javax::swing::event::CaretListener *);
  virtual void removeCaretListener (::javax::swing::event::CaretListener *);
  virtual JArray< ::javax::swing::event::CaretListener *> *getCaretListeners ();
public:  // actually protected
  virtual void fireCaretUpdate (::javax::swing::event::CaretEvent *);
public:
  virtual void addInputMethodListener (::java::awt::event::InputMethodListener *);
  virtual void removeInputMethodListener (::java::awt::event::InputMethodListener *);
  virtual JArray< ::java::awt::event::InputMethodListener *> *getInputMethodListeners ();
  virtual ::java::awt::Rectangle *modelToView (jint);
  virtual jboolean getDragEnabled () { return dragEnabled; }
  virtual void setDragEnabled (jboolean);
  virtual jint viewToModel (::java::awt::Point *);
  virtual void copy ();
  virtual void cut ();
  virtual void paste ();
private:
  void doTransferAction (::java::lang::String *, ::javax::swing::Action *);
public:
  virtual void setFocusAccelerator (jchar);
  virtual jchar getFocusAccelerator () { return focusAccelerator; }
  virtual ::javax::swing::text::NavigationFilter *getNavigationFilter () { return navigationFilter; }
  virtual void setNavigationFilter (::javax::swing::text::NavigationFilter *);
  virtual void read (::java::io::Reader *, ::java::lang::Object *);
  virtual void write (::java::io::Writer *);
  virtual ::java::lang::String *getToolTipText (::java::awt::event::MouseEvent *);
private:
  static const jlong serialVersionUID = -8796518220218978795LL;
public:
  static ::java::lang::String *DEFAULT_KEYMAP;
  static ::java::lang::String *FOCUS_ACCELERATOR_KEY;
private:
  static ::javax::swing::text::JTextComponent$DefaultTransferHandler *defaultTransferHandler;
  static ::java::util::Hashtable *keymaps;
  ::javax::swing::text::Keymap * __attribute__((aligned(__alignof__( ::javax::swing::JComponent )))) keymap;
  jchar focusAccelerator;
  ::javax::swing::text::NavigationFilter *navigationFilter;
public: // actually package-private
  ::javax::swing::text::Document *doc;
  ::javax::swing::text::Caret *caret;
  jboolean editable;
private:
  ::javax::swing::text::Highlighter *highlighter;
  ::java::awt::Color *caretColor;
  ::java::awt::Color *disabledTextColor;
  ::java::awt::Color *selectedTextColor;
  ::java::awt::Color *selectionColor;
  ::java::awt::Insets *margin;
  jboolean dragEnabled;

  friend class javax_swing_text_JTextComponent$DefaultTransferHandler;
  friend class javax_swing_text_JTextComponent$DefaultKeymap;
  friend class javax_swing_text_JTextComponent$KeymapActionMap;
  friend class javax_swing_text_JTextComponent$KeymapWrapper;
  friend class javax_swing_text_JTextComponent$KeyBinding;
  friend class javax_swing_text_JTextComponent$AccessibleJTextComponent;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_JTextComponent__ */