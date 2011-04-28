#include <iostream>

using namespace std;


void reset(int &a) { a = 0; }
void bug(int a) { a = 42; }

int main(int argc, char **argv) {
  int x = 3;
  reset(x);
  cout << x << '\n';
  bug(x);
  cout << x << '\n';
}
