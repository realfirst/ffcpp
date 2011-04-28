#include <iostream>

using namespace std;

int function1(int x);

int function2(int x) {
  if (x == 0) {
    return 0;
  } else {
    return function1(x-1);
  }
}

int function1(int x) {
  if (x == 0) {
    return 1;
  } else {
    return function2(x/2);
  }
}

int main(int argc, char **argv) {
  std::cout << function1(15) << std::endl;
  return 0;
}
