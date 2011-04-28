#include <iostream>

using namespace std;

inline double dumb1(double x) {
  return 17*x;
}

double dumb2(double x) {
  return 17*x;
}

int main(int argc, char **argv) {
  double x = 4;
  cout << x << endl;
  x = dumb1(x);
  cout << x << endl;
  x = dumb2(x);
  cout << x << endl;
  return 0;
}
