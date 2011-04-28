class First 
{     

 public:
  First()
  {  }
  // ~First()
  // {  }
 private:
  First(int k) {}
};

class Second : public First
{     

 public:
  Second(int k) : First(k)
  {  }
  // ~Second()
  // {  }
 // private:

};

int main(int argc, char **argv) {
  Second x(3);
  return 0;
}
