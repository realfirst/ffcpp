#include <cstdlib>


class BigThing 
{     

 public:
  BigThing() {
    for (int k = 0; k < 100; k++) {
      value[k] = 0;
    }
  }

  int set(int k, int v) {
    if ((k < 0 || k >= 1000)) {
      abort();
    }
    value[k] = v;
  }

  int get(int k) {
    if ((k < 0) || (k >= 1000)) {
      return 0;
    } else {
      return value[k];
    }
  }
  
  // ~BigThing()
 private:
  int value[1000];
  
  BigThing(const BigThing &bt) {
    for (int k = 0; k < 1000; k++) {
      value[k] = bt.value[k];
    }
  }

  BigThing &operator = (const BigThing &bt) {
    for (int k = 0; k < 1000; k++) {
      value[k] = bt.value[k];
    }
  }
};

int main(int argc, char **argv) {
  BigThing x;
  BigThing y =x;
  
  return 0;
}

