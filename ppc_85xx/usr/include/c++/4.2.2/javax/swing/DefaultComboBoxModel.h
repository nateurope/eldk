// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_DefaultComboBoxModel__
#define __javax_swing_DefaultComboBoxModel__

#pragma interface

#include <javax/swing/AbstractListModel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class DefaultComboBoxModel;
    }
  }
}

class javax::swing::DefaultComboBoxModel : public ::javax::swing::AbstractListModel
{
public:
  DefaultComboBoxModel ();
  DefaultComboBoxModel (JArray< ::java::lang::Object *> *);
  DefaultComboBoxModel (::java::util::Vector *);
  virtual void addElement (::java::lang::Object *);
  virtual void removeElementAt (jint);
  virtual void insertElementAt (::java::lang::Object *, jint);
  virtual void removeElement (::java::lang::Object *);
  virtual void removeAllElements ();
  virtual jint getSize ();
  virtual void setSelectedItem (::java::lang::Object *);
  virtual ::java::lang::Object *getSelectedItem () { return selectedItem; }
  virtual ::java::lang::Object *getElementAt (jint);
  virtual jint getIndexOf (::java::lang::Object *);
private:
  static const jlong serialVersionUID = 6698657703676921904LL;
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::javax::swing::AbstractListModel )))) list;
  ::java::lang::Object *selectedItem;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_DefaultComboBoxModel__ */
