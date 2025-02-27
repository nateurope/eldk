// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_AbstractWriter__
#define __javax_swing_text_AbstractWriter__

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
        class AbstractWriter;
        class AttributeSet;
        class Element;
        class Document;
        class ElementIterator;
      }
    }
  }
}

class javax::swing::text::AbstractWriter : public ::java::lang::Object
{
public:  // actually protected
  AbstractWriter (::java::io::Writer *, ::javax::swing::text::Document *);
  AbstractWriter (::java::io::Writer *, ::javax::swing::text::Document *, jint, jint);
  AbstractWriter (::java::io::Writer *, ::javax::swing::text::Element *);
  AbstractWriter (::java::io::Writer *, ::javax::swing::text::Element *, jint, jint);
  virtual ::javax::swing::text::ElementIterator *getElementIterator () { return iter; }
  virtual ::java::io::Writer *getWriter () { return writer; }
  virtual ::javax::swing::text::Document *getDocument () { return document; }
  virtual void write () = 0;
  virtual ::java::lang::String *getText (::javax::swing::text::Element *);
  virtual void output (jcharArray, jint, jint);
  virtual void writeLineSeparator ();
  virtual void write (jchar);
  virtual void write (::java::lang::String *);
  virtual void write (jcharArray, jint, jint);
  virtual void indent ();
public:
  virtual jint getStartOffset () { return startOffset; }
  virtual jint getEndOffset () { return endOffset; }
public:  // actually protected
  virtual jboolean inRange (::javax::swing::text::Element *);
  virtual void text (::javax::swing::text::Element *);
  virtual void setLineLength (jint);
  virtual jint getLineLength () { return maxLineLength; }
  virtual void setCurrentLineLength (jint);
  virtual jint getCurrentLineLength () { return lineLength; }
  virtual jboolean isLineEmpty ();
  virtual void setCanWrapLines (jboolean);
  virtual jboolean getCanWrapLines () { return canWrapLines; }
  virtual void setIndentSpace (jint);
  virtual jint getIndentSpace () { return indentSpace; }
public:
  virtual void setLineSeparator (::java::lang::String *);
  virtual ::java::lang::String *getLineSeparator () { return lineSeparator; }
public:  // actually protected
  virtual void incrIndent ();
  virtual void decrIndent ();
  virtual jint getIndentLevel () { return indentLevel; }
  virtual void writeAttributes (::javax::swing::text::AttributeSet *);
  static const jint NEWLINE = 10L;
private:
  ::java::io::Writer * __attribute__((aligned(__alignof__( ::java::lang::Object )))) writer;
  ::javax::swing::text::ElementIterator *iter;
  ::javax::swing::text::Document *document;
  jint maxLineLength;
  jint lineLength;
  jboolean canWrapLines;
  jint indentSpace;
  jint indentLevel;
  jboolean indented;
  jint startOffset;
  jint endOffset;
  ::java::lang::String *lineSeparator;
  jcharArray lineSeparatorChars;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_AbstractWriter__ */
