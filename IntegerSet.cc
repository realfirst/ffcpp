#include <iostream>
#include <cstdlib>

using namespace std;


class IntegerSet {
public:
  IntegerSet(int sm) {
    sizeMax = sm;
    data = new int[sizeMax];
    currentSize = 0;
  }
  ~IntegerSet() {
    delete[] data;
  }

  void add(int i) {
    if (currentSize < sizeMax) {
      data[currentSize++] = i;
    } else {
      cerr << "ouch!\n";
      abort();
    }
  }

  bool contains(int i) {
    for (int k = 0; k < currentSize; k++) {
      if (i == data[k]) {
        return true;
      }
    }
  }

private:
  int *data;
  int sizeMax, currentSize;
};
