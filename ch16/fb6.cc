#include <iostream>

using namespace std;

class A {     
 public:
  A()
  {std::cout << "#1" << std::endl;  }
  A(const A &a) {
    std::cout << "#2" << std::endl;
  }
  A(double x) {
    std::cout << "#3" << std::endl;
  }
  
  ~A()
  {std::cout << "#4" << std::endl;  }
 private:

};

class AnInteger 
{     

 public:
  AnInteger() {
    std::cout << "#1" << std::endl;
  }
  
  AnInteger(const AnInteger &i) {
    k = i.k;
    std::cout << "#2" << std::endl;
  }
  
  AnInteger(int n) {
    k = n;
    std::cout << "#3" << std::endl;
  }
  
  AnInteger operator + (const AnInteger &i) const {
    std::cout << "#4" << std::endl;
    return AnInteger(k+i.k);
  }
  
  ~AnInteger()
  {  }
 private:
  int k;
};

int main(int argc, char **argv) {
  // int x = 3;
  // if (x = 4) {
    // std::cout << x << std::endl;
  // } else {
    // std::cout << "x is not equal to 4" << std::endl;
  // }
  // return 0;
  
  // int x = 24;
  // do {
	// while (x%5 > 0) {
      // x--;
    // }
    // std::cout << x << std::endl;
    // x--;
  // } while (x > 0);
  
  // A x = 3.0;
  // A y = x;
  // y = x;
  AnInteger x = 3;
  AnInteger y = x + 3 + 4;
}
