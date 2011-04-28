#include <iostream>

using namespace std;

class ADouble {
  double value;
public:
  ADouble(double v) {
    value = v;
  }
  void multiply(ADouble d) {
    value = value * d.value;
  }
  void squared() {
    multiply(*this);
  }
  double getValue() const {
    return value;
  }
};

int main(int argc, char **argv) {
  ADouble x(-12.0);
  x.squared();
  std::cout << x.getValue() << std::endl;
  return 0;
}
