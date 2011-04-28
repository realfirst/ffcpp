#include <iostream>

using namespace std;

class Something
{
  char *name;
public:
  Something(char *n) {
    name = n;
    cout << "Creating " << name << endl;
  };
  ~Something() {
    cout << "Destorying " << name << endl;
  }
  // virtual ~Something();
};

int main(int argc, char *argv[])
{
  Something x("x"), y("y");
  Something *z = new Something("z");
  Something w("w");
  { Something v("v");}
  delete z;
  return 0;
}
