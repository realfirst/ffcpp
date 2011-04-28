#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  double a, b, c;
  a = 0.0; b = 2.0;
  while (b - a > 1e-9) {
    c = (a+b) / 2.0;
    if (c*c - 2.0 > 0.0) {
      b = c;
    } else {
      a = c;
    }
  }
  std::cout << c << std::endl;
  return 0;
}
