#include <iostream>

using namespace std;

class Crazy 
{     
 public:
  double a, b;
};

istream & operator >> (istream &i, Crazy &c) {
  return i >> (c.a) >> (c.b);
}

int main(int argc, char **argv) {
  Crazy x;
  cin >> x;

  cout << x << endl;
  
  return 0;
}
