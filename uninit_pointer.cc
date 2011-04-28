#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int b;
  int a[10];
  b = 4;
  for (int i = 0; i < 100; i++) {
    a[i] = 12;
    std::cout << b << " ";
    cout.flush();
  }
  return 0;
}
