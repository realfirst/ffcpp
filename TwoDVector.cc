#include <iostream>

class TwoDVector {
  double x, y;
public:
  TwoDVector() {
    x = 0;
    y = 0;
 }
  TwoDVector(double a, double b) {
    x = a;
    y = b;  
  }
  TwoDVector operator + (TwoDVector &v) {
    return TwoDVector(x + v.x, y + v.y);
  }
  void print() {
    std::cout << x << ' ' << y << std::endl;
  }
};

int main(int argc, char **argv) {
  TwoDVector v(2, 3);
  TwoDVector w(4, 5);
  TwoDVector z;
  z = w + v;
  z.print();
  return 0;
}
