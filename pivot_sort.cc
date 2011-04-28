#include <iostream>

using namespace std;

// We sort in the array itself!
void pivotSort(int *a, int n) {
  int k, j;
  for (k = 0; k < n; k++) {
    for (j = k+1; j < n; j++) {
      if (a[k] > a[j]) {
        // Swap a[k] and a[j]
        int t = a[k];
        a[k] = a[j];
        a[j] = t;
      }
    }
  }
}

int main(int argc, char **argv) {
  int a[] = {23, 45, 23, 546, 679, 3, 4, 32, 567, 34, 23, 465, 
             78, 456, 23 };
  pivotSort(a, sizeof(a)/sizeof(int));
  for (int k = 0; k < sizeof(a)/sizeof(int); k++) {
    std::cout << a[k] << std::endl;
  }
  return 0;
}
