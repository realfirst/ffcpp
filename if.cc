#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int n;
  cin >> n;
  if (n < 0) {
    n = 0;
  } else {
    n = 2 * n;
    n = n - 1;
  }
  std::cout << n << std::endl;
  return 0;
}
