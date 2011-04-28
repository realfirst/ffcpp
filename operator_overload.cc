#include <iostream>

using namespace std;

class Complex {
public:
  double re, im;
  //  Complex();
  //  virtual ~Complex();
};

Complex operator + (Complex z1, Complex z2) {
  Complex result;
  result.re = z1.re + z2.re;
  result.im = z1.im + z2.im;
  return result;
}

Complex operator * (Complex z1, Complex z2) {
  Complex result;
  result.re = z1.re * z2.re - z1.im * z2.im;
  result.im = z1.im * z2.re + z1.re * z2.im;
  return result;
}

int main(int argc, char **argv) {
  Complex x, y;
  x.re = 5.0; x.im = 12.0;
  y.re = -1.0;y.im = 4.0;
  Complex z = x + (x*y) + y;
  std::cout << z.re << " + i." << z.im << std::endl;
  return 0;
}
