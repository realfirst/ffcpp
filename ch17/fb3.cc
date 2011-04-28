#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int a[100];
  int k, n = 0;
  for (int i = 0; i < 100; i++) {
	a[i] = i;
  }
  cin >> k;
  do {
	n += k;
    std::cout << a[n] << std::endl;
  } while (n < 100-k);
  return 0;
}
