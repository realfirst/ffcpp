#include <iostream>

using namespace std;


class A {     
 public:
  A(int y) {
    x = y;
  }
 private:
  int x;
};

class B {     
 public:
  B(char *s) {
    char *t = text;
    while (*t++ = *s++) {
      ;
    }
  }
 private:
  char text[8];
};

class C : public A, public B {     

 public:
  C(int v, char *s) : A(v), B(s)
  {  }
};

void printMemory(char *x, int s) {
  std::cout << "size = " << s  << std::endl;
  for (int k = 0; k<s; k++) {
	std::cout << int(x[k]);
    if (k < s-1) {
      cout << ' ';
    } else {
      cout << endl;
    }
  }
  cout << endl;
}

void refAsA(A &x) {
  std::cout << &x << std::endl;
}

void refAsB(B &x) {
  std::cout << &x << std::endl;
}

void refAsC(C &x) {
  std::cout << &x << std::endl;
}

// int main(int argc, char **argv) {
//   A a(123);
//   printMemory((char *) &a, sizeof(a));
//   B b("abcdefg");
//   printMemory((char *) &b, sizeof(b));
//   C c(123, "abcdefg");
//   printMemory((char *) &c, sizeof(c));
//   return 0;
// }

int main(int argc, char **argv) {
  C y(123, "abcdefg");
  refAsA(y);
  refAsB(y);
  refAsC(y);
  return 0;
}

/*
0x7fff5d88ddf0
0x7fff5d88ddf4
0x7fff5d88ddf0
*/
/*
size = 4
123 0 0 0

size = 8
97 98 99 100 101 102 103 0

size = 12
123 0 0 0 97 98 99 100 101 102 103 0
*/
