#include <iostream>

using namespace std;

int main() {

  int one = 1;
  int two = 2;
  int three = 3;

  // Capture one and two by value
  [one, two](){ cout << one << ", " << two << endl; }();

  // Capture all local variables by value
  [=](){ cout << one << ", " << two << endl; }();

  // Capture all local variables by value, but three by reference
  [=, &three](){ three = 7; cout << one << ", " << two << endl; }();
  cout << three << endl;

  // Capture all local variables by reference
  [&](){ three = 7; two = 8; cout << one << ", " << two << endl; }();
  cout << two << endl;

  // Capture all local variables by reference, but two and three by value
  [&, two, three](){ one = 9; cout << one << ", " << two << endl; }();
  cout << one << endl;

  return 0;
}
