#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Test {
  private:
    static const int SIZE=100;
    int* m_pBuffer;

  public:
    Test() {
      cout << "constructor" << endl;
      m_pBuffer = new int[SIZE]{};
      // memset(m_pBuffer, 0, sizeof(int)*SIZE);
    }

    Test(int i) {
      cout << "parameterized constructor" << endl;
      m_pBuffer = new int[SIZE]{};

      for (int i = 0; i < SIZE; ++i) {
        m_pBuffer[i] = 7 * i;
      }
    }

    Test(const Test &other) {
      cout << "copy constructor" << endl;

      m_pBuffer = new int[SIZE]{};
      memcpy(m_pBuffer, other.m_pBuffer, SIZE * sizeof(int));
    }

    Test &operator=(const Test &other) {
      cout << "assignment" << endl;
      m_pBuffer = new int[SIZE]{};
      memcpy(m_pBuffer, other.m_pBuffer, SIZE * sizeof(int));
      return *this;
    }

    ~Test() {
      cout << "destructor" << endl;
      delete [] m_pBuffer;
    }

    friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}

Test getTest() {
	return Test();
}

int main() {

	Test test1 = getTest();
	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

  Test& rTest1 = test1;
  //Test& rTest2 = getTest();
  const Test& rTest2 = getTest();

  Test test2(Test(1));

	return 0;
}
