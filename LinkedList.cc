#include <iostream>

#include "Node.h"
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() {
  first = 0;
}

LinkedList::LinkedList(const LinkedList &l) {
  if (l.first) {
    first = l.first->cloneAll();
  } else {
    first = 0;
  }
}

LinkedList::~LinkedList() {
  if (first) {
    first->deleteAll();
  }
}

LinkedList &LinkedList::operator = (const LinkedList &l) {
  if (&l != this) {
    if (first) {
      first->deleteAll();
    }
    if (l.first) {
      first = l.first->cloneAll();
    } else {
      first = 0;
    }
  }
  return *this;
}

void LinkedList::add(int v) {
  first = new Node(first, v);
}

bool LinkedList::operator == (const LinkedList &l) const {
  if (first) {
    return first->equalAll(l.first);
  } else {
    return l.first == 0;
  }
}

bool LinkedList::contains(int v) const {
  return first && first->contains(v);
}

int LinkedList::size() const {
  if (first) {
    return first->size();
  } else {
    return 0;
  }
}

void LinkedList::print() const {
  Node *n;
  for (n = first; n != 0; n = n->next) {
	cout << n->value;
    if (n->next) {
      cout << ", ";
    } else {
      cout << "\n";
    }
  }
}
