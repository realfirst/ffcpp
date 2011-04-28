#include <iostream>

using namespace std;


class Vector3d {
 public:
  // We use the defualt copy constructor and = operator 
  Vector3d() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
  }
  Vector3d(double xx, double yy,double zz) {
    x = xx;
    y = yy;
    z = zz;
  }

  Vector3d sum(const Vector3d &v) const {
    return Vector3d(x+v.x,y+v.y, z+v.z);
  }

  Vector3d product(double k) const {
    return Vector3d(k*x, k*y, k*z);
  }

  double scalar(const Vector3d &v) const {
    return x*v.x + y*v.y + z*v.z;
  }

  ostream &print(ostream &s) const {
    return s << '[' << x << ',' << y << ',' << z << ']';
  }
  // virtual ~Vector3d();
 private:
  double x, y, z;
};

Vector3d operator + (const Vector3d &v1, const Vector3d &v2) {
  return v1.sum(v2);
}

double operator * (const Vector3d &v1, const Vector3d &v2) {
  return v1.scalar(v2);
}

Vector3d operator * (double k, const Vector3d &v) { 
  return v.product(k);
}

Vector3d operator * (const Vector3d &v, double k) {
  return v.product(k);
}

ostream &operator << (ostream &s, const Vector3d &v) {
    v.print(s);
    return s;
}

int main(int argc, char **argv) {
  Vector3d v(1, 2, 3), w(-1.0, -1.0, 1.0);
  cout << v << ' ' << w << endl;
  cout << (v*w) << ' ' << (3*v + 5*w + (v*w)*w) << endl;
  return 0;
}



    
