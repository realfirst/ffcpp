#include <iostream>
#include <cstdlib>


using namespace std;

class ForSureNonNull 
{     

 public:
  ForSureNonNull(double v) {
    if (v == 0) {
      std::cerr << "Are you crazy？！" << std::endl;
      abort();
    }
    value = v;
  }

  double getValue() const {
    return value;
  }
  
  // ~ForSureNonNull()
  // {  }

 private:
  double value;
};

double sum(const ForSureNonNull &n1,
           const ForSureNonNull &n2) {
  return n1.getValue() + n2.getValue();
}

ostream &operator << (ostream &s,
                      const ForSureNonNull &x) {
  return (s << x.getValue());
}

int main(int argc, char **argv) {
  ForSureNonNull x(15);
  double k = sum(x, x);
  std::cout << k << std::endl;
  
  return 0;
}
