#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Test {
  private:
    static const int SIZE=100;
    int* m_pBuffer{nullptr};

  public:
    Test() {
      m_pBuffer = new int[SIZE]{};
    }

    Test(int i) {
      m_pBuffer = new int[SIZE]{};

      for (int i = 0; i < SIZE; ++i) {
        m_pBuffer[i] = 7 * i;
      }
    }

    Test(const Test &other) {
      m_pBuffer = new int[SIZE]{};
      memcpy(m_pBuffer, other.m_pBuffer, SIZE * sizeof(int));
    }

    Test(Test &&other) {
      cout << "Move constructor" << endl;
      m_pBuffer = other.m_pBuffer;
      other.m_pBuffer = nullptr;
    }

    Test &operator=(const Test &other) {
      cout << "assignment" << endl;
      m_pBuffer = new int[SIZE]{};
      memcpy(m_pBuffer, other.m_pBuffer, SIZE * sizeof(int));
      return *this;
    }

    Test &operator=(Test &&other) {
      cout << "Move assignment" << endl;
      delete [] m_pBuffer;
      m_pBuffer = other.m_pBuffer;
      other.m_pBuffer = nullptr;

      return *this;
    }

    ~Test() {
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

	vector<Test> vec;
	vec.push_back(Test());

  Test test;
  test = getTest();

	return 0;
}
