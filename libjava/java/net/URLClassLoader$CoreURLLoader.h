
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URLClassLoader$CoreURLLoader__
#define __java_net_URLClassLoader$CoreURLLoader__

#pragma interface

#include <java/net/URLClassLoader$URLLoader.h>
extern "Java"
{
  namespace java
  {
    namespace net
    {
        class URL;
        class URLClassLoader;
        class URLClassLoader$CoreURLLoader;
        class URLClassLoader$Resource;
    }
  }
}

class java::net::URLClassLoader$CoreURLLoader : public ::java::net::URLClassLoader$URLLoader
{

public: // actually package-private
  URLClassLoader$CoreURLLoader(::java::net::URLClassLoader *, ::java::net::URL *);
  ::java::net::URLClassLoader$Resource * getResource(::java::lang::String *);
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::net::URLClassLoader$URLLoader)))) dir;
public:
  static ::java::lang::Class class$;
};

#endif // __java_net_URLClassLoader$CoreURLLoader__
