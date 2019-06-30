#include <iostream>

using namespace std;

template<typename T>
void print(T n) {
  cout << "Template version: " << n << endl;
}

void print(int value) {
  cout << "Non-template version: " << value << endl;
}

template<typename T>
void show() {
  cout << T() << endl;
}

int main() {
  print<string>("hola");
  print<int>(5);
  print("prueba");
  print(6);
  show<double>();

  return 0;
}
