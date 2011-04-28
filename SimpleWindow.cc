#include <iostream>

#include "SimpleWindow.h"

using namespace std;

int main(int argc, char **argv) {
  SimpleWindow window("Testing SimpleWindow", 512, 512);
  for (int x = 0; x < 512; x++) {
	for (int y = 0; y < 512; y++) {
      if ((x-256)*(x-256)+(y-256)*(y-256)
          < 200*200) {
        window.color(1.0, 0, 0);
      } else {
        window.color(0, 0, 1.0);
      }
      window.drawPoint(x, y);
    }
  }
  window.show();

  cin.get();
  return 0;
}

