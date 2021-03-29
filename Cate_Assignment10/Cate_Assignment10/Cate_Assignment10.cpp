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
                Contact[count].setFirstName(line);
            }
            else if (lineNum == 1) {
                Contact[count].setLastName(line);
                
            }
            else if (lineNum == 2) {
                Contact[count].setFullName(string(Contact[count].getFirstName()) + ", " + string(Contact[count].getLastName()));
                Contact[count].setPhone(line);
                lineNum = -1;
                count++;
            }
            lineNum++;
        }
    }
}

void searchContacts(Contact Contacts[], char Contact[]) {
    // find and call display()
}

void displayEntry(Contact contact) {
    cout << " name : " << contact.getFullName() << endl;
    cout << "phone : " << contact.getPhone() << endl << endl;
}

int main()
{
    cout << "~~~ Main ~~~ " << endl << endl;
    Contact  contacts[10];
    readFromFile(contacts);

    Contact me = Contact();
    me.setFirstName("Jeff");
    me.setLastName("Cate");
    me.setFullName(string(me.getLastName()) + ", " +  string(me.getFirstName()));
    me.setPhone("414-444-4444");        

    for (Contact contact : contacts) {
        displayEntry(contact);
    }

    cout << "press enter to exit...";
    char end = getchar();
}