
#ifndef _FIRST_H_
#define _FIRST_H_

class First 
{     

 public:
  First(double y) {
    x = y;
  }
  bool positive() {
    return x >= 0.0;
  }

  double getValue() {
    return x;
  }
  // ~First()
  // {  }
 private:
  double x;
};

#endif /* _FIRST_H_ */
