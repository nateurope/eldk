// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Canvas__
#define __java_awt_Canvas__

#pragma interface

#include <java/awt/Component.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
  }
  namespace java
  {
    namespace awt
    {
      class Canvas;
      class BufferCapabilities;
      class Graphics;
      namespace image
      {
        class BufferStrategy;
      }
      class GraphicsConfiguration;
    }
  }
}

class java::awt::Canvas : public ::java::awt::Component
{
public:
  Canvas ();
  Canvas (::java::awt::GraphicsConfiguration *);
public: // actually package-private
  virtual ::java::awt::GraphicsConfiguration *getGraphicsConfigurationImpl ();
public:
  virtual void addNotify ();
  virtual void paint (::java::awt::Graphics *);
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
  virtual void createBufferStrategy (jint);
  virtual void createBufferStrategy (jint, ::java::awt::BufferCapabilities *);
  virtual ::java::awt::image::BufferStrategy *getBufferStrategy () { return bufferStrategy; }
  virtual void update (::java::awt::Graphics *);
public: // actually package-private
  virtual ::java::lang::String *generateName ();
private:
  static jlong getUniqueLong ();
  static const jlong serialVersionUID = -2284879212465893870LL;
  static jlong next_canvas_number;
public: // actually package-private
  ::java::awt::GraphicsConfiguration * __attribute__((aligned(__alignof__( ::java::awt::Component )))) graphicsConfiguration;
  ::java::awt::image::BufferStrategy *bufferStrategy;

  friend class java_awt_Canvas$CanvasFlipBufferStrategy;
  friend class java_awt_Canvas$CanvasBltBufferStrategy;
  friend class java_awt_Canvas$AccessibleAWTCanvas;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_Canvas__ */
