#include <iostream>
#include "ring.h"

using namespace std;

int main() {

  ring<string> textring(3);

  textring.add("one");
  textring.add("two");
  textring.add("three");
  textring.add("four");
  textring.add("five");
  textring.add("six");

  // C++ 98
 
  for(ring<string>::iterator it = textring.begin(); it != textring.end(); ++it) {
    cout << *it << endl;
  }

  cout << endl;

  // C++ 11
  for(auto value: textring) {
    cout << value << endl;
  }

  return 0;
}