// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URI__
#define __java_net_URI__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URL;
      class URI;
    }
  }
}

class java::net::URI : public ::java::lang::Object
{
private:
  void readObject (::java::io::ObjectInputStream *);
  void writeObject (::java::io::ObjectOutputStream *);
  static ::java::lang::String *getURIGroup (::java::util::regex::Matcher *, jint);
  void parseURI (::java::lang::String *);
  static ::java::lang::String *unquote (::java::lang::String *);
  static ::java::lang::String *quote (::java::lang::String *);
  static ::java::lang::String *quoteAuthority (::java::lang::String *);
  static ::java::lang::String *quote (::java::lang::String *, ::java::lang::String *);
  static ::java::lang::String *quoteHost (::java::lang::String *);
  static ::java::lang::String *quotePath (::java::lang::String *);
  static ::java::lang::String *quoteUserInfo (::java::lang::String *);
public:
  URI (::java::lang::String *);
  URI (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jint, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  URI (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  URI (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  URI (::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  static ::java::net::URI *create (::java::lang::String *);
  virtual ::java::net::URI *parseServerAuthority ();
  virtual ::java::net::URI *normalize ();
private:
  ::java::lang::String *normalizePath (::java::lang::String *);
  void removeLastSegment (::java::lang::StringBuffer *);
public:
  virtual ::java::net::URI *resolve (::java::net::URI *);
  virtual ::java::net::URI *resolve (::java::lang::String *);
  virtual ::java::net::URI *relativize (::java::net::URI *);
  virtual ::java::net::URL *toURL ();
  virtual ::java::lang::String *getScheme () { return scheme; }
  virtual jboolean isAbsolute ();
  virtual jboolean isOpaque ();
  virtual ::java::lang::String *getRawSchemeSpecificPart () { return rawSchemeSpecificPart; }
  virtual ::java::lang::String *getSchemeSpecificPart () { return schemeSpecificPart; }
  virtual ::java::lang::String *getRawAuthority () { return rawAuthority; }
  virtual ::java::lang::String *getAuthority () { return authority; }
  virtual ::java::lang::String *getRawUserInfo () { return rawUserInfo; }
  virtual ::java::lang::String *getUserInfo () { return userInfo; }
  virtual ::java::lang::String *getHost () { return host; }
  virtual jint getPort () { return port; }
  virtual ::java::lang::String *getRawPath () { return rawPath; }
  virtual ::java::lang::String *getPath () { return path; }
  virtual ::java::lang::String *getRawQuery () { return rawQuery; }
  virtual ::java::lang::String *getQuery () { return query; }
  virtual ::java::lang::String *getRawFragment () { return rawFragment; }
  virtual ::java::lang::String *getFragment () { return fragment; }
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual jint compareTo (::java::lang::Object *);
private:
  jint compareFragments (::java::net::URI *);
public:
  virtual ::java::lang::String *toString ();
  virtual ::java::lang::String *toASCIIString ();
private:
  static ::java::lang::String *escapeCharacters (::java::lang::String *);
public: // actually package-private
  static const jlong serialVersionUID = -6052424284110960213LL;
private:
  static ::java::lang::String *URI_REGEXP;
  static ::java::lang::String *AUTHORITY_REGEXP;
  static ::java::lang::String *RFC2396_DIGIT;
  static ::java::lang::String *RFC2396_LOWALPHA;
  static ::java::lang::String *RFC2396_UPALPHA;
  static ::java::lang::String *RFC2396_ALPHA;
  static ::java::lang::String *RFC2396_ALPHANUM;
  static ::java::lang::String *RFC3986_UNRESERVED;
  static ::java::lang::String *RFC3986_SUBDELIMS;
  static ::java::lang::String *RFC3986_REG_NAME;
  static ::java::lang::String *RFC3986_PCHAR;
  static ::java::lang::String *RFC3986_SEGMENT;
  static ::java::lang::String *RFC3986_PATH_SEGMENTS;
  static ::java::lang::String *RFC3986_SSP;
  static ::java::lang::String *RFC3986_HOST;
  static ::java::lang::String *RFC3986_USERINFO;
  static const jint SCHEME_GROUP = 2L;
  static const jint SCHEME_SPEC_PART_GROUP = 3L;
  static const jint AUTHORITY_GROUP = 5L;
  static const jint PATH_GROUP = 6L;
  static const jint QUERY_GROUP = 8L;
  static const jint FRAGMENT_GROUP = 10L;
  static const jint AUTHORITY_USERINFO_GROUP = 2L;
  static const jint AUTHORITY_HOST_GROUP = 3L;
  static const jint AUTHORITY_PORT_GROUP = 5L;
  static ::java::util::regex::Pattern *URI_PATTERN;
  static ::java::util::regex::Pattern *AUTHORITY_PATTERN;
  static ::java::lang::String *HEX;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) scheme;
  ::java::lang::String *rawSchemeSpecificPart;
  ::java::lang::String *schemeSpecificPart;
  ::java::lang::String *rawAuthority;
  ::java::lang::String *authority;
  ::java::lang::String *rawUserInfo;
  ::java::lang::String *userInfo;
  ::java::lang::String *rawHost;
  ::java::lang::String *host;
  jint port;
  ::java::lang::String *rawPath;
  ::java::lang::String *path;
  ::java::lang::String *rawQuery;
  ::java::lang::String *query;
  ::java::lang::String *rawFragment;
  ::java::lang::String *fragment;
  ::java::lang::String *string;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_URI__ */