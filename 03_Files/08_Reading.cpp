#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream inFile;
    string inFileName = "text.txt";

    inFile.open("text.txt", ios::in);

    if (inFile.is_open())
    {
        string line;

        while(inFile) {
            getline(inFile, line);
            cout << line << endl;
        }
        
        inFile.close();
    }
    else
    {
        cout << "Could not create file: " << endl;
    }   

    return 0;
}
