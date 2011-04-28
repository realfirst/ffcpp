class IntegerSet {
public:
  IntegerSet() {
    sizeMax = 10;
    data = new int[sizeMax];
    currentSize = 0;
  }
  ~IntegerSet() {
    delete[] data;
  }

  void add(int i) {
    if (currentSize == sizeMax) {
      int *tmp = new int[sizeMax*2];
      for (int k = 0; k < sizeMax; k++) {
	tmp[k] = data[k];
      }
      delete[] data;
      sizeMax = sizeMax*2;
      data = tmp;
    }
    data[currentSize++] = i;
  }

  bool contains(int i) {
    for (int k = 0; k < currentSize; k++) {
      if (i == data[k]) {
        return true;
      }
    }
    return false;
  }
private:
  int sizeMax, currentSize;
  int *data;
};
