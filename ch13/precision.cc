#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  std::cout << "Standard precision " << (1.0/3.0) << std::endl;
  cout.precision(3);
  std::cout << "precision(3)" << (1.0/3.0) << std::endl;
  return 0;
}
