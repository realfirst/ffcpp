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
