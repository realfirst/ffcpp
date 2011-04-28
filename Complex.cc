#include <iostream>

using namespace std;

class Complex {
public:
  double re, im;
  Complex() {
    re = 0.0;
    im = 0.0;
  }
  Complex(double r, double i) {
    re = r;
    im = i;
  }
  Complex operator * (const Complex &z) const {
    return Complex(re*z.re - im*z.im, re*z.im + im*z.re);
  }
  //  virtual ~Complex();
};

// We can do that because the fields are public
Complex operator + (const Complex &z1, const Complex &z2) {
  return Complex(z1.re + z2.re, z1.im + z2.im);
}

int main(int argc, char **argv) {
  Complex z(2.0, 3.0), w(3.0, -4.0);
  Complex x;
  x = z + w;                    // equivalent to x = (operator +) (z, w)
  x = z * w;                    // equivalent to x = z.(operator *) (w)

  return 0;
}

