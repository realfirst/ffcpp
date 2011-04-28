#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int size = 100;
  int a[size];
  for (int i = 0; i < 100 * size; i++) {
    a[i] = i;
  }
  return 0;
}
