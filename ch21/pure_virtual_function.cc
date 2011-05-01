#include <cmath>
#include <iostream>

using namespace std;

class Function {     
 public:
  // This is pure virtual
  virtual double eval(double x) = 0;

  // This calls the pure one
  double derivative(double x, double e) {
    return (eval(x+e) - eval(x-e))/(2*e);
  }
};

class Oscillating : public Function {     
 public:
  Oscillating(double aa, double bb, double cc)
      :a(aa), b(bb), c(cc) {}
  double eval(double x) {
    return a*sin(b*x+c);
  }
 private:
  double a, b, c;
};

int main(int argc, char **argv) {
  Oscillating f(1, 1, 0);
  cout << f.derivative(0, 0.1) << endl;
  cout << f.derivative(0, 0.01) << endl;
  cout << f.derivative(0, 0.001) << endl;
  Function f1;
  // let's mess the complier!
  std::cout << f1.eval(3.0) << std::endl;
  return 0;
}


