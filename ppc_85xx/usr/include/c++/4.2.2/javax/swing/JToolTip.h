// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JToolTip__
#define __javax_swing_JToolTip__

#pragma interface

#include <javax/swing/JComponent.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
    namespace swing
    {
      class JToolTip;
      namespace plaf
      {
        class ToolTipUI;
      }
      class JComponent;
    }
  }
}

class javax::swing::JToolTip : public ::javax::swing::JComponent
{
public:
  JToolTip ();
  virtual ::java::lang::String *getTipText () { return text; }
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
  virtual ::javax::swing::JComponent *getComponent () { return component; }
  virtual ::javax::swing::plaf::ToolTipUI *getUI ();
  virtual ::java::lang::String *getUIClassID ();
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public:
  virtual void setComponent (::javax::swing::JComponent *);
  virtual void setTipText (::java::lang::String *);
  virtual void updateUI ();
private:
  static const jlong serialVersionUID = -1138929898906751643LL;
public: // actually package-private
  ::java::lang::String * __attribute__((aligned(__alignof__( ::javax::swing::JComponent )))) text;
  ::javax::swing::JComponent *component;

  friend class javax_swing_JToolTip$AccessibleJToolTip;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JToolTip__ */
