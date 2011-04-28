#include <iostream>

int main(int argc, char **argv) {
  char text[] = "Hello!";
  char buffer[256];
  char *t, *s;

  s = text; t = buffer;
  while (*t++ = *s++) {
    ;
  }
  std::cout << text << ' ' << buffer << std::endl;
  return 0;
}
