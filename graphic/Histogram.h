#include <iostream>
#include "swindow.h"

class Histogram : public SimpleWindow 
{     

 public:
  Histogram(int n);
  ~Histogram();
  void setBarValue(int k, double v);
 private:
  double *barValues;
  int nbars;
};
