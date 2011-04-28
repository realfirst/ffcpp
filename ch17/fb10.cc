#include <iostream>

using namespace std;

class A {     
 public:
  A(int y) {
    x = y;
  }
  void dummy() {
    std::cout << "x= " << x << std::endl;
  }
 private:
  int x;
};

class B : public A {     
 public:
  B(int k) : A(k), z(2*k) {
    
  }
  void dummy() {
    std::cout << "Hello!" << std::endl;
  }
 private:
  int z;
};

void f(B r, A q) {
  r.dummy();
  q.dummy();
}

int main(int argc, char **argv) {
  B x(3);
  x.dummy();
  x.A::dummy();
  f(x, x);
  
  return 0;
}

// Hello!
// x= 3
// Hello!
// x= 3
