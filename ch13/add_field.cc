#include <iostream>

using namespace std;

class Student 
{     
 public:
  Student(char *n, int a) {
    name = n;
    age = a;
  }

  char *getName() {
    return name;
  }

  int getAge() {
    return age;
  }
  
 private:
  char *name;
  int age;
};

class ForiegnStudent : public Student {

 public:
  ForiegnStudent(char *n, int a, char *c) : Student(n, a) {
    country = c;  
  }
  char *getCountry() {
    return country;
  }
 private:
  char *country;
};

bool sameAge(Student s1, Student s2) {
  return s1.getAge() == s2.getAge();
}

int main(int argc, char **argv) {
  Student s1("Jack", 21);
  ForiegnStudent s2("Steven", 21, "UK");
  if (sameAge(s1, s2)) {
    std::cout << "sameAge(s1, s2) return " << sameAge(s1, s2) << std::endl;
  }
  return 0;
}
