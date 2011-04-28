#include <iostream>

using namespace std;

class Crazy {     

 public:
  // Crazy()
  // {  }
  // ~Crazy()
  // {  }
  // private:
  double a, b;
};

istream & operator >> (istream &i, Crazy &c) {
  return i >> (c.a) >> (c.b);
}

int main(int argc, char **argv) {
  Crazy x;
  cin >> x;
  cout << x.a << " "<< x.b << endl;
  return 0;
}
