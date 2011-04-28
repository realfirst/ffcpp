class B : public A
{     

 public:
  B() : A() {
    std::cout << "Constructor for B" << std::endl;
  }
  ~B()
  { std::cout << "Destructor for B\n" << std::endl; }
};
