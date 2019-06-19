#include <iostream>
#include <fstream>

using namespace std;

int main() {

    fstream outFile;
    string outputFileName = "text.txt";

    outFile.open("text.txt", ios::out);

    if(outFile.is_open()) {
        outFile << "Hello World" << endl;
        outFile << 12345 << endl;
        outFile << "Prueba" << endl;
        outFile.close();
    }
    else {
        cout << "Could not create file: " << endl;
    }

    return 0;
}