#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int k;
  cin >> k;
  for (int n = 0; n < 100; n++) {
    std::cout << "n = " << n << std::endl;
    if (n == k) {
      break;
    }
    std::cout << "We go on" << std::endl;
  }
  return 0;
}
