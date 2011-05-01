#include <iostream>

using namespace std;

class ReallyVirtual {     
 public:
  virtual double operation(double x, double y) = 0;
  double twiceTheOpertation(double x, double y) {
    return 2.0*operation(x, y);
  }
};

class NotVirtualAnymore : public ReallyVirtual {     
 public:
  NotVirtualAnymore(double l) : k(l) {}
  double operation(double x, double y) {
    return x+k*y;
  }
 private:
  double k;
};

int main(int argc, char **argv) {
  ReallyVirtual *f = new NotVirtualAnymore(3.5);
  double x = f->twiceTheOpertation(4.3, -8.9);
  std::cout << x << std::endl;
  delete f;
  
  return 0;
}
