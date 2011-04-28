#include <iostream>
#include <cstdio>


using namespace std;

int getk();

int main(int argc, char **argv) {
  int k;
  // std::cout << "Enter a value between 1 and 3: " << std::endl;
  // cin >> k;
  k = getk();
  while (k != EOF) {
    switch (k) {
    case 1: {
      std::cout << "One!" << std::endl;
      k = getk();
      break;
    }
    case 2: {
      std::cout << "Two!" << std::endl;
      k = getk();
      break;
    }
    case 3: {
      std::cout << "Three!" << std::endl;
      k = getk();
      break;
    }
    default:
      std::cout << "Didn't get it, did you ?" << std::endl;
      k = getk();
      break;
    }
  }
 
  return 0;
}

int getk() {
  int k;
  std::cout << "Enter a value between 1 and 3: " << std::endl;
  cin >> k;
  return k;
}
