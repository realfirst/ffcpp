#include <iostream>

using namespace std;

class FirstClass {     
 public:
  void print1() {
    std::cout << "FirstClass::print1()" << std::endl;
  }
  virtual void print2() {
    std::cout << "FirstClass::print2()" << std::endl;
  }
  void print3() {
    print1();
    print2();
  }
};

class SecondClass : public FirstClass {     
 public:
  void print1() {
    std::cout << "SecondClass::print1()" << std::endl;
  }
  virtual void print2() {
    std::cout << "SecondClass::print2()" << std::endl;
  }
};

class ThirdClass : public SecondClass {     
 public:
  void print1() {
    std::cout << "ThirdClass::print1()" << std::endl;
  }
  virtual void print2() {
    std::cout << "ThirdClass::print2()" << std::endl;
  }
};

int main(int argc, char **argv) {
  FirstClass x;
  x.print1();
  x.print2();
  x.print3();

  std::cout << std::endl;

  SecondClass y;
  y.print1();
  y.print2();
  y.print3();

  std::cout << std::endl;
  
  ThirdClass z;
  z.print1();
  z.print2();
  z.print3();
  
  return 0;
}

// FirstClass::print1()
// FirstClass::print2()
// FirstClass::print1()
// FirstClass::print2()

// SecondClass::print1()
// SecondClass::print2()
// FirstClass::print1()
// SecondClass::print2()

// ThirdClass::print1()
// ThirdClass::print2()
// FirstClass::print1()
// ThirdClass::print2()
