#include <iostream>
#include <string>

using namespace std;

class Test
{
	int id; 
	string name;

public:
	Test() : id(0), name("") {
		
	}

	Test(int id, string name) : id(id), name(name) {
		
	}

	Test(const Test& other)	{
		*this = other;
	}

  void print() {
    cout << id << ": " << name << endl;
  }

	
	friend ostream& operator<<(ostream &out, const Test& test) {
		out << test.id << ": " << test.name;
		return out;
	}

};

int main() {

	Test test1(10, "Mike");
	cout << test1 << endl;

	return 0;
}
