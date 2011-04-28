class AnInteger 
{     

 public:
  AnInteger(int v) : value(v) 
  {  }
  int getValue() {return value; }
  // ~AnInteger()
  // {  }
 private:
  int value;
};

class ADouble 
{     

 public:
  ADouble(double v) : value(v) 
  {  }
  double getValue() {return value;}
  // ~ADouble()
  // {  }
 private:
  double value;
};

class OneOfEach : public AnInteger, public ADouble
{     

 public:
  OneOfEach(int i, double d) : AnInteger(i), ADouble(d)
  {  }
  double sum() {
    return ADouble::getValue() + AnInteger::getValue();
  }
  // ~OneOfEach()
  // {  }
 // private:

};

int main(int argc, char **argv) {
  OneOfEach x(2, 3.0);
  double s = x.sum();
  // double u = x.getValue();
  double t = x.AnInteger::getValue();
  
  return 0;
}
