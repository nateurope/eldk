// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_Document__
#define __javax_swing_text_Document__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class Document;
        class AttributeSet;
        class Segment;
        class Element;
        class Position;
      }
      namespace event
      {
        class UndoableEditListener;
        class DocumentListener;
      }
    }
  }
}

class javax::swing::text::Document : public ::java::lang::Object
{
public:
  virtual void addDocumentListener (::javax::swing::event::DocumentListener *) = 0;
  virtual void addUndoableEditListener (::javax::swing::event::UndoableEditListener *) = 0;
  virtual ::javax::swing::text::Position *createPosition (jint) = 0;
  virtual ::javax::swing::text::Element *getDefaultRootElement () = 0;
  virtual ::javax::swing::text::Position *getEndPosition () = 0;
  virtual jint getLength () = 0;
  virtual ::java::lang::Object *getProperty (::java::lang::Object *) = 0;
  virtual JArray< ::javax::swing::text::Element *> *getRootElements () = 0;
  virtual ::javax::swing::text::Position *getStartPosition () = 0;
  virtual ::java::lang::String *getText (jint, jint) = 0;
  virtual void getText (jint, jint, ::javax::swing::text::Segment *) = 0;
  virtual void insertString (jint, ::java::lang::String *, ::javax::swing::text::AttributeSet *) = 0;
  virtual void putProperty (::java::lang::Object *, ::java::lang::Object *) = 0;
  virtual void remove (jint, jint) = 0;
  virtual void removeDocumentListener (::javax::swing::event::DocumentListener *) = 0;
  virtual void removeUndoableEditListener (::javax::swing::event::UndoableEditListener *) = 0;
  virtual void render (::java::lang::Runnable *) = 0;
  static ::java::lang::String *StreamDescriptionProperty;
  static ::java::lang::String *TitleProperty;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_text_Document__ */
