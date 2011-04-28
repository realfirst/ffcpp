#include <iostream>

int main(int argc, char **argv) {
  int x[3];
  for (int i = 0; i < 100000000000; i++) {
    x[i] = 0;
    std::cout << "Erasing x[" << i << "]" << std::endl;
  }
  return 0;
}
