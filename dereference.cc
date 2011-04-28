#include <iostream>

int main(int argc, char **argv) {
  int i;
  int *p = &i;

  std::cout << "p= " << p  << std::endl;
  i = 4;
  std::cout << "i= " << i << std::endl;
  *p = 10;
  std::cout << "i= " << i << std::endl;
  return 0;
}
