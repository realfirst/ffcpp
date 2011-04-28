#include <iostream>

class SimpleClass {
public:
  SimpleClass(char *n, int v) {
    std::cout << " " << n << ".SimpleClass(" 
              << n << ", " << v << ")" << std::endl;
    name = n;
    value = v;
  }
  ~SimpleClass() {
    std::cout << " " << name << ".~SimpleClass()" << std::endl;
  }
  void changeValue(int v) {
    std::cout << " " << name << ".changeValue(" << v << ")" << std::endl;
    value = v;
  }
  int readValue() {
    std::cout << " " << name << ".readValue()" << std::endl;
    return value;
  }
  int copy(SimpleClass &sc) {
    std::cout << " " << name << ".copy(" << sc.name << ")" << std::endl;
    value = sc.value;
  }
private:
  char *name;
  int value;
};

int main(int argc, char **argv) {
  SimpleClass x("x", 12);
  SimpleClass y("y", 14);
  x.copy(y);
  std::cout << x.readValue() << std::endl;
  y.changeValue(10);
  std::cout << y.readValue() << std::endl;
  return 0;
}
