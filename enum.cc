#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  enum {FACULTY, STUDENT, VISTOR} status;
  status = STUDENT;
  std::cout << status + 14 << std::endl;
  return 0;
}
