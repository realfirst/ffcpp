#include <iostream>

#include "LinkedList.h"

using namespace std;

int main(int argc, char **argv) {
  LinkedList l;
  l.add(13);
  cout << l.contains(12) << " "
       << l.contains(13) << endl;
  for (int i = 0; i < 10; i++) {
	l.add(i);
  }
  cout << "[" << l.size() << "] ";
  l.print();

  LinkedList m = l;
  cout << (l == m) << endl;

  cout << "[" << m.size() << "]";
  m.print();
  m.add(19);

  cout << (l == m) << endl;
  return 0;
}
