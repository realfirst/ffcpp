#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  cout.precision(30);

  float a = 0;
  for (int i = 0; i < 10; i++) {
    a += (1.0/10.0);
  }
  std::cout << "a = " << a << std::endl;

  float b = 0;
  for (int i = 0 ; i < 100; i++) {
    b += (1.0/100.0);
  }
  std::cout << "b = " << b << std::endl;

  double c = 0;
  for (int i = 0; i < 10; i++) {
    c += (1.0/10.0);
  }
  std::cout << "c = " << c << std::endl;

  return 0;
}
