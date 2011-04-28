#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
  return sin(sin(x) + cos(x));
}

double derivative_of_f(double x) {
  // should be (cos(x) -sin(x)) * cos(sin(x) + cos(x));
  return (cos(x) + sin(x)) * cos(sin(x) + cos(x));
}

double derivative_of_f2(double x) {
  return (cos(x) - sin(x)) * cos(sin(x) + cos(x));
}

double dirty_derivative_of_f(double x) {
  double epsilon = 1e-5;
  return (f(x + epsilon) - f(x - epsilon))/(2 * epsilon);
}

int main(int argc, char **argv) {
  double x = 0.2345;
  std::cout << "The 1st fancy one: " << derivative_of_f(x) << std::endl;
  std::cout << "The 2nd fancy one: " << derivative_of_f2(x) << std::endl;
  std::cout << "The dirty one:     " << dirty_derivative_of_f(x) << std::endl;
  return 0;
}

