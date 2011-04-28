class Polynomial {
 public:
  Polynomial(double *c, int s) {
    coeff = c;
    size = s;
  }
  Polynomial() {
    coeff = 0;
  }
  ~Polynomial() {
    // delete coeff;
  }
 private:
  double *coeff;
  int size;
};

int main(int argc, char **argv) {
  double a[] = {1, 2, 3, 4};
  Polynomial p(a, sizeof(a)/sizeof(double));
  return 0;
}

