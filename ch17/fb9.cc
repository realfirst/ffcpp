#include <iostream>

class Vector {     
 public:
  Vector(double *c, int d) {
    coord = new double[d];
    dim = d;
    for (int k = 0; k<dim; k++) {
      coord[k] = c[k];
    }
  }
  ~Vector() {
    delete coord;
  }

  bool operator == (const Vector &v) const {
    return dim == v.dim && coord == v.coord;
  }
 private:
  double *coord;
  double dim;
};

int main(int argc, char **argv) {
  double a[] = {0.1, 2.0, 3.5};
  Vector u(a, sizeof(a)/sizeof(double));
  Vector v(a, sizeof(a)/sizeof(double));
  if (u == v) {
    std::cout << "u is equal to v!!!" << std::endl;
  } else {
    std::cout << "u is not equal to v!!!" << std::endl;
  }
  
  return 0;
}

