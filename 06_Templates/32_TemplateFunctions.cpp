#include <iostream>

using namespace std;

template<typename T>
void print(T n) {
  cout << n << endl;
}

int main() {
  print<string>("hola");
  print<int>(5);
  print("prueba");
  print(6);

  return 0;
}
