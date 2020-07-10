// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_Method__
#define __java_lang_reflect_Method__

#pragma interface

#include <java/lang/reflect/AccessibleObject.h>
#include <gcj/array.h>

jmethodID _Jv_FromReflectedMethod (java::lang::reflect::Method *);
jobject _Jv_JNI_ToReflectedMethod (_Jv_JNIEnv *, jclass, jmethodID, jboolean);

class java::lang::reflect::Method : public ::java::lang::reflect::AccessibleObject
{
private:
  Method ();
public:
  virtual ::java::lang::Class *getDeclaringClass () { return declaringClass; }
  virtual ::java::lang::String *getName ();
private:
  jint getModifiersInternal ();
public:
  virtual jint getModifiers ();
  virtual jboolean isBridge ();
  virtual jboolean isSynthetic ();
  virtual jboolean isVarArgs ();
  virtual ::java::lang::Class *getReturnType ();
  virtual JArray< ::java::lang::Class *> *getParameterTypes ();
  virtual JArray< ::java::lang::Class *> *getExceptionTypes ();
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual ::java::lang::String *toString ();
  virtual ::java::lang::String *toGenericString ();
  virtual ::java::lang::Object *invoke (::java::lang::Object *, JArray< ::java::lang::Object *> *);
  virtual JArray< ::java::lang::reflect::TypeVariable *> *getTypeParameters ();
private:
  ::java::lang::String *getSignature () { return 0; }
public:
  virtual JArray< ::java::lang::reflect::Type *> *getGenericExceptionTypes ();
  virtual JArray< ::java::lang::reflect::Type *> *getGenericParameterTypes ();
  virtual ::java::lang::reflect::Type *getGenericReturnType ();
private:
  void getType ();
public: // actually package-private
  static void appendClassName (::java::lang::StringBuffer *, ::java::lang::Class *);
private:
  static const jint METHOD_MODIFIERS = 3391L;
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::lang::reflect::AccessibleObject )))) declaringClass;
  JArray< ::java::lang::Class *> *exception_types;
  ::java::lang::String *name;
  JArray< ::java::lang::Class *> *parameter_types;
  ::java::lang::Class *return_type;
  jint offset;
  friend jmethodID (::_Jv_FromReflectedMethod) (java::lang::reflect::Method *);
  friend jobject (::_Jv_JNI_ToReflectedMethod) (_Jv_JNIEnv *, jclass, jmethodID, jboolean);
  friend class java::lang::Class;
  friend class java::io::ObjectInputStream;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_reflect_Method__ */
