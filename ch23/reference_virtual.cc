#include <iostream>

using namespace std;

class FirstClass {     
 public:
  void print1() {
    cout << "FirstClass::print1()" << endl;
  }
  virtual void print2() {
    cout << "FirstClass::print2()" << endl;
  }
  void print3() {
    print1();
    print2();
    cout << endl;
  }
};

class SecondClass : public FirstClass {     
 public:
  void print1() {
    cout << "SecondClass::print1()" << endl;
  }
  void print2() {
    cout << "SecondClass::print2()" << endl;
  }
};

class ThirdClass : public SecondClass {     
 public:
  void print1() {
    cout << "ThirdClass::print1()" << endl;
  }
  void print2() {
    cout << "ThirdClass::print2()" << endl;
  }
};

int main(int argc, char **argv) {
  FirstClass f1;
  f1.print1();
  f1.print2();
  f1.print3();

  SecondClass f2;
  f2.print1();
  f2.print2();
  f2.print3();

  ThirdClass f3;
  f3.print1();
  f3.print2();
  f3.print3();
  
  return 0;
}
