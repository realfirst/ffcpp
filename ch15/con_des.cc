#include <iostream>

using namespace std;

class A 
{     

 public:
  A()
  {std::cout << "Constructor for A" << std::endl;  }
  ~A() {std::cout << "Destructor for A" << std::endl;}
  int dummy()  { return 42; }
 // private:

};

class B : public A
{     

 public:
  B() : A() {
    std::cout << "Constructor for B" << std::endl;
  }
  ~B()
  { std::cout << "Destructor for B" << std::endl; }
};

class C : public B
{     

 public:
  C() :B()
  { std::cout << "Constructor for C" << std::endl; }
  ~C()
  { std::cout << "Destructor for C" << std::endl; }
 // private:

};

int main(int argc, char **argv) {
  C c;
  std::cout << c.dummy() << std::endl;
  return 0;
}
