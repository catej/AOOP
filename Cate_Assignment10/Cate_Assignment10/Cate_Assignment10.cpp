#include <iostream>
#include <fstream>
#include "Contact.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 10 - Contact list w/ char[]
*/

void readFromFile(Contact Contact[]) {

    fstream file;
    file.open("./Contacts.txt");
    if (file.is_open()) {
        string line;
        int count = 0;
        int lineNum = 0;
        while (getline(file, line)) {
            if (lineNum == 0) {
                Contact[count].setLastName(line);
            }
            else if (lineNum == 1) {
                Contact[count].setFirstName(line);
            }
            else if (lineNum == 2) {
                Contact[count].setFullName(string(Contact[count].getLastName()) + ", " + string(Contact[count].getFirstName()));
                Contact[count].setPhone(line);
                lineNum = -1;
                count++;
            }
            lineNum++;
        }
    }
}


void displayEntry(Contact contact) {
    cout << " Full Name : " << contact.getFullName() << endl;
    cout << "     Phone : " << contact.getPhone() << endl << endl;
}

void searchContacts(Contact contacts[], char contactToFind[20]) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(contacts[i].getFirstName(), contactToFind) == 0 ||
            strcmp(contacts[i].getLastName(), contactToFind) == 0||
            strcmp(contacts[i].getFullName(), contactToFind) == 0
        )
        {
            displayEntry(contacts[i]);
        }
    }
    getchar();
}

int main()
{
    Contact  contacts[10];
    readFromFile(contacts);

    string name = "search";
    cout << "~~~~~~~~~~~~~~~~~~ Main ~~~~~~~~~~~~~~~~~~ " << endl << endl;
    do
    {
        cout << "Enter a name to search(\"e\" to exit): ";
        getline(cin, name);

        if (name != "e") {
            char searchTerm[20];
            strcpy_s(searchTerm, name.c_str());
            cout << endl;
            searchContacts(contacts, searchTerm);
        }
    } while (name != "e");

    cout << "press enter to exit...";
    char end = getchar();
}