#include <iostream>

int sum( int *x, int sz ) {
  int s = 0;
  for (int k = 0; k < sz; k++) {
    s = s + x[k];
  }
  return s;
}

int main(int argc, char **argv) {
  int cool[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::cout << sum(cool, 10) << std::endl;
  return 0;
}
