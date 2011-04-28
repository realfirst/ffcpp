#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
  double param1, param2, result;
  param1 = 1000000;
  param2 = 2;
  result = log10(param1) / log10(param2);
  std::cout << param1 << ' '<< result << std::endl;
  return 0;
}

