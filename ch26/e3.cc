class IntIterator {     
 public:
  virtual bool hasNext() = 0;
  virtual int next() = 0;
};

class SmallIterator : public IntIterator {     
 public:
  SmallIterator() : n(0) {}
  SmallIterator(int aa) : a(aa), n(1) {}
  SmallIterator(int bb, int aa) :a(aa), b(bb), n(2) {}
  bool hasNext() {
    return n > 0;
  }
  int next() {
    n--;
    if (n == 1) {
      return b;
    } else if (n == 0) {
      return a;
    }
  }
 private:
  int a, b, n;
};
