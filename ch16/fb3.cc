class A 
{     

 public:
  A();
  void dummy(A x) {}
 private:
  A(const A &x) {}
};

int main(int argc, char **argv) {
  A y;
  y.dummy(y);
  return 0;
}
