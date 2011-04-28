#ifndef _SIMPLEWINDOW_H_
#define _SIMPLEWINDOW_H_

class SimpleWindow {
public:
  SimpleWindow(char *name, int w, int h);
  ~SimpleWindow();

  int getWidth();
  int getHeight();

  void color(float red, float green, float blue);
  void drawPoint(int x, int y);
  void drawLine(int x1, int y1, int x2, int y2);
  void Circle(int x, int y, int r);
  void drawText(char *s, int x, int y);
  void fillRectangle(int x, int y, int w, int h);
  void show();
  void fill();
  /* virtual ~Name(); */
};

#endif /* _SIMPLEWINDOW_H_ */
