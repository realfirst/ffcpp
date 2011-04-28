#include <iostream>


int fact(int k) {
  std::cout << k << std::endl;
  if (k == 0) {
    return 1;
  } else {
    return k*fact(k-1);
  }
}

int main(int argc, char **argv) {
  int n = fact(4);
  std::cout << '\n' << n << std::endl;
  return 0;
}
