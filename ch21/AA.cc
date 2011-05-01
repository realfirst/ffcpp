#include <iostream>

using namespace std;

class AA {     
 public:
  virtual void something() {
    std::cout << "AA::something()" << std::endl;
  }
};

class BB : public AA {     
 public:
  void something() {
    std::cout << "BB::something()" << std::endl;
  }
};

void byvalue(AA x) {
  x.something();
}

void byref(AA &x) {
  x.something();
}

void byporinter(AA *x) {
  x->something();
}

int main(int argc, char **argv) {
  BB b;
  byvalue(b);
  byref(b);
  byporinter(&b);
  
  return 0;
}
