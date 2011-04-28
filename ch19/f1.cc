#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int a;
  a = a+1;
  int b = 3;
  if (b == 3) {
    int b = 5;
    int c = 4;
  }
  std::cout << "b=" << b << std::endl;
  std::cout << 'c=' << c << std::endl;
  return 0;
}
