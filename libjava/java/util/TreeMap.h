
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_TreeMap__
#define __java_util_TreeMap__

#pragma interface

#include <java/util/AbstractMap.h>

class java::util::TreeMap : public ::java::util::AbstractMap
{

public:
  TreeMap();
  TreeMap(::java::util::Comparator *);
  TreeMap(::java::util::Map *);
  TreeMap(::java::util::SortedMap *);
  virtual void clear();
  virtual ::java::lang::Object * clone();
  virtual ::java::util::Comparator * comparator();
  virtual jboolean containsKey(::java::lang::Object *);
  virtual jboolean containsValue(::java::lang::Object *);
  virtual ::java::util::Set * entrySet();
  virtual ::java::lang::Object * firstKey();
  virtual ::java::lang::Object * get(::java::lang::Object *);
  virtual ::java::util::SortedMap * headMap(::java::lang::Object *);
  virtual ::java::util::Set * keySet();
  virtual ::java::lang::Object * lastKey();
  virtual ::java::lang::Object * put(::java::lang::Object *, ::java::lang::Object *);
  virtual void putAll(::java::util::Map *);
  virtual ::java::lang::Object * remove(::java::lang::Object *);
  virtual jint size();
  virtual ::java::util::SortedMap * subMap(::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::util::SortedMap * tailMap(::java::lang::Object *);
  virtual ::java::util::Collection * values();
public: // actually package-private
  virtual jint compare(::java::lang::Object *, ::java::lang::Object *);
private:
  void deleteFixup(::java::util::TreeMap$Node *, ::java::util::TreeMap$Node *);
  void fabricateTree(jint);
public: // actually package-private
  virtual ::java::util::TreeMap$Node * firstNode();
  virtual ::java::util::TreeMap$Node * getNode(::java::lang::Object *);
  virtual ::java::util::TreeMap$Node * highestLessThan(::java::lang::Object *);
private:
  void insertFixup(::java::util::TreeMap$Node *);
  ::java::util::TreeMap$Node * lastNode();
public: // actually package-private
  virtual ::java::util::TreeMap$Node * lowestGreaterThan(::java::lang::Object *, jboolean);
private:
  ::java::util::TreeMap$Node * predecessor(::java::util::TreeMap$Node *);
public: // actually package-private
  virtual void putFromObjStream(::java::io::ObjectInputStream *, jint, jboolean);
  virtual void putKeysLinear(::java::util::Iterator *, jint);
private:
  void readObject(::java::io::ObjectInputStream *);
public: // actually package-private
  virtual void removeNode(::java::util::TreeMap$Node *);
private:
  void rotateLeft(::java::util::TreeMap$Node *);
  void rotateRight(::java::util::TreeMap$Node *);
public: // actually package-private
  virtual ::java::util::TreeMap$Node * successor(::java::util::TreeMap$Node *);
private:
  void writeObject(::java::io::ObjectOutputStream *);
  static const jlong serialVersionUID = 919286545866124006LL;
public: // actually package-private
  static const jint RED = -1;
  static const jint BLACK = 1;
  static ::java::util::TreeMap$Node * nil;
private:
  ::java::util::TreeMap$Node * __attribute__((aligned(__alignof__( ::java::util::AbstractMap)))) root;
public: // actually package-private
  jint size__;
private:
  ::java::util::Set * entries;
public: // actually package-private
  jint modCount;
  ::java::util::Comparator * comparator__;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_TreeMap__
