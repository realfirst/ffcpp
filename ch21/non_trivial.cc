#include <iostream>
#include "swindow.h"

using namespace std;

class GraphicalObject {
 public:
  virtual int width() = 0;
  virtual int height() = 0;
  virtual void draw(SimpleWindow &win, int x0, int y0) = 0;
};

class Circle : public GraphicalObject {
 public:
  Circle(int rr) : r(rr) {}
  int width() {
    return 2*r;
  }
  int heigth() {
    return 2*r;
  }
  void draw(SimpleWindow &win, int x0, int y0) {
    win.color(0.0, 0.0, 0.0);
    win.drawCircle(x0+r, y0+r, r);
  }
 private:
  int r;
};

class Rectangle : public GraphicalObject {     
 public:
  Rectangle(int ww, int hh) : w(ww), h(hh) {}
  int width() {
    return w;
  }
  int height() {
    return h;
  }
  void draw(SimpleWindow &win, int x0, int y0) {
    win.color(0.0, 0.0, 0.0);
    win.drawLine(x0, y0, x0+w, y0);
    win.drawLine(x0+w, y0, x0+w, y0+h);
    win.drawLine(x0+w, y0+h, x0, y0+h);
    win.drawLine(x0, y0+h, x0, y0);
  }
 private:
  int w, h;
};

class Couple : public GraphicalObject {     
 public:
  Couple(bool v,
         GraphicalObject *oo1,
         GraphicalObject *oo2) : vertical(v), o1(oo1), o2(oo2) {}
  ~Couple() {
    delete o1;
    delete o2;
  }
  int max(int a, int b) {
    if (a >= b) {
      return a;
    } else {
      return b;
    }
  }

  int width() {
    if (vertical) {
      return max(o1->width(), o2->width());
    } else {
      return o1->width() + o2->width();
    }
  }

  int height() {
    if (vertical) {
      return o1->height() + o2->height();
    } else {
      max(o1->height(), o2->height());
    }
  }

  void draw(SimpleWindow &win, int x0, int y0) {
    o1->draw(win, x0, y0);
    if (vertical) {
      return o2->draw(win, x0, y0+o1->height());
    } else {
      o2->draw(win, x0 + o1->width(), y0);
    }
  }
 private:
  bool vertical;
  GraphicalObject *o1, *o2;
};

int main(int argc, char **argv) {
  GraphicalObject *g1 = new Rectangle(100, 50);
  // GraphicalObject *g2 = new Circle(80);
  // GraphicalObject *g3 = new Couple(true, g1, g2);
  // GraphicalObject *g4 = new Circle(34);
  // GraphicalObject *g5 = new Couple(false, g3, g4);
  SimpleWindow window("GraphicObject", g1->width(), g1->height());
  window.color(1.0, 1.0, 1.0);
  window.fill();
  g1->draw(window, 0, 0);
  window.show();
  cin.get();
  delete g1;
  
  return 0;
}

