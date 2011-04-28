#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  double s;
  for (double x = 0; x != 1; x += 0.01) {
	s += 1/(1+x);
  }
  std::cout << s << std::endl;
  return 0;
}
