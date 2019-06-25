#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main() {

  Complex c1(3,2);
  Complex c2(3,2);

  if (c1 == c2) {
    cout << "Equals" << endl;
  }
  else {
    cout << "Not equal" << endl;
  }

  if (c1 != c2) {
    cout << "Not Equals" << endl;
  }
  else {
    cout << "Equals" << endl;
  }

  return 0;
}
