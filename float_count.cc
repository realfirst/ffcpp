#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  double x;
  for (x = 0; x < 1.0; x = x + 0.1) {
    std::cout << 1.0 - x << ' ' ;
  }
  std::cout << std::endl;
  return 0;
}
