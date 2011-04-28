#include <iostream>
#include <cmath>

double *normalize(double *a, int d) {
  // First we compute the norm of the vector
  double s = 0.0;
  for (int k = 0; k < d; k++) {
    s += a[k] * a[k];
  }
  s = sqrt(s);

  // Then we declare a result vector
  double *result = new double[d];

  // And we fill it with the normalized components
  for (int k = 0; k < d; k++) {
    result[k] = a[k] / s;
  }
  return result;
}

int main(int argc, char **argv) {
  int dim;
  std::cin >> dim;

  // Enter the vector
  double *v = new double[dim];
  for (int k = 0; k < dim; k++) {
    std::cin >> v[k];
  }

  // Computes the normalized version
  double *w = normalize(v, dim);

  // Prints it
  for (int k = 0; k < dim; k++) {
    std::cout << w[k] << ' ';//<< std::endl;
  }
  std::cout << std::endl;

  // Free everything (do NOT forget the vector returned by
  // the function)
  delete[] v;
  delete[] w;
  return 0;
}
