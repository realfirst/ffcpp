#include <iostream>

#include "Histogram.h"

using namespace std;


int main(int argc, char **argv) {
  Histogram hi(25);
  for (int k = 0; k<25; k++) {
	hi.setBarValue(k, 1+sin((2*M_PI*k)/25));
  }
  cin.get();
  return 0;
}

