#include <iostream>
#include "Contact.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 10 - Contact list w/ char[]
*/

void readFromFile(*Contact[]) {
    //read from file
}

void searchContacts(Contact Contacts[], char Contact[]) {
    // find and call display()
}

void displayEntry(Contact contact) {
    cout << " name : " << contact.getLastName() << ", " << contact.getFirstName() << endl;
    cout << "phone : " << contact.getPhone() << endl << endl;
}

int main()
{
    cout << "~~~ Main ~~~ " << endl << endl;
    Contact  contacts[10];

    Contact me = Contact();
    me.setFirstName("Jeff");
    me.setLastName("Cate");
    me.setPhone("414-444-4444");

    displayEntry(me);

    cout << "press enter to exit...";
    char end = getchar();
}