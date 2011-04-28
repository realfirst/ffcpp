#include <iostream>
#include <cstdlib>


int main(int argc, char **argv) {
  int x;
  std::cout << "Enter a non-null value : ";
  std::cin >> x;
  if (x == 0) {
    std::cerr << "Null value!" << std::endl;
    abort();
  }
  std::cout << 1 / x  << std::endl;
  return 0;
}
