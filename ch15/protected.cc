class Student 
{     

 public:
  Student(char *n, int a) {
    name = n;
    age = a;
  }
 protected:
  char *name;
  int age;

};

class ForeignStudent : public Student
{     

 public:
  ForeignStudent(char *n, int a, int nbytu) : Student(n, a)
                                              nbYearsInTheUS(nbytu)
  {  }
  // ~ForeignStudent()
  // {  }
 private:
  int nbYearsInTheUS;
};

int main(int argc, char **argv) {
  ForeignStudent student("Jingen", 19, 4);
  student.age = 13;
  return 0;
}

