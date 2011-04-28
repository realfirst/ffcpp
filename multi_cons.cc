#include <iostream>
#include <cmath>

using namespace std;

class NormalizedVector {
public:
  NormalizedVector(double theta) {
    x = cos(theta) ;
    y = sin(theta);
  }

  NormalizedVector(double a, double b) {
    double d = sqrt(a*a + b*b);
    x = a/d;
    y = b/d;
  }
  double getX() { return x; }
  double getY() { return y; }
  //virtual ~NormalizedVector();
};
int main(int argc, char **argv) {
  
  return 0;
}
