#include <iostream>
#include <typeinfo>

using namespace std;

int main() {

  string value;

  cout << typeid(value).name() << endl;

  decltype(value) name = "Bob";

  cout << typeid(value).name() << endl;
  cout << name << endl;

  return 0;
}