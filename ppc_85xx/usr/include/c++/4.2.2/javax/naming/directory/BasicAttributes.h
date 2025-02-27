// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_directory_BasicAttributes__
#define __javax_naming_directory_BasicAttributes__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      class NamingEnumeration;
      namespace directory
      {
        class BasicAttributes;
        class Attribute;
      }
    }
  }
}

class javax::naming::directory::BasicAttributes : public ::java::lang::Object
{
public:
  BasicAttributes ();
  BasicAttributes (jboolean);
  BasicAttributes (::java::lang::String *, ::java::lang::Object *);
  BasicAttributes (::java::lang::String *, ::java::lang::Object *, jboolean);
  virtual ::java::lang::Object *clone ();
  virtual jboolean equals (::java::lang::Object *);
  virtual ::javax::naming::directory::Attribute *get (::java::lang::String *);
  virtual ::javax::naming::NamingEnumeration *getAll ();
  virtual ::javax::naming::NamingEnumeration *getIDs ();
  virtual jint hashCode ();
  virtual jboolean isCaseIgnored () { return ignoreCase; }
  virtual ::javax::naming::directory::Attribute *put (::javax::naming::directory::Attribute *);
  virtual ::javax::naming::directory::Attribute *put (::java::lang::String *, ::java::lang::Object *);
  virtual ::javax::naming::directory::Attribute *remove (::java::lang::String *);
  virtual jint size ();
  virtual ::java::lang::String *toString ();
private:
  void readObject (::java::io::ObjectInputStream *);
  void writeObject (::java::io::ObjectOutputStream *);
  static const jlong serialVersionUID = 4980164073184639448LL;
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object ))))  ignoreCase;
public: // actually package-private
  ::java::util::Vector *attributes;

  friend class javax_naming_directory_BasicAttributes$BasicAttributesEnumeration;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_naming_directory_BasicAttributes__ */
