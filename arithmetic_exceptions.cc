#include <iostream>
#include <cmath>

int main(int argc, char **argv) {
  int i;
  long j;
  j = 1;
  for (i = 0; i < 20; i++) {
    j = j*3;
  }
  std::cout << j << std::endl;

  double y;
  y = 0.0;
  std::cout << 1.0 / y << ' ' << (-1.0) / y << std::endl;
  std::cout << log(-1.0) << std::endl;
  return 0;
}
