#include <iostream>

using namespace std;

class IntegerMapping {     
 public:
  virtual int maps(int x) const = 0;
};

class Translation : public IntegerMapping {     
 public:
  Translation(int l) : k(l) {}
  int maps(int x) const {
    return x+k;
  }
 private:
  int k;
};

class Negate : public IntegerMapping {     
 public:
  Negate() {}
  int maps(int x) const {
    return -x;
  }
};

class Compose : public IntegerMapping {     
 public:
  Compose(IntegerMapping *n1, IntegerMapping *n2) : m1(n1), m2(n2) {}
  int maps(int x) const {
    return m1->maps(m2->maps(x));
  }
 private:
  IntegerMapping *m1;
  IntegerMapping *m2;
};

int weird(IntegerMapping *m, int a, int b) {
  return m->maps(a) * m->maps(b);
}

int main(int argc, char **argv) {
  Translation t(5);
  Negate n;
  Compose c(&t, &n);
  cout << weird(&c, 15, 16) << endl;
  return 0;
}

