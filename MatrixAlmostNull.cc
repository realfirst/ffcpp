#include <cstdlib>


class MatrixAlmostNull {
  int width, height;
  int x, y;
  double v;
public:
  void init(int w, int h) {
    width = w;
    height = h;
    v = 0.0;
  }
  void destory() { }

  double getValue(int i, int j) {
    if ((i<0) || (i>=width) || (j<0) || (j>=height)) {
      abort();
    }
    if ((i == x) && (j == y)) {
      return v;
    } else {
      return 0.0;
    }
  }

  void setValue(int i, int j, double vv) {
    if ((i<0) || (i>=width) || (j<0) || (j>=height)) {
      abort();
    }
    if ((v == 0.0) || ((x == i) && (y == j))) {
      x = i;
      y = j;
      v = vv;
    } else {
      abort();
    }
  }
};
