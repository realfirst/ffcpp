#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  char * s = "hello world!";
  std::cout << s << std::endl;
  for (int i = 0; i < argc; i++) {
    std::cout << "argument #" << i << " is '" << argv[i] << "'" << std::endl;
  }
  return 0;
}
