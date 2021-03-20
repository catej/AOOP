#include <iostream>
#include "LinkedList.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 8 - Contact List
*/

void mainMenu(LinkedList *list) {
    int choice = -1;
    do {
        cout << "    MAIN MENU    \n"
             << "~~~~~~~~~~~~~~~~~\n"
             << "0) Add contact\n"
                "1) Display list\n"
             << "2) Exit\n" 
             << "~~~~~~~~~~~~~~~~~\n"
             << "choice: ";
        cin >> choice;
        switch(choice) {
            case 0:
                list->createNode();
                break;
            case 1:
                list->displayList();
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
    PersonNode* insertSpot = new PersonNode();

    person->setFName("Alisha");
    person->setLName("Luymes");
    person->setAddress("1");
    person->setPhone("4");

    insertSpot = list->findInsertSpot(person);
    list->addLink(person, insertSpot);

    person = new PersonNode();
    insertSpot = new PersonNode();

    person->setFName("Alba");
    person->setLName("Amen");
    person->setAddress("2");
    person->setPhone("1");

    insertSpot = list->findInsertSpot(person);
    list->addLink(person, insertSpot);
    
    person = new PersonNode();
    person->setFName("Jeff");
    person->setLName("Cate");
    person->setAddress("3");
    person->setPhone("3");

    insertSpot = list->findInsertSpot(person);
    list->addLink(person, insertSpot);

    {
    /*
    1408: ADD NEXT PERSON
    person = new PersonNode();
    person->setFName("Zill");
    person->setLName("zimmerman");
    person->setAddress("4");
    person->setPhone("5");

    insertSpot = list->findInsertSpot(person);
    list->addLink(person, insertSpot);
    1408 ADD THIS PERSON ^

    person = new PersonNode();
    person->setFName("Kobe");
    person->setLName("Briant");
    person->setAddress("5");
    person->setPhone("2");

    insertSpot = list->findInsertSpot(person);
    list->addLink(person, insertSpot);*/

    }

    list->displayList();

    char end = getchar();
    end = getchar();
}