#include <iostream>
#include <cstdlib>

class Matrix {
  int width, height;
  double *data;
public:
  Matrix();
  Matrix(int w, int h);
  Matrix(const Matrix &m);
  ~Matrix();
  bool operator == (const Matrix &m) const;
  Matrix &operator = (const Matrix &m);
  Matrix operator + (const Matrix &m) const;
  Matrix operator * (const Matrix &m) const;
  double &operator () (int i, int j);
  void print() const;
};

Matrix::Matrix() {
  width = 0;
  height = 0;
  data = 0;
}

Matrix::Matrix(int w, int h) {
  std::cout << "  Matrix::Matrix(int w, int h)" << std::endl;
  width = w;
  height = h;
  data = new double[width * height];
}

Matrix::Matrix(const Matrix &m) {
  std::cout << "  Matrix::Matrix(cosnt Matrix &m)" << std::endl;
  width = m.width;
  height = m.height;
  data = new double[width * height];
  for (int k = 0; k < width*height; k++) {
    data[k] = m.data[k];
  }
}

Matrix::~Matrix() {
  std::cout << "  Matrix::~Matrix()" << std::endl;
  delete[] data;
}

Matrix &Matrix::operator = (const Matrix &m) {
  std::cout << "  Matrix &Matrix::operator = (const Matrix &m)" << std::endl;
  if (&m != this) {
    delete[] data;
    width = m.width;
    height = m.height;
    data = new double[width * height];
    for (int k = 0; k < width * height; k++) {
      data[k] = m.data[k];
    }
    return *this;
  }
}

bool Matrix::operator == (const Matrix &m) const {
  std::cout << "  bool Matrix::operator == (const Matrix &m) const" << std::endl;
  if (width != m.width || height != m.height) {
    return false;
  }
  for (int k = 0; k < width*height; k++) {
    if (data[k] != m.data[k]) {
      return false;
    }
  }
  return true;
}

Matrix Matrix::operator + (const Matrix &m) const {
  std::cout << "  Matrix Matrix::operator + (const Matrix &m) const" << std::endl;
  if (width != m.width || height != m.height) {
    std::cerr << "Size error" << std::endl;
    abort();
  }

  Matrix result(width, height);
  for (int k = 0; k < width * height; k++) {
    result.data[k] = data[k] + m.data[k];
  }

  return result;
}

Matrix Matrix::operator * (const Matrix &m) const {
  std::cout << "  Matrix Matrix::operator * (const Matrix &m) const" << std::endl;
  if (width != m.height) {
    std::cerr << "Size error!" << std::endl;
    abort();
  }

  Matrix result(m.width, height);
  for (int i = 0; i < m.width; i++) {
    for (int j = 0; j < height; j++) {
      double s = 0;
      for (int k = 0; k < width; k++) {
	s += data[k + j*width] * m.data[i + m.width*k];
      }
      result.data[i + m.width*j] = s;
    }
  }

  return result;
}

double &Matrix::operator () (int i, int j) {
  std::cout << "  double &Matrix::operator () (int i, int j)" << std::endl;
  if (i < 0 || i >= width || j < 0 || j >= height) {
    std::cerr << "Out of bounds!" << std::endl;
    abort();
  }
  return data[i + width*j];
}


void Matrix::print() const {
  std::cout << "  void print() const" << std::endl;
  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      std::cout << " " << data[i + width*j];
    }
    std::cout << std::endl;
  }
}

int main(int argc, char **argv) {
  std::cout << "DOING Matirx m(3, 2), n(5, 3);" << std::endl;
  Matrix m(3, 2), n(5, 3);
  std::cout << "DOING Matirx x = m*n;" << std::endl;
  Matrix x = m*n;
  std::cout << "DOING m.print();" << std::endl;
  m.print();
  std::cout << "DOING m = n;" << std::endl;
  n = m;
  std::cout << "DOING n.print();" << std::endl;
  n.print();
  std::cout << "DOING x.print();" << std::endl;
  x.print();
  return 0;
}

