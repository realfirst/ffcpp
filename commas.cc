#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int i, j, k;
  i = 0; j = 0; k = 0;
  std::cout << (i++, j = j+14, k = k-3) << std::endl;
  std::cout << i << ' ' << j << ' ' << k << std::endl;
  return 0;
}
