#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  double **m;
  int w, h;

  cin >> w >> h;

  // Allocation requieres a loop
  m = new (double*)[w];
  for (int k = 0; k < w; k++) {
    m[k] = new double[h];
  }

  // Deallocation also
  for (int k = 0; k < w; k++) {
    delete[] m[k];
  }
  delete[] m;

  return 0;
}
