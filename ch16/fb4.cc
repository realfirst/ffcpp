class A 
{     

 public:
  A()
  { something = new int(42); }
  ~A()
  { delete something; }
 private:
  int *something;
};

int main(int argc, char **argv) {
  A x;
  A y = x;
  return 0;
}
