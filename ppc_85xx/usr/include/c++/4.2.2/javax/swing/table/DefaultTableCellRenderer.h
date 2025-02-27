// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_table_DefaultTableCellRenderer__
#define __javax_swing_table_DefaultTableCellRenderer__

#pragma interface

#include <javax/swing/JLabel.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Component;
      class Color;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace table
      {
        class DefaultTableCellRenderer;
      }
      class JTable;
      namespace border
      {
        class Border;
      }
    }
  }
}

class javax::swing::table::DefaultTableCellRenderer : public ::javax::swing::JLabel
{
public:
  DefaultTableCellRenderer ();
  virtual void setForeground (::java::awt::Color *);
  virtual void setBackground (::java::awt::Color *);
  virtual void updateUI ();
  virtual ::java::awt::Component *getTableCellRendererComponent (::javax::swing::JTable *, ::java::lang::Object *, jboolean, jboolean, jint, jint);
  virtual jboolean isOpaque ();
  virtual void validate () { }
  virtual void revalidate () { }
  virtual void repaint (jlong, jint, jint, jint, jint) { }
  virtual void repaint (::java::awt::Rectangle *) { }
public:  // actually protected
  virtual void firePropertyChange (::java::lang::String *, ::java::lang::Object *, ::java::lang::Object *) { }
public:
  virtual void firePropertyChange (::java::lang::String *, jboolean, jboolean) { }
public:  // actually protected
  virtual void setValue (::java::lang::Object *);
public: // actually package-private
  static const jlong serialVersionUID = 7878911414715528324LL;
public:  // actually protected
  static ::javax::swing::border::Border *noFocusBorder;
public: // actually package-private
  ::java::awt::Color * __attribute__((aligned(__alignof__( ::javax::swing::JLabel )))) foreground;
  ::java::awt::Color *background;

  friend class javax_swing_table_DefaultTableCellRenderer$UIResource;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_table_DefaultTableCellRenderer__ */
