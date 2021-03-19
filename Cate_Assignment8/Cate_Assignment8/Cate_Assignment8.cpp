#include <iostream>
#include "LinkedList.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 8 - Contact List
*/

void mainMenu(LinkedList *list) {
    int choice = 0;
    do {
        cout << "    MAIN MENU    \n"
             << "~~~~~~~~~~~~~~~~~\n"
             << "0) Add contact\n"
             << "1) Exit\n" 
             << "~~~~~~~~~~~~~~~~~\n"
             << "choice: ";
        //cin >> choice;
        switch(choice) {
            case 0:
                list->createNode();
                break;
            case 1:
                break;
        }
        system("cls");
        if (choice < 0 || choice > 1) {
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice >= 0 && choice < 2);
}

int main()
{
    LinkedList *list = new LinkedList();
    //mainMenu(list);


    PersonNode *person = new PersonNode();
    person->setFName("Alisha");
    person->setLName("Luymes");
    person->setAddress("1234");
    person->setPhone("414");

    list->addLink(person);

    person = new PersonNode();
    person->setFName("Jeff");
    person->setLName("Cate");
    person->setAddress("1234");
    person->setPhone("414");

    list->addLink(person);
    
    person = new PersonNode();
    person->setFName("Alba");
    person->setLName("Amen");
    person->setAddress("1234");
    person->setPhone("414");
    
    list->addLink(person);

    person = new PersonNode();
    person->setFName("Zill");
    person->setLName("zimmerman");
    person->setAddress("1234");
    person->setPhone("414");

    list->addLink(person);

    person = new PersonNode();
    person->setFName("Kobe");
    person->setLName("Briant");
    person->setAddress("1234");
    person->setPhone("414");

    list->addLink(person);

    list->displayList();

    char end = getchar();
    end = getchar();
}