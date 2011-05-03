#include <cstdlib>

using namespace std;

class IntIterator {     
 public:
  virtual bool hasNext() = 0;
  virtual int next() = 0;
};

class IntSet {     
 public:
  virtual void add(int k) = 0;
  virtual IntIterator *interator() const = 0;
};

int size(const InSet &set) {
  int s = 0;
  IntIterator *i = set.interator();
  while (i->hasNext) {
	i->next();
    s++;
  }
  delete i;
  return s;
}

class IntSetArrayIterator : public IntIterator {     
 public:
  IntSetArrayIterator(int *v, int s) : values(v), current(0), size(s) {}
  bool hasNext() {
    return current < size;
  }
  int next() {
    return values[current++];
  }
 private:
  int *values;
  int current, size;
};

class IntSetArray : public IntSet {     
 public:
  IntSetArray(int sm) : values(new int[sm]), size(0), sizemax(sm) {}
  ~IntSetArray() {
    delete values;
  }
  void add(int k) {
    if (size >= sizemx) {
      abort();
      values[size++] = k;
    }
  }
  IntIterator *iterator() const {
    return new IntSetArrayIterator(values, size);
  }
 private:
  int *values;
  int size, sizemax;
};

class Node {     
 public:
  int value;
  Node *next;
  Node(int v, Node *n) : value(v), next(n) {}
};

class IntSetListInterator : public IntIterator {     
 public:
  IntSetListInterator(Node *n) : current(n) {}
  bool hasNext() {
    return current;
  }
  int next() {
    int r = current->value;
    current = current->next;
    return r;
  }
 private:
  Node *current;
};

class IntSetList : public IntSet {     
 public:
  IntSetList() : first(0) {}
  ~IntSetList() {
    for (Node *n = first; n; n = n->next) {
      delete n;
    }
  }
  void add(int k) {
    first = new Node(k, first);
  }
  IntIterator *iterator() const {
    return new IntSetListInterator(first);
  }
 private:
  Node *first;
};





