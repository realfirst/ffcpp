#include <iostream>

using namespace std;

double *something(int n) {
  double a[n];
  double *x = a;
  return x;
}

int main(int argc, char **argv) {
  double *z = something(10000);
  double *w = something(10000);
  // delete z;
  // delete w;
  
  return 0;
}
