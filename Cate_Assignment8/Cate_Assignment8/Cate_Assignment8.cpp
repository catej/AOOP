#include <iostream>
#include <istream>
#include "LinkedList.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 8 - Contact List
*/

PersonNode* getNodeToDelete(LinkedList* list) {
    PersonNode *node = new PersonNode();
    PersonNode* cur = list->getHeadPtr();
    int i = 0;
    system("cls");
    while (cur != NULL)
    {
        cout << "Id: " << i << endl;

        list->displayPersonNode(cur);
        i++;
        cur = cur->getNext();
    }

    return node;
}

PersonNode* createNode() {
    system("cls");
    cout << "~~~ CREATE NODE ~~~" << endl;
    PersonNode* node = new PersonNode();

    string first, last, phone, address, number = "";

    cout << "Enter first name: ";
    getline(cin, first);

    cout << "Enter last name: ";
    getline(cin, last);

    cout << "Enter phone number: ";
    getline(cin, phone);
    
    cout << "Enter complete address: ";
    getline(cin, address);
   
    node->setFName(first);
    node->setLName(last);
    node->setAddress(address);
    node->setPhone(phone);

    return node;

}

void mainMenu(LinkedList *list) {

    string choice = "-1";
    do {

        choice = -1;

        cout << "    MAIN MENU    \n"
              "~~~~~~~~~~~~~~~~~\n"
              "0) Add contact\n"
              "1) Display list\n"
              "2) Delete contact\n"
              "3) Exit\n" 
              "~~~~~~~~~~~~~~~~~\n"
              "choice: ";

        getline(cin, choice);

        if (choice == "0") {
            PersonNode *node = createNode();
            PersonNode *insertSpot = list->findInsertSpot(node);
            list->addLink(node, insertSpot);
        }
        else if (choice == "1") {
            list->displayList();
        }
        else if (choice == "2") {
            getNodeToDelete(list);
        }
        else {
            cout << "Invalid input! Try again!" << endl;
        }

    } while (choice != "3");
}

int main()
{
    LinkedList *list = new LinkedList();
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
    insertSpot = new PersonNode();
    
    person->setFName("Jeff");
    person->setLName("Cate");
    person->setAddress("3");
    person->setPhone("3");

    insertSpot = list->findInsertSpot(person);
    list->addLink(person, insertSpot);
    person = new PersonNode();
    insertSpot = new PersonNode();

    person->setFName("Zill");
    person->setLName("Zimmerman");
    person->setAddress("4");
    person->setPhone("5");

    insertSpot = list->findInsertSpot(person);
    list->addLink(person, insertSpot);
    person = new PersonNode();
    insertSpot = new PersonNode();

    person->setFName("Kobe");
    person->setLName("Briant");
    person->setAddress("5");
    person->setPhone("2");

    insertSpot = list->findInsertSpot(person);
    list->addLink(person, insertSpot);
    
    mainMenu(list);

    char end = getchar();
}