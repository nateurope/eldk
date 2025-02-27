// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_DataInputStream__
#define __java_io_DataInputStream__

#pragma interface

#include <java/io/FilterInputStream.h>
#include <gcj/array.h>

class java::io::DataInputStream : public ::java::io::FilterInputStream
{
public:
  DataInputStream (::java::io::InputStream *);
  virtual jint read (jbyteArray);
  virtual jint read (jbyteArray, jint, jint);
  virtual jboolean readBoolean ();
  virtual jbyte readByte ();
  virtual jchar readChar ();
  virtual jdouble readDouble ();
  virtual jfloat readFloat ();
  virtual void readFully (jbyteArray);
  virtual void readFully (jbyteArray, jint, jint);
  virtual jint readInt ();
  virtual ::java::lang::String *readLine ();
  virtual jlong readLong ();
  virtual jshort readShort ();
  virtual jint readUnsignedByte ();
  virtual jint readUnsignedShort ();
  virtual ::java::lang::String *readUTF ();
  static ::java::lang::String *readUTF (::java::io::DataInput *);
  virtual jint skipBytes (jint);
public: // actually package-private
  static jboolean convertToBoolean (jint);
  static jbyte convertToByte (jint);
  static jint convertToUnsignedByte (jint);
  static jchar convertToChar (jbyteArray);
  static jshort convertToShort (jbyteArray);
  static jint convertToUnsignedShort (jbyteArray);
  static jint convertToInt (jbyteArray);
  static jlong convertToLong (jbyteArray);
  static ::java::lang::String *convertFromUTF (jbyteArray);
  jbyteArray __attribute__((aligned(__alignof__( ::java::io::FilterInputStream ))))  buf;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_DataInputStream__ */
