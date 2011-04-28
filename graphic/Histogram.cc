#include "Histogram.h"
#include "swindow.h"


Histogram::Histogram(int n) : SimpleWindow("Histogram", 256, 256) {
  nbars = n;
  barValues = new double[nbars];
}

Histogram::~Histogram() {
  delete[] barValues;
}

void Histogram::setBarValue(int k, double v) {
  int i, j;

  if ((k<0) || (k>=nbars) || (v<0)) {
    abort();
  }
  barValues[k] = v;
  double vmax = barValues[0];
  for (int k= 0; k<nbars; k++) {
	if (barValues[k] > vmax) {
      vmax = barValues[k];
    }
  }
  vmax = vmax*1.2;
  color(1.0, 1.0, 1.0);
  fill();
  color(0.0, 0.0, 0.0);
  for (int k = 0; k<nbars; k++) {
	i = (getWidth()*) / nbars;
    j = int(getHeight() * (1 - barValues[k]/vmax));
    drawLine(i, j, i+getWidth()/nbars, j);
  }
  show();
}
