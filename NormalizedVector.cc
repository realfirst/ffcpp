#include <iostream>

#include <cmath>

using namespace std;

class NormalizedVector {
  double x;
  
  double y;
  void normalize() {
    double n = sqrt(x*x + y*y);
    x /=n;
    y /= n;
  }
public:
  NormalizedVector(double xx, double yy) {
    x = xx;
    y = yy;
    normalize();
  }
  /**
   * x Accessors
   * @{
   */
  /**
   * x Accessors
   * @{
   */
  double getx() const {
    return x;
  }
  void setx(double x) {
    x = x;
  }
  /**
   * @}
   */

  double gety() const {
    return x;
  }
  void sety(double x) {
    x = x;
  }
  /**
   * @}
   */
  
  
};

int main(int argc, char **argv) {
  NormalizedVector v(3.4, -2.3);
  std::cout << v.getx() << "+" << v.gety() << "i" << std::endl;
  return 0;
}
