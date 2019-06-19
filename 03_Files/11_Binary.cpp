#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)

struct Person {
  char name[50];
  int age;
  double weight;
};

#pragma pack(pop)

int main() {

  string fileName = "prueba.bin";
  Person someone = {"Pepe", 38, 1.80};

  //Write binary file
  ofstream outputFile;
  outputFile.open(fileName, ios::binary);

  if(outputFile.is_open()) {

    outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

    outputFile.close();
  } else {
      cout << "Could no create file " + fileName;
  }

  //Read binary file
  Person someoneElse = {};
  ifstream inputFile;
  inputFile.open(fileName, ios::binary);

  if(inputFile.is_open()) {

    inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

    inputFile.close();
  } else {
      cout << "Could no create file " + fileName;
  }

  cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.weight << endl;


  return 0;
}