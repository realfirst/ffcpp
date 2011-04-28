#ifndef SWINDOW_H
#define SWINDOW_H

#include <iostream>
#include <cstdlib>
#include <cmath>

#include <cstdio>
#include <unistd.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>
#include <X11/cursorfont.h>

class SimpleWindow {
  Display *dpy;
  Window window;
  Pixmap pixmap;
  GC gc;

protected:
  int width, height;
  
public:
  SimpleWindow(char *name, int w, int h);
  ~SimpleWindow();

  int getWidth();
  int getHeight();

  void color(int red, int green, int blue);
  void drawPoint(int x, int y);
  void drawLine(int x1, int y1, int x2, int y2);
  void drawCircle(int x, int y, int r);
  void show();
  void fill();
};

#endif
