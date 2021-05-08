#include <iostream>
#include "Statistic.h"
#include <string>
#include <fstream>
#include <vector>


string GetFileName() {
    string fileName;

    cout << "Enter a file to read from(ex. SearchesForCupcakes.csv | names.txt): ";
    getline(cin, fileName);
    cout << endl;
    if (fileName == "1") {
        fileName = "SearchesForCupcakes.csv";
    }
    else if (fileName == "2") {
        fileName = "names.txt";
    }
    return fileName;
}

using namespace std;

int main()
{
    
    Statistic stat = Statistic();
    string fileName = GetFileName();

    ifstream myFile(fileName);
    
    string line;
    string month;
    if (myFile) {
        int index = 1;
        int count = 1;
        cout << "Reading from file: "<< fileName << endl;
        while (getline(myFile, line)) {
            
            if (index <= 20) {
                cout << "Line " << count << ": " << line << endl;
                index++;
            }
            else {
                index = 1;
                cout << "Press enter to continue...";
                getchar();
                system("cls");
                cout << "Reading from file: "<< fileName << endl;
            }
            count++;
        }
    }
    else {
        cout << "File not found..." << endl;
    }

    char end = getchar();
}
