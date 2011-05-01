class Polynomial {
 public:
  Polynomial(double *c, int d) : coeff(new double[d+1]), degree(d) {
    for (int k = 0; k <= d; k++) {
      coeff[k] = c[k];
    }
  }
  double value(double x) {
    double r = 0;
    for (int k = degree; k >= 0; k--) {
      r = coeff[k] + x*r;
    }
    return r;
  }
 protected:
  // We suspect we'll need those field in subclasses
  double *coeff;
  int degree;
};

class Function {
 public:
  // This is pure virtual
  virtual double eval(double x) = 0;
  // This calls the pure one
  double derivative(double x, double e) {
    return (eval(x+e) - eval(x-e))/(2*e);
  }
  // Let's define a derivate by default
  virtual double derivative(double x) {
    return derivative(x, 0.001);
  }
};

class FunctionPoly : public Function, public Polynomial {     
 public:
  FunctionPoly(double *c, int d) : Polynomial(c, d) {}
  double eval(double x) {
    return value(x);
  }
};

// Let's implement amalytic derivative now
class FunctionPolyAD : public FunctionPoly {     
 public:
  FunctionPolyAD(double *c, int d) : FunctionPoly(c, d) {}
  double derivative(double x) {
    double r = 0;
    for (int k = degree; k >= 1; k--) {
      r = k*coeff[k] + x*r;
    }
    return r;
  }
};



