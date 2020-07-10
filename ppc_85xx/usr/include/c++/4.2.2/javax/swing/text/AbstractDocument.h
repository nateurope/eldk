// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_AbstractDocument__
#define __javax_swing_text_AbstractDocument__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class UndoableEditListener;
        class DocumentListener;
        class UndoableEditEvent;
        class DocumentEvent;
        class EventListenerList;
      }
      namespace text
      {
        class AbstractDocument;
        class AbstractDocument$DefaultDocumentEvent;
        class Segment;
        class Position;
        class AttributeSet;
        class Element;
        class DocumentFilter$FilterBypass;
        class DocumentFilter;
        class AbstractDocument$AttributeContext;
        class AbstractDocument$Content;
      }
    }
  }
}

class javax::swing::text::AbstractDocument : public ::java::lang::Object
{
public:  // actually protected
  AbstractDocument (::javax::swing::text::AbstractDocument$Content *);
  AbstractDocument (::javax::swing::text::AbstractDocument$Content *, ::javax::swing::text::AbstractDocument$AttributeContext *);
private:
  ::javax::swing::text::DocumentFilter$FilterBypass *getBypass ();
public:
  virtual ::javax::swing::text::Element *getParagraphElement (jint) = 0;
  virtual ::javax::swing::text::Element *getDefaultRootElement () = 0;
public:  // actually protected
  virtual ::javax::swing::text::Element *createBranchElement (::javax::swing::text::Element *, ::javax::swing::text::AttributeSet *);
  virtual ::javax::swing::text::Element *createLeafElement (::javax::swing::text::Element *, ::javax::swing::text::AttributeSet *, jint, jint);
public:
  virtual ::javax::swing::text::Position *createPosition (jint);
public:  // actually protected
  virtual void fireChangedUpdate (::javax::swing::event::DocumentEvent *);
  virtual void fireInsertUpdate (::javax::swing::event::DocumentEvent *);
  virtual void fireRemoveUpdate (::javax::swing::event::DocumentEvent *);
  virtual void fireUndoableEditUpdate (::javax::swing::event::UndoableEditEvent *);
public:
  virtual jint getAsynchronousLoadPriority ();
public:  // actually protected
  virtual ::javax::swing::text::AbstractDocument$AttributeContext *getAttributeContext () { return context; }
public:
  virtual ::javax::swing::text::Element *getBidiRootElement () { return bidiRoot; }
public:  // actually protected
  virtual ::javax::swing::text::AbstractDocument$Content *getContent () { return content; }
  virtual ::java::lang::Thread *getCurrentWriter () { return currentWriter; }
public:
  virtual ::java::util::Dictionary *getDocumentProperties ();
  virtual ::javax::swing::text::Position *getEndPosition ();
  virtual jint getLength ();
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
  virtual ::java::lang::Object *getProperty (::java::lang::Object *);
  virtual JArray< ::javax::swing::text::Element *> *getRootElements ();
  virtual ::javax::swing::text::Position *getStartPosition ();
  virtual ::java::lang::String *getText (jint, jint);
  virtual void getText (jint, jint, ::javax::swing::text::Segment *);
  virtual void insertString (jint, ::java::lang::String *, ::javax::swing::text::AttributeSet *);
public: // actually package-private
  virtual void insertStringImpl (jint, ::java::lang::String *, ::javax::swing::text::AttributeSet *);
public:  // actually protected
  virtual void insertUpdate (::javax::swing::text::AbstractDocument$DefaultDocumentEvent *, ::javax::swing::text::AttributeSet *) { }
  virtual void postRemoveUpdate (::javax::swing::text::AbstractDocument$DefaultDocumentEvent *) { }
public:
  virtual void putProperty (::java::lang::Object *, ::java::lang::Object *);
  virtual void readLock ();
  virtual void readUnlock ();
  virtual void remove (jint, jint);
public: // actually package-private
  virtual void removeImpl (jint, jint);
public:
  virtual void replace (jint, jint, ::java::lang::String *, ::javax::swing::text::AttributeSet *);
public: // actually package-private
  virtual void replaceImpl (jint, jint, ::java::lang::String *, ::javax::swing::text::AttributeSet *);
public:
  virtual void addDocumentListener (::javax::swing::event::DocumentListener *);
  virtual void removeDocumentListener (::javax::swing::event::DocumentListener *);
  virtual JArray< ::javax::swing::event::DocumentListener *> *getDocumentListeners ();
  virtual void addUndoableEditListener (::javax::swing::event::UndoableEditListener *);
  virtual void removeUndoableEditListener (::javax::swing::event::UndoableEditListener *);
  virtual JArray< ::javax::swing::event::UndoableEditListener *> *getUndoableEditListeners ();
public:  // actually protected
  virtual void removeUpdate (::javax::swing::text::AbstractDocument$DefaultDocumentEvent *) { }
public:
  virtual void render (::java::lang::Runnable *);
  virtual void setAsynchronousLoadPriority (jint) { }
  virtual void setDocumentProperties (::java::util::Dictionary *);
public:  // actually protected
  virtual void writeLock ();
  virtual void writeUnlock ();
public:
  virtual ::javax::swing::text::DocumentFilter *getDocumentFilter () { return documentFilter; }
  virtual void setDocumentFilter (::javax::swing::text::DocumentFilter *);
  virtual void dump (::java::io::PrintStream *);
private:
  static const jlong serialVersionUID = 6842927725919637215LL;
public:  // actually protected
  static ::java::lang::String *BAD_LOCATION;
public:
  static ::java::lang::String *BidiElementName;
  static ::java::lang::String *ContentElementName;
  static ::java::lang::String *ParagraphElementName;
  static ::java::lang::String *SectionElementName;
  static ::java::lang::String *ElementNameAttribute;
public: // actually package-private
  ::javax::swing::text::AbstractDocument$Content * __attribute__((aligned(__alignof__( ::java::lang::Object )))) content;
  ::javax::swing::text::AbstractDocument$AttributeContext *context;
  ::javax::swing::text::DocumentFilter *documentFilter;
  ::java::util::Dictionary *properties;
public:  // actually protected
  ::javax::swing::event::EventListenerList *listenerList;
private:
  ::java::lang::Thread *currentWriter;
  jint numReaders;
  jint numWritersWaiting;
  ::java::lang::Object *documentCV;
  ::javax::swing::text::DocumentFilter$FilterBypass *bypass;
  ::javax::swing::text::Element *bidiRoot;

  friend class javax_swing_text_AbstractDocument$Bypass;
  friend class javax_swing_text_AbstractDocument$LeafElement;
  friend class javax_swing_text_AbstractDocument$ElementEdit;
  friend class javax_swing_text_AbstractDocument$DefaultDocumentEvent;
  friend class javax_swing_text_AbstractDocument$BranchElement;
  friend class javax_swing_text_AbstractDocument$AbstractElement;
  friend class javax_swing_text_AbstractDocument$Content;
  friend class javax_swing_text_AbstractDocument$AttributeContext;
  friend class javax_swing_text_AbstractDocument$2;
  friend class javax_swing_text_AbstractDocument$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_AbstractDocument__ */
