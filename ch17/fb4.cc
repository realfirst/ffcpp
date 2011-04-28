int kindOfLog2(int n) {
  if (n < 0) {
    return 1;
  } else
    return 1 + kindOfLog2(n/2);
}

int main(int argc, char **argv) {
  int k = kindOfLog2(987);
  return 0;
}
