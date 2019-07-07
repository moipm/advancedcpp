#include <iostream>
#include <vector>

using namespace std;

int main() {

  auto texts = {"one", "two", "three"};

  for (auto text: texts) {
    cout << text << endl;
  }

  vector<int> numbers;
  numbers.push_back(5);
  numbers.push_back(6);
  numbers.push_back(89);
  numbers.push_back(53);

  for (auto number: numbers) {
    cout << number << endl;
  }

  string hello = "Hello";

  for (auto c: hello) {
    cout << c << endl;
  }

  return 0;
}