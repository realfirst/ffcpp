#include <iostream>

class First 
{     

 public:
  First(double y) {
    x = y;
  }
  bool positive() {
    return x >= 0.0;
  }

  double getValue() {
    return x;
  }
  // ~First()
  // {  }
 private:
  double x;
};

class Second : public First
{     

 public:
  Second(double z) :First(z) {};
  // {  }
  // ~Second()
  // {  }
  bool positiveAndNonNull() {
    return positive() && (getValue() != 0.0);
  }
 private:

};

bool bothPositive(First x, First y) {
  return x.positive() && y.positive();
}

int main(int argc, char **argv) {
  Second x(3), y(3);
  bothPositive(x, y);
  return 0;
}

