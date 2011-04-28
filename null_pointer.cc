#include <iostream>

using namespace std;

int length(char *s) {
  if (s) {
    char *t = s;
    while (*t != '\0') {
      t++;
    }
    // The difference of two pointers is an integer
    return t - s;
  } else {
    return 0;                   // the pointer was null
  }
}

int main(int argc, char **argv) {
  char *s = 0;
  std::cout << length(s) << std::endl;
  s = "It's not personal, it's business";
  std::cout << length(s) << std::endl;
  return 0;
}
