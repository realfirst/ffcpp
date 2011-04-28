#include <iostream>

using namespace std;

void dumb1(ostream &s) {}
void dumb2(ostream s) {}

int main(int argc, char **argv) {
  dumb1(cout);
  dumb2(cout);
  return 0;
}
