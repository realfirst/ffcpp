#include <iostream>
#include <cstdlib>

using namespace std;

class OneDArray {
  int size;
  double *data;
public:
  OneDArray(int s) {
    size = s;
    data = new double[size];
  }
  ~OneDArray() {
    delete[] data;
  }
  double &operator [] (int k) {
    if ((k < 0) || (k >= size)) {
      abort();
    }
    return data[k];
  }
};

int main(int argc, char **argv) {
  OneDArray a(10);
  for (int i = 0; i < 10; i++) {
    a[i] = 1.0/i;
  }
  for (int i = 0; i < 10; i++) {
    std::cout << "a[" << i << "] = " << a[i] << std::endl;
  }
  a[14] = 1.0;

  return 0;
}
