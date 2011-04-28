#include <iostream>

using namespace std;

class A
{     

 public:
  void dummy() {
    std::cout << "A::dummy" << std::endl;
  }
  void something() {
    dummy();
  }
 // private:

};

class B : public A
{     

 public:
  void dummy() {
    std::cout << "B::dummy" << std::endl;
  }
 // private:

};

void callAsA(A x) {
  x.dummy();
}

int main(int argc, char **argv) {
  B b;
  b.dummy();
  callAsA(b);
  b.something();
  return 0;
}
