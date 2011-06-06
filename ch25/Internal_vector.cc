#include <iostream>

using namespace std;

class InternalVector {     
 public:
  double *data;
  int size;
  int nbref;
  
  InternalVector(double *d, int s) : data(new double[s]),
                                     size(s), nbref(0) {
    cout << " + Expensive allocation and copy" << endl;
    for (int k = 0; k < s; k++) {
      data[k] = d[k];
    }
  }

  ~InternalVector() {
    cout << " + Destruction" << endl;
    delete[] data;
  }

  void release() {
    if (--nbref == 0) {
      delete this;
    }
  }

  InternalVector *grab() {
    nbref++;
    return this;
  }

  InternalVector *own() {
    if (nbref == 1) {
      return this;
    } else {
      nbref--;
      InternalVector *result = new InternalVector(data, size);
      result->nbref++;
      return result;
    }
  }
};

class Vector {     
 public:
  Vector();
  Vector(double *d, int s);
  Vector(const Vector &v);
  ~Vector();
  Vector & operator = (const Vector &v);
  inline double get(int k) const;
  inline void set(int k, double v);
  inline int size() const;
 private:
  InternalVector *internal;
};


Vector::Vector() {
  cout << " * Creating empty Vector" << endl;
  internal = 0;
}

Vector::Vector(double *d, int s) {
  cout << " * Creating Vector" << endl;
  internal = new InternalVector(d, s);
  internal->grab();
}

Vector::Vector(const Vector &v) {
  cout << " * Coping Vector" << endl;
  if (v.internal) {
    internal = v.internal->grab();
  } else {
    internal = 0;
  }
}

Vector::~Vector() {
  cout << " * Destorying Vector" << endl;
  if (internal) {
    internal->release();
  }
}

Vector & Vector::operator = (const Vector &v) {
  cout << " * Assigning Vector from Vector" << endl;
  if (this != &v) {
    if (internal) {
      internal->release();
      internal = v.internal->grab();
    }
  }
}

inline double Vector::get(int k) const {
  return internal->data[k];
}

inline void Vector::set(int k, double v) {
  if (v != internal->data[k]) {
    internal = internal->own();
    internal->data[k] = v;
  }
}

inline int Vector::size() const {
  return internal->size;
}

double sum(Vector v) {
  cout << "Entering sum()" << endl;
  double s = 0;
  for (int i = 0; i < v.size(); i++) {
	s += v.get(i);
  }
  cout << "Leaving sum()" << endl;
  return s;
}

int main(int argc, char **argv) {
  cout << "Doing double a[] = {1, 2, 3, 4, 5, 6, 7};" << endl;
  double a[] = {1, 2, 3, 4, 5, 6, 7};
  cout << "DOING Vector v(a, sizeof(a)/sizeof(double));" << endl;
  Vector v(a, sizeof(a)/sizeof(double));
  cout << "DING Vector w;" << endl;
  Vector w;
  cout << "DOING w = v;" << endl;
  w = v;
  cout << "DOING cout << sum(v) << \"\\n\";" << endl;
  cout << sum(v) << endl;
  cout << "DOING w.set(3, 2.1);" << endl;
  w.set(3, 2.1);
  cout << "FINISHED" << endl;
  
  return 0;
}
