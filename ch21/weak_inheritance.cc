#include <iostream>

using namespace std;

class FirstClass 
{     

 public:
  // FirstClass()
  // {  }
  // ~FirstClass()
  // {  }
 // private:
  void something() {
    std::cout << "FirstClass::something()" << std::endl;
  }
  
};

class SecondClass : public FirstClass
{     

 public:
  // SecondClass()
  // {  }
  // ~SecondClass()
  // {  }
 // private:
  void something() {
    std::cout << "SecondClass::something()" << std::endl;
  }
};

void niceFunction(FirstClass y) {
  y.something();
}

int main(int argc, char **argv) {
  SecondClass x;
  x.something();
  niceFunction(x);
  return 0;
}
