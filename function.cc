#include <iostream>

// This function has one parameter called x
// parameter 表示形参
double square(double x) {return x*x; }

// This one has tow paramenters called x and y
// It retruns the largest k so that y^k <= x
int maxexpon(double x, double y) {
  double z = 1;
  int result = 0;
  while (z <= x) {
    result++;
    z = z * y;
  }
  return result - 1;
}
int main(int argc, char **argv) {
  double a, b;
  std::cin >> a >> b;
  // The argument is a for the first call and a+b for the second
  // argument 表示实参
  std::cout << square(a)  + square(a+b) << std::endl;
  // The two arguments are and b
  std::cout << maxexpon(a, b) << std::endl;
  return 0;
}
