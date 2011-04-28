#include <iostream>

using namespace std;

double *definitelyStupid() {
  double *a = new double[10];
  return a;
}

int main(int argc, char **argv) {
  double *a, *b;
  a = definitelyStupid();
  delete[] a;
  b = new double[10];
  for (int i = 1; i<100; i++) {
	b[i] = i;
  }
  double *c;
  c[10] = 9.0;
  
  return 0;
}
