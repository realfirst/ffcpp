double nothing1(double x) {}
double nothing2(double &x) {}
double nothing3(const double &x) {}

int main(int argc, char **argv) {
  nothing1(3+4);
  nothing2(3+4);
  nothing3(3+4);
  
  return 0;
}
