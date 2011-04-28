#include <iostream>

int main(int argc, char **argv) {
  const int x =15;
  std::cout << "x = " << x << std::endl;
  int *p = &x;
  *p = 98;
  // let's try to avoid the const qualifier
  std::cout << "x = " << x << std::endl;
  return 0;
}
