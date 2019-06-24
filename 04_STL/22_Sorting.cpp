#include <iostream>
#include <vector>

using namespace std;

class Test {
  int id;
  string name;

public:
  Test(): id(0), name("") {

  }

  Test (int id, string name): id(id), name(name) {

  }

  void print() const {
    cout << id << ": " << name << endl;
  }

  // bool operator<(const Test& other) const {
  //   return name < other.name;
  // }

  friend bool comp (const Test& a, const Test& b);
};

bool comp (const Test& a, const Test& b) {
  return a.name < b.name;
}

int main() {

  vector<Test> tests;

  tests.push_back(Test(5, "Miguel"));
  tests.push_back(Test(4, "Vic"));
  tests.push_back(Test(10, "Susana"));
  tests.push_back(Test(8, "Raul"));

  sort(tests.begin(), tests.end(), comp);
  
  for (int i = 0; i < tests.size(); ++i) {
    tests[i].print();
  }


  return 0;
}