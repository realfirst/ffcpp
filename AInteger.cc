#include <iostream>

using namespace std;

class AInteger {
public:
  AInteger() {
    value = 0;
  }

  AInteger(int i) {
    value = i;
  }

  AInteger(const AInteger &ai) {
    value = ai.value;
    std::cout << "  copy" << std::endl;
  }

  // As we have seen, this operator is also an expression.
  // To be consistent, we have to return a reference to the
  // result of the assignment, which is the object itself
  AInteger &operator = (const AInteger &ai) {
    value = ai.value;
    std::cout << "   =" << std::endl;
    return *this;
  }
  //  virtual ~AInteger();
private:
  int value;
};

void nothing(AInteger a, AInteger b, AInteger c) { }

int main(int argc, char **argv) {
  AInteger i(14), j;
  std::cout << "AInteger k = i;" << std::endl;
  AInteger k = i;
  std::cout << "k = i;" << std::endl;
  j = i;
  std::cout << "nothing(i);" << std::endl;
  nothing(i, j, k);
  return 0;
}
