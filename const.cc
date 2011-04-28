int main(int argc, char **argv) {
  const int x =15;
  // Ooooopsss, we try erase the value by accident
  bool cond = (x = 13);
  return 0;
}
