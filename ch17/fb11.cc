class LinkedList {     
 public:
  LinkedList();
  LinkedList(const LinkedList &l);
  ~LinkedList();
  void add(int v);
  LinkedList &operator = (const LinkedList &l);
  bool operator == (const LinkedList &l) const;
  bool constains(int v) const;
  int size() const;
  void print() const;
 private:
  Node *first;
};

class LinkedList2 : public LinkedList {     
 public:
  LinkedList2();
  LinkedList2(const LinkedList &l);
  LinkedList2(const LinkedList2 &l);
  LinkedList2 &operator = (const LinkedList2 &l);
  void add(int v);
  int size() const;
 private:
  int keepSize;
};

LinkedList2::LinkedList2() : LinkedList(), keepSize(0) {}

LinkedList2::LinkedList2(const LinkedList &l) : LinkedList(l),
                                                keepSize(l.size()) {}

LinkedList2::LinkedList2(const LinkedList2 &l) : LinkedList(l),
                                                 keepSize(l.keepSize) {}

LinkedList2 &LinkedList2::operator = (const LinkedList2 &l) {
  LinkedList::operator =(l);
  keepSize = l.keepSize;
}

void LinkedList2::add(int v) {
  keepSize++;
  LinkedList::add(v);
}

int LinkedList2::size() const {
  return keepSize;
}
