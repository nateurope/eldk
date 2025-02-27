// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_Constructor__
#define __java_lang_reflect_Constructor__

#pragma interface

#include <java/lang/reflect/AccessibleObject.h>
#include <gcj/array.h>

jmethodID _Jv_FromReflectedConstructor (java::lang::reflect::Constructor *);
jobject _Jv_JNI_ToReflectedMethod (_Jv_JNIEnv *, jclass, jmethodID, jboolean);

class java::lang::reflect::Constructor : public ::java::lang::reflect::AccessibleObject
{
private:
  Constructor ();
public:
  virtual ::java::lang::Class *getDeclaringClass () { return declaringClass; }
  virtual ::java::lang::String *getName ();
private:
  jint getModifiersInternal ();
public:
  virtual jint getModifiers ();
  virtual jboolean isSynthetic ();
  virtual jboolean isVarArgs ();
  virtual JArray< ::java::lang::Class *> *getParameterTypes ();
  virtual JArray< ::java::lang::Class *> *getExceptionTypes ();
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual ::java::lang::String *toString ();
public: // actually package-private
  static void addTypeParameters (::java::lang::StringBuilder *, JArray< ::java::lang::reflect::TypeVariable *> *);
public:
  virtual ::java::lang::String *toGenericString ();
  virtual ::java::lang::Object *newInstance (JArray< ::java::lang::Object *> *);
  virtual JArray< ::java::lang::reflect::TypeVariable *> *getTypeParameters ();
private:
  ::java::lang::String *getSignature () { return 0; }
public:
  virtual JArray< ::java::lang::reflect::Type *> *getGenericExceptionTypes ();
  virtual JArray< ::java::lang::reflect::Type *> *getGenericParameterTypes ();
private:
  void getType ();
  static const jint CONSTRUCTOR_MODIFIERS = 7L;
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::lang::reflect::AccessibleObject )))) declaringClass;
  JArray< ::java::lang::Class *> *exception_types;
  JArray< ::java::lang::Class *> *parameter_types;
  jint offset;
  friend jmethodID (::_Jv_FromReflectedConstructor) (java::lang::reflect::Constructor *);
  friend jobject (::_Jv_JNI_ToReflectedMethod) (_Jv_JNIEnv *, jclass, jmethodID, jboolean);
  friend class java::lang::Class;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_reflect_Constructor__ */
