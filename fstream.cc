#include <iostream>
#include <fstream>

using namespace std;


void letSCount(ostream &s, int k) {
  for (int n = 0; n < k; n++) {
	s << n << '\n';
  }
}

int main(int argc, char **argv) {
  letSCount(cout, 50);
  ofstream myFile("count.txt");
  letSCount(myFile, 20);
  
  return 0;
}
