#include <iostream>

using namespace std;

class Parent {
  public:
    void speak() {
      cout << "parent" << endl;
    }
};

class Brother: public Parent {

};

class Sister: public Parent {

};

int main() {

  Parent parent;
  Brother brother;

  Parent* ppb = &brother;
  Brother* pbb = static_cast<Brother *>(ppb);
  cout << pbb << endl;

  Parent &&p = static_cast<Parent &&>(parent);
  p.speak();

  return 0;
}