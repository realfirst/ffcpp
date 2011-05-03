#include <iostream>

using namespace std;

class IntegerMapping {     
 public:
  virtual int maps(int x) const = 0;
};

class Negate : public IntegerMapping {     
 public:
  Negate() {}
  int maps(int x) const {
    return -x;
  }
};

class VectorMaping {     
 public:
  virtual int *maps(int *c, int s) const = 0;
};

class Shift : public VectorMaping {     
 public:
  Shift(int l) : k(l) {}
  int *maps(int *c, int s) const {
    int *result = new int[s];
    for (int j = 0; j < s; j++) {
      result[j] = c[(j+k)%s];
    }
    return result;
  }
 private:
  int k;
};

class MetaMaping : public VectorMaping {     
 public:
  MetaMaping(const IntegerMapping &m) : im(&m) {}
  int *maps(int *c, int s) const {
    int *result = new int[s];
    for (int k = 0; k < s; k++) {
      result[k] = im->maps(c[k]);
    }
    return result;
  }
 private:
  const IntegerMapping *im;
};

void print(const VectorMaping &vm, int *c, int s) {
  int *t = vm.maps(c, s);
  for (int j = 0; j < s; j++) {
	std::cout << t[j];
    if (j < s-1) {
      std::cout << " ";
    } else {
      std::cout << std::endl;
    }
  }
  delete[] t;
}

int main(int argc, char **argv) {
  int v[] = {1, 2, 3, 4};
  print(Shift(3), v, sizeof(v)/sizeof(int));
  print(MetaMaping(Negate()), v, sizeof(v)/sizeof(int));
  
  return 0;
}


