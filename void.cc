#include <iostream>

void printSmallerSquares(int x) {
  int y;
  for (y = 0; y * y <= x; y++) {
    std::cout << y * y << ' ' ;
  }
  std::cout << std::endl;
}

int main(int argc, char **argv) {
  printSmallerSquares(17);
  return 0;
}
