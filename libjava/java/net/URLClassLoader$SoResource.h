
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URLClassLoader$SoResource__
#define __java_net_URLClassLoader$SoResource__

#pragma interface

#include <java/net/URLClassLoader$Resource.h>
extern "Java"
{
  namespace java
  {
    namespace net
    {
        class URL;
        class URLClassLoader$SoResource;
        class URLClassLoader$SoURLLoader;
    }
  }
}

class java::net::URLClassLoader$SoResource : public ::java::net::URLClassLoader$Resource
{

public: // actually package-private
  URLClassLoader$SoResource(::java::net::URLClassLoader$SoURLLoader *, ::java::net::URL *);
  ::java::io::InputStream * getInputStream();
public:
  jint getLength();
  ::java::net::URL * getURL();
public: // actually package-private
  ::java::net::URL * __attribute__((aligned(__alignof__( ::java::net::URLClassLoader$Resource)))) url;
public:
  static ::java::lang::Class class$;
};

#endif // __java_net_URLClassLoader$SoResource__
