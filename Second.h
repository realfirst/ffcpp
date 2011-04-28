#ifndef _SECOND_H_
#define _SECOND_H_

#include "First.h"


class Second : public First
{     

 public:
  Second(double z) :First(z) {};
  // {  }
  // ~Second()
  // {  }
  bool positiveAndNonNull() {
    return positive() && (getValue() != 0.0);
  }
 private:

};

#endif /* _SECOND_H_ */
