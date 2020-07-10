// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_StringBuilder__
#define __java_lang_StringBuilder__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::StringBuilder : public ::java::lang::Object
{
public:
  StringBuilder ();
  StringBuilder (jint);
  StringBuilder (::java::lang::String *);
  StringBuilder (::java::lang::CharSequence *);
  virtual jint length () { return count; }
  virtual jint capacity ();
  virtual void ensureCapacity (jint);
  virtual void setLength (jint);
  virtual jchar charAt (jint);
  virtual void getChars (jint, jint, jcharArray, jint);
  virtual void setCharAt (jint, jchar);
  virtual ::java::lang::StringBuilder *append (::java::lang::Object *);
  virtual ::java::lang::StringBuilder *append (::java::lang::String *);
  virtual ::java::lang::StringBuilder *append (::java::lang::StringBuffer *);
  virtual ::java::lang::StringBuilder *append (jcharArray);
  virtual ::java::lang::StringBuilder *append (jcharArray, jint, jint);
  virtual ::java::lang::StringBuilder *append (jboolean);
  virtual ::java::lang::StringBuilder *append (jchar);
  virtual ::java::lang::StringBuilder *append (::java::lang::CharSequence *);
  virtual ::java::lang::StringBuilder *append (::java::lang::CharSequence *, jint, jint);
  virtual ::java::lang::StringBuilder *appendCodePoint (jint);
  virtual ::java::lang::StringBuilder *append (jint);
  virtual ::java::lang::StringBuilder *append (jlong);
  virtual ::java::lang::StringBuilder *append (jfloat);
  virtual ::java::lang::StringBuilder *append (jdouble);
  virtual ::java::lang::StringBuilder *delete$ (jint, jint);
  virtual ::java::lang::StringBuilder *deleteCharAt (jint);
  virtual ::java::lang::StringBuilder *replace (jint, jint, ::java::lang::String *);
  virtual ::java::lang::String *substring (jint);
  virtual ::java::lang::CharSequence *subSequence (jint, jint);
  virtual ::java::lang::String *substring (jint, jint);
  virtual ::java::lang::StringBuilder *insert (jint, jcharArray, jint, jint);
  virtual ::java::lang::StringBuilder *insert (jint, ::java::lang::Object *);
  virtual ::java::lang::StringBuilder *insert (jint, ::java::lang::String *);
  virtual ::java::lang::StringBuilder *insert (jint, ::java::lang::CharSequence *);
  virtual ::java::lang::StringBuilder *insert (jint, ::java::lang::CharSequence *, jint, jint);
  virtual ::java::lang::StringBuilder *insert (jint, jcharArray);
  virtual ::java::lang::StringBuilder *insert (jint, jboolean);
  virtual ::java::lang::StringBuilder *insert (jint, jchar);
  virtual ::java::lang::StringBuilder *insert (jint, jint);
  virtual ::java::lang::StringBuilder *insert (jint, jlong);
  virtual ::java::lang::StringBuilder *insert (jint, jfloat);
  virtual ::java::lang::StringBuilder *insert (jint, jdouble);
  virtual jint indexOf (::java::lang::String *);
  virtual jint indexOf (::java::lang::String *, jint);
  virtual jint lastIndexOf (::java::lang::String *);
  virtual jint lastIndexOf (::java::lang::String *, jint);
  virtual ::java::lang::StringBuilder *reverse ();
  virtual ::java::lang::String *toString ();
private:
  jboolean regionMatches (jint, ::java::lang::String *);
  static const jlong serialVersionUID = 4383685877147921099LL;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  count;
  jcharArray value;
private:
  static const jint DEFAULT_CAPACITY = 16L;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_StringBuilder__ */