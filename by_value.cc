#include <iostream>

void stupidfunction(int x) {
  x = 4;
}

int main(int argc, char **argv) {
  int y;
  y = 12;
  stupidfunction(y);
  std::cout << y << std::endl;
  return 0;
}

