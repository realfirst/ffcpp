#include <iostream>
#include <string>

using namespace std;

void something(string s) {
  cout << "s = [" << s << "]" << endl;
  s[0] = 'X';
  cout << "s = [" << s << "]" << endl;
}

int main(int argc, char **argv) {
  string s1 = "University";
  string s2 = " of ";
  string s3(" Chicago");
  string s4;
  s4 = s1 + s2;
  s4 += s3;
  cout << s4 << endl;
  s1 = s4.substr(11, 2);
  cout << s1 << endl;
  something(s1);
  cout << s1 << endl;
  return 0;
}
