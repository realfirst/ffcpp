#include <iostream>

// This is the include file containing the math functions
#include <cmath>

int normalize(double &x, double &y) {
  double d;
  d = sqrt(x*x + y*y);
  x = x/d;
  y = y/d;
}

int main(int argc, char **argv) {
  double a, b;
  a = 17.3; b = -823.21;
  std::cout << sqrt(a*a + b*b) << std::endl;
  normalize(a,b);
  std::cout << sqrt(a*a + b*b) << std::endl;
  return 0;
}

