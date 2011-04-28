#include <iostream>

class Complex 
{     

 public:
  Complex() {
    std::cout << "Complex::Complex()" << std::endl;
    re = 0.0;
    im = 0.0;
  }

  Complex(double x) {
    std::cout << "Complex::Complex(double)" << std::endl;
    re = x;
    im = 0.0;
  }

  Complex(double r, double i) {
    std::cout << "Complex::Complex(double, double)" << std::endl;
    re = r;
    im = i;
  }

  Complex operator + (const Complex &z ) const {
    std::cout << "Complex::operator + (const Complex &z) const"
              << std::endl;
    return Complex(re + z.re, im + z.im);
  }

  Complex operator * (const Complex &z) const {
    std::cout << "Complex::operator * (const Complex &z) const"
              << std::endl;
    return Complex(re*z.re - im*z.im);
  }
  
 private:
  double re, im;
};


// int main(int argc, char **argv) {
//   Complex z = 3.0;
//   Complex y;
//   y = 5.0;
//   return 0;
// }


int main(int argc, char **argv) {
  Complex z = 3.0;
  Complex y;
  y = z + 5.0;
  return 0;
}
