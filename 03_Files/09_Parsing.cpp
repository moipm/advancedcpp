#include <iostream>
#include <fstream>

using namespace std;

int main() {

  fstream input;
  string filename = "stats.txt";

  input.open(filename, ios::in);

  if(!input.is_open()) {
    return 1;

  }

  while(input) {
    string line;
    getline(input, line, ':');
    
    int population;
    input >> population;

    //C++11 WhiteSpace
    input >> ws;

    if(!input) {
      break;
    }

    cout << line << " -- " << population << endl;
  }

  input.close();

  return 0;
}