#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test {
  string name;

public:
  Test (string name) : 
    name(name) {

  }

  ~Test() {
    //cout << "Object destroyed" << endl;
  }

  void print() const {
    cout << name << endl;
  }
};


int main() {

  // LIFO
  stack<Test> testStack;

  testStack.push(Test("Miguel"));
  testStack.push(Test("Juan"));
  testStack.push(Test("Susana"));

  cout << endl;
  /*
  * Invalid code, object is destroyed
  Test& test1 = testStack.top();
  testStack.pop();
  test1.print(); // Reference refers to destroyed objects
  */

  while (testStack.size() > 0) {
    Test& test = testStack.top();
    test.print();
    testStack.pop();
  }

  // FIFO
  queue<Test> testQueue;

  testQueue.push(Test("Miguel"));
  testQueue.push(Test("Juan"));
  testQueue.push(Test("Susana"));

  cout << endl;

  testQueue.back().print();

  cout << endl;

  while (testQueue.size() > 0) {
    Test& test = testQueue.front();
    test.print();
    testQueue.pop();
  }

  return 0;
}