#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int k, n;
  cin >> k;
  while (n < k) {
	std::cout << n++ << std::endl;
  }
  return 0;
}
