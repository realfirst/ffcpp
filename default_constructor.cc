class Something
{
public:
  Something() {};
  //  virtual ~Something();
};

class SomethingElse
{
public:
  SomethingElse(int x) {};
  //  virtual ~SomethingElse();
};

int main(int argc, char *argv[])
{
  Something x;
  SomethingElse y;
  return 0;
}
