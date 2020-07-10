// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_PasswordView__
#define __javax_swing_text_PasswordView__

#pragma interface

#include <javax/swing/text/FieldView.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Shape;
      class Graphics;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class PasswordView;
        class Position$Bias;
        class Element;
      }
    }
  }
}

class javax::swing::text::PasswordView : public ::javax::swing::text::FieldView
{
public:
  PasswordView (::javax::swing::text::Element *);
public:  // actually protected
  virtual jint drawEchoCharacter (::java::awt::Graphics *, jint, jint, jchar);
private:
  jchar getEchoChar ();
public:  // actually protected
  virtual jint drawSelectedText (::java::awt::Graphics *, jint, jint, jint, jint);
  virtual jint drawUnselectedText (::java::awt::Graphics *, jint, jint, jint, jint);
public:
  virtual jfloat getPreferredSpan (jint);
  virtual ::java::awt::Shape *modelToView (jint, ::java::awt::Shape *, ::javax::swing::text::Position$Bias *);
  virtual jint viewToModel (jfloat, jfloat, ::java::awt::Shape *, JArray< ::javax::swing::text::Position$Bias *> *);
private:
  jcharArray __attribute__((aligned(__alignof__( ::javax::swing::text::FieldView ))))  oneCharBuffer;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_PasswordView__ */
