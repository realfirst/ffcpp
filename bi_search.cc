#include <iostream>

using namespace std;

// Returns the rank of x in a and -1 if not found
int rank2(int x, int *a, int n) {
  // let's optimize a bit
  if (a[0] > x) {
    return -1;
  }
  if (a[n-1] < x) {
    return -1;
  }

  int i, j;
  i = 0;
  j = n - 1;
  while (i+1 < j) {
    int k = (i+j)/2;
    if (a[k] <= x) {
      i = k;
    } else {
      j = k;
    }
  }
  if (a[i] == x) {
    return i;
  } else if (a[j] == x){
    return j;
  } else {
    return -1;
  }
}
int main(int argc, char **argv) {
  int a[] = {1, 5, 6, 7, 9, 12, 14, 23, 24, 24, 123};
  std::cout << rank2(14, a, sizeof(a)/sizeof(int)) << std::endl;
  return 0;
}
