#include <iostream>
#include <map>
#include <string>

using namespace std;

class Person {
  private:
    string name;
    int age;

  public:
    Person() :
        name(""), age(0) {
    }

    Person(const Person &other) {
      cout << "Copy constructor running!" << endl;
      name = other.name;
      age = other.age;
    }

    Person(string name, int age) :
        name(name), age(age) {
    }

    void print() {
      cout << name << ": " << age << endl;
    }
};

int main() {
	map<int, Person> people;

	people[04] = Person("Miguel", 40);
	people[31] = Person("Vic", 30);
	people[26] = Person("Raul", 20);

  people.insert(make_pair(55, Person("Rob", 45)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->first << ": " << flush;
		it->second.print();
	}

	return 0;
}