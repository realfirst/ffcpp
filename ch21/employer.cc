#include <iostream>

using namespace std;

class Employer {     
 public:
  Employer(char *n) : name(n) {}
  // virtual tells the compiler that any call to this function
  // has to trace the real type of the object
  virtual void print(ostream &os) const {
    os << name;
  }
 private:
  char *name;
};

ostream &operator << (ostream &os,
                      const Employer &e) {
  e.print(os);
  return os;
}

class RichGuy : public Employer {     
 public:
  RichGuy(char *n, int s) : Employer(n), stocks(s) {}
  void print(ostream &os) const {
    Employer::print(os);
    os << " (this guy has " << stocks << " stocks!!)";
  }
 private:
  int stocks;
};

int main(int argc, char **argv) {
  RichGuy bill("Bill Gates", 1576354987);
  std::cout << bill << std::endl;
  return 0;
}
