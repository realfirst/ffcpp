#include <iostream>

int main(int argc, char **argv) {
  bool c1, c2;
  c1 = true;
  c2 = !c1 && false;
  std::cout << c1 << ' ' << c2 << std::endl;
  
  int j, i;
  j = 3 + (i = 5);
  std::cout << j << std::endl;
  return 0;
}
