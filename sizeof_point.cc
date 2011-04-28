#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int cool[10] = {1,2,3,4,5,6,7,8,9,10};
  int *coolptr = cool;
  std::cout << sizeof(cool) << ' ' << sizeof(*coolptr) << std::endl;
  return 0;
}
