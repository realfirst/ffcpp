
#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include "Node.h"

class LinkedList {
  Node *first;
public:
  LinkedList();
  LinkedList(const LinkedList &l);
  ~LinkedList();
  void add(int v);
  LinkedList &operator = (const LinkedList &l);
  bool operator == (const LinkedList &l) const;
  bool contains(int v) const;
  int size() const;
  void print() const;
};

#endif /* _LINKEDLIST_H_ */
