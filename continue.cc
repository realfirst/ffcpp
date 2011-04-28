#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  for (int n = 0; n < 6; n++) {
    std::cout << "n= " << n << std::endl;
    if (n%2 == 1) {
      continue;
    }
    std::cout << "This is even" << std::endl;
  }
  return 0;
}
