#include <iostream>
#include <cmath>

class NormalizeVector {
  double x, y;
public:
  NormalizeVector(double a, double b) {
    double d = sqrt(a*a + b*b);
    x = a/d;
    y = b/d;
  }
  double getX() {
    return x;
  }
  double getY() {
    return y;
  }
  //virtual ~NormalizeVector();
};

int main(int argc, char **argv) {
  NormalizeVector v(23.0, -45.0);
  std::cout << v.getX() << ' ' << v.getY() << std::endl;
  NormalizeVector *w;
  w = new NormalizeVector(0.0, 5.0);
  std::cout << w->getX() << ' ' << w->getY() << std::endl;
  delete w;
  return 0;
}

