class AnArray {
public:
  //  AnArray();
  //  virtual ~AnArray();
  int values[1000];
};

int maxByRef(AnArray &a) {
  int m = a.values[0];
  for (int i = 1; i < 1000; i++) {
    if (a.values[i] > m) {
      m = a.values[i];
    }
  }
  return m;
}

int main(int argc, char **argv) {
  AnArray a;
  int i, m;
  for (i = 0; i < 1000; i++) {
    a.values[i] = i;
  }
  for (i = 0; i < 100000; i++) {
    m = maxByRef(a);
  }

  return 0;
}
