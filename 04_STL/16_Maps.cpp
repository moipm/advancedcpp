#include <iostream>
#include <map>

using namespace std;

int main() {

  map<string, int> ages;

  ages["Mike"] = 40;
  ages["Pepe"] = 20;
  ages["Victoria"] = 30;
  ages["Mike"] = 70;

  ages.insert(make_pair("Pedro", 100));

  cout << ages["Pepe"] << endl;
  if (ages.find("Vicky") != ages.end()) {
    cout << "Found Vicky" << endl;
  } 
  else {
    cout << "Key not found" << endl;
  }
  
  for(map<string,int>::iterator it = ages.begin(); it !=ages.end(); ++it) {
    pair<string, int> age = *it;
    cout << age.first << ": " << age.second << endl;

  }

  for(map<string,int>::iterator it = ages.begin(); it !=ages.end(); ++it) {
    cout << it->first << ": " << it->second << endl;
  }
  
  return 0;
}