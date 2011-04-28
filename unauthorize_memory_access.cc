#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int *b;
  int a[10];
  b = new int[10];
  for (int i = 0; i < 20; i++) {
    a[i] = 12;
  }
  std::cout << "We are here!" << std::endl;
  b[20] = 13;                    // kaboom
  return 0;
}
