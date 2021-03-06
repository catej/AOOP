#include <iostream>
#include <fstream>
#include "Contact.h"
#include <exception>

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
    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (strcmp(contacts[i].getFirstName(), contactToFind) == 0 ||
            strcmp(contacts[i].getLastName(), contactToFind) == 0||
            strcmp(contacts[i].getFullName(), contactToFind) == 0
        )
        {
            found = true;
            displayEntry(contacts[i]);
        }
    }
    if (!found) {
        cout << "No matching contact found!!" << endl << endl;
    }

    cout << "Press <enter> to continue...";
    getchar();
    system("cls");
}

int main()
{
    Contact  contacts[10];
    readFromFile(contacts);

    string name = "search";
    do
    {
        cout << "~~~~~~~~~~~~~~~~~~ Main ~~~~~~~~~~~~~~~~~~ " << endl << endl;
        cout << "Enter a name to search(\"e\" to exit): ";
        getline(cin, name);
            if (name != "e") {
                char searchTerm[20];
                try
                {
                    strcpy_s(searchTerm, name.c_str());
                    cout << endl;
                    searchContacts(contacts, searchTerm);
                }
                catch (... )
                {
                    std::cerr << "exception caught: " << "Unknown error caught" << endl;
                    name = "";
                }
            }
    } while (name != "e");
}