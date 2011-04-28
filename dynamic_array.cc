#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  for (int k = 0; k < 10000; k++) {
    int *x = new int[100000];
    std::cout << "k = " << k << " (x= " << x << ")\n" << std::endl;
  }
  return 0;
}
