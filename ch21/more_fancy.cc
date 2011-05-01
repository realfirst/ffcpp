#include <iostream>
#include <cmath>

using namespace std;

class Function {     
 public:
  // This is pure virtual
  virtual double eval(double x) = 0;
  // This calls the pure one
  double derivative(double x, double e) {
    std::cout << "Function::derivative" << std::endl;
    return (eval(x+e) - eval(x-e))/(2*e);
  }
  // Let's define a derivative by default
  virtual double derivative(double x) {
    return derivative(x, 0.001);
  }
};

class Oscillating : public Function {
 public:
  Oscillating(double aa, double bb, double cc) : a(aa), b(bb), c(cc) {}
  double eval(double x) {
    return a*sin(b*x+c);
  }
 private:
  double a, b, c;
};

class Quadratic : public Function {     
 public:
  Quadratic(double aa, double bb, double cc) :a(aa),b(bb),c(cc) {}
  double eval(double x) {
    return c + (b + a*x)*x;
  }
  double derivative(double x) {
    return b + 2*a*x;
  }
 private:
  double a, b, c;
};

int main(int argc, char **argv) {
  Oscillating f(2, 3, 4);
  std::cout << f.derivative(2) << std::endl;

  Quadratic q(5, 4, 5);
  std::cout << q.derivative(2) << std::endl;
  return 0;
}
