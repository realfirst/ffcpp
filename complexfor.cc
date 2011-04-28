#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
  double x;
  for (x = 1; fabs(cos(x) - x) > 1e-6; x = cos(x)) {
    ;
  }
  std::cout << x << ' ' << cos(x) << std::endl;
  return 0;
}
