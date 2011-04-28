#include "Node.h"

Node::Node(Node *n, int v) {
  next = n;
  value = v;
}

void Node::deleteAll() {
  if (next) {
    next->deleteAll();   
  }
  delete this;
}

bool Node::contains(int v) {
  return (value == v) || (next && (next->contains(v)));
}

int Node::size() {
  if (next) {
    return 1+next->size();
  } else {
    return 1;
  }
}


Node * Node::cloneAll() {
  if (next) {
    return new Node(next->cloneAll(), value);
  } else {
    return new Node(0, value);
  }
}

bool Node::equalAll(Node *n) {
  if (n) {
    if (value != n->value) {
      return false;
    }
    if (next) {
      return next->equalAll(n->next);
    } else {
      return n->next == 0;
    }
  }
  return false;
}
