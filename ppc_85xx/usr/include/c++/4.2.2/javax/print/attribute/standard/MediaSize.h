// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_MediaSize__
#define __javax_print_attribute_standard_MediaSize__

#pragma interface

#include <javax/print/attribute/Size2DSyntax.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        namespace standard
        {
          class MediaSize;
          class MediaSizeName;
        }
      }
    }
  }
}

class javax::print::attribute::standard::MediaSize : public ::javax::print::attribute::Size2DSyntax
{
public:
  MediaSize (jfloat, jfloat, jint);
  MediaSize (jfloat, jfloat, jint, ::javax::print::attribute::standard::MediaSizeName *);
  MediaSize (jint, jint, jint);
  MediaSize (jint, jint, jint, ::javax::print::attribute::standard::MediaSizeName *);
  virtual ::java::lang::Class *getCategory ();
  static ::javax::print::attribute::standard::MediaSizeName *findMedia (jfloat, jfloat, jint);
  static ::javax::print::attribute::standard::MediaSize *getMediaSizeForName (::javax::print::attribute::standard::MediaSizeName *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::javax::print::attribute::standard::MediaSizeName *getMediaSizeName () { return mediaName; }
  virtual ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = -1967958664615414771LL;
  static ::java::util::ArrayList *mediaCache;
  ::javax::print::attribute::standard::MediaSizeName * __attribute__((aligned(__alignof__( ::javax::print::attribute::Size2DSyntax )))) mediaName;

  friend class javax_print_attribute_standard_MediaSize$Other;
  friend class javax_print_attribute_standard_MediaSize$JIS;
  friend class javax_print_attribute_standard_MediaSize$Engineering;
  friend class javax_print_attribute_standard_MediaSize$NA;
  friend class javax_print_attribute_standard_MediaSize$ISO;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_MediaSize__ */
