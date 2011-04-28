#include <iostream>

using namespace std;


class First {
 public:
  First(double y) {
    x =y;
  }
  bool positive() {
    return x >= 0;
  }
  double getValue() {
    return x;
  }
 private:
  double x;
};

class Second : public First {     
 public:
  Second(double z) : First(z) {};
  bool positiveAndNonNull() {
    return positive() && (getValue() != 0.0);
  }
};

bool bothPositive(First x, First y) {
  return x.positive() && y.positive();
}

int main(int argc, char **argv) {
  Second x(3), y(3);
  if (bothPositive(x, y)) {
    std::cout << "bothPositive(x, y)" << "is True" << std::endl;
  }
  // bothPositive(x, y);
  return 0;
}

