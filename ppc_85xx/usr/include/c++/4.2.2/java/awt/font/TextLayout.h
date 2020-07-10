// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_font_TextLayout__
#define __java_awt_font_TextLayout__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class AttributedCharacterIterator;
    }
    namespace awt
    {
      class Shape;
      class Graphics2D;
      namespace geom
      {
        class AffineTransform;
        class Rectangle2D;
      }
      class Font;
      namespace font
      {
        class TextHitInfo;
        class TextLayout;
        class TextLayout$CaretPolicy;
        class LineMetrics;
        class FontRenderContext;
        class GlyphVector;
      }
    }
  }
}

class java::awt::font::TextLayout : public ::java::lang::Object
{
public:
  TextLayout (::java::lang::String *, ::java::awt::Font *, ::java::awt::font::FontRenderContext *);
  TextLayout (::java::lang::String *, ::java::util::Map *, ::java::awt::font::FontRenderContext *);
  TextLayout (::java::text::AttributedCharacterIterator *, ::java::awt::font::FontRenderContext *);
public: // actually package-private
  TextLayout (::java::awt::font::TextLayout *, jint, jint);
private:
  void setCharIndices ();
  static ::java::lang::String *getText (::java::text::AttributedCharacterIterator *);
  static ::java::awt::Font *getFont (::java::text::AttributedCharacterIterator *);
  void getStringProperties ();
  void determineWhiteSpace ();
public:  // actually protected
  virtual ::java::lang::Object *clone ();
public:
  virtual void draw (::java::awt::Graphics2D *, jfloat, jfloat);
  virtual jboolean equals (::java::lang::Object *);
  virtual jboolean equals (::java::awt::font::TextLayout *);
  virtual jfloat getAdvance ();
  virtual jfloat getAscent ();
  virtual jbyte getBaseline ();
  virtual jfloatArray getBaselineOffsets ();
  virtual ::java::awt::Shape *getBlackBoxBounds (jint, jint);
  virtual ::java::awt::geom::Rectangle2D *getBounds ();
  virtual jfloatArray getCaretInfo (::java::awt::font::TextHitInfo *);
  virtual jfloatArray getCaretInfo (::java::awt::font::TextHitInfo *, ::java::awt::geom::Rectangle2D *);
  virtual ::java::awt::Shape *getCaretShape (::java::awt::font::TextHitInfo *);
  virtual ::java::awt::Shape *getCaretShape (::java::awt::font::TextHitInfo *, ::java::awt::geom::Rectangle2D *);
  virtual JArray< ::java::awt::Shape *> *getCaretShapes (jint);
  virtual JArray< ::java::awt::Shape *> *getCaretShapes (jint, ::java::awt::geom::Rectangle2D *);
  virtual jint getCharacterCount ();
  virtual jbyte getCharacterLevel (jint);
  virtual jfloat getDescent ();
  virtual ::java::awt::font::TextLayout *getJustifiedLayout (jfloat);
  virtual jfloat getLeading ();
  virtual ::java::awt::Shape *getLogicalHighlightShape (jint, jint);
  virtual ::java::awt::Shape *getLogicalHighlightShape (jint, jint, ::java::awt::geom::Rectangle2D *);
  virtual jintArray getLogicalRangesForVisualSelection (::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *);
  virtual ::java::awt::font::TextHitInfo *getNextLeftHit (jint);
  virtual ::java::awt::font::TextHitInfo *getNextLeftHit (::java::awt::font::TextHitInfo *);
  virtual ::java::awt::font::TextHitInfo *getNextRightHit (jint);
  virtual ::java::awt::font::TextHitInfo *getNextRightHit (::java::awt::font::TextHitInfo *);
  virtual ::java::awt::Shape *getOutline (::java::awt::geom::AffineTransform *);
  virtual jfloat getVisibleAdvance ();
  virtual ::java::awt::Shape *getVisualHighlightShape (::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *);
  virtual ::java::awt::Shape *getVisualHighlightShape (::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *, ::java::awt::geom::Rectangle2D *);
  virtual ::java::awt::font::TextHitInfo *getVisualOtherHit (::java::awt::font::TextHitInfo *);
public:  // actually protected
  virtual void handleJustify (jfloat);
public:
  virtual ::java::awt::font::TextHitInfo *hitTestChar (jfloat, jfloat);
  virtual ::java::awt::font::TextHitInfo *hitTestChar (jfloat, jfloat, ::java::awt::geom::Rectangle2D *);
  virtual jboolean isLeftToRight () { return leftToRight; }
  virtual jboolean isVertical ();
  virtual jint hashCode ();
  virtual ::java::lang::String *toString ();
private:
  JArray< ::java::awt::font::GlyphVector *> * __attribute__((aligned(__alignof__( ::java::lang::Object )))) runs;
  ::java::awt::Font *font;
  ::java::awt::font::FontRenderContext *frc;
  ::java::lang::String *string;
  ::java::awt::geom::Rectangle2D *boundsCache;
  ::java::awt::font::LineMetrics *lm;
  JArray<jintArray> * runIndices;
  JArray<jintArray> * charIndices;
  jboolean leftToRight;
  jboolean hasWhitespace;
public:
  static ::java::awt::font::TextLayout$CaretPolicy *DEFAULT_CARET_POLICY;

  friend class java_awt_font_TextLayout$CaretPolicy;

  static ::java::lang::Class class$;
};

#endif /* __java_awt_font_TextLayout__ */