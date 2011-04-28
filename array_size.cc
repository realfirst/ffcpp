#include <iostream>


int main(int argc, char **argv) {
  int hello[] = {1, 2, 3};
  char something[] = "abcdef";
  std::cout << sizeof(hello) / sizeof(int) << ' ' 
            << sizeof(something) / sizeof(char) << std::endl;
  return 0;
}
