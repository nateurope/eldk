// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_zip_GZIPOutputStream__
#define __java_util_zip_GZIPOutputStream__

#pragma interface

#include <java/util/zip/DeflaterOutputStream.h>
#include <gcj/array.h>

class java::util::zip::GZIPOutputStream : public ::java::util::zip::DeflaterOutputStream
{
public:
  GZIPOutputStream (::java::io::OutputStream *);
  GZIPOutputStream (::java::io::OutputStream *, jint);
  virtual void write (jbyteArray, jint, jint);
  virtual void close ();
  virtual void finish ();
public:  // actually protected
  ::java::util::zip::CRC32 * __attribute__((aligned(__alignof__( ::java::util::zip::DeflaterOutputStream )))) crc;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_zip_GZIPOutputStream__ */
