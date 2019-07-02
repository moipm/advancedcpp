#include <iostream>

using namespace std;

void test(int value) {
  cout << "Hola: " << value << endl;
}

int main() {
  test(3);

  void (*pTest)(int) = test;

  pTest(5);

  return 0;
}
