#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> strings;

  strings.push_back("one");
  strings.push_back("two");
  strings.push_back("three");

  for (int i=0; i < strings.size(); ++i) {
    cout << strings[i] << endl;
  }

  for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
    cout << *it << endl;
  }

  
  vector<int> enteros;

  enteros.push_back(1);
  enteros.push_back(2);
  enteros.push_back(3);
  enteros.push_back(4);

  for (vector<int>::iterator it = enteros.begin(); it != enteros.end(); ++it) {
    cout << *it << endl;
  }

  return 0;
}