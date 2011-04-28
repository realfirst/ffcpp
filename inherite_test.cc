#include "First.h"
#include "Second.h"

#include <iostream>


bool bothPositive(First x, First y) {
  return x.positive() && y.positive();
}

int main(int argc, char **argv) {
  Second x(3), y(3);
  bothPositive(x, y);
  return 0;
}
