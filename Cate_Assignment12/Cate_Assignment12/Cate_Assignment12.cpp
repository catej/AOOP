#include <iostream>
#include <istream>
#include "LinkedList.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 8 - Contact List
*/

struct customInvalidIntgerExcemption : public std::exception
{
    const char* what() const throw ()
    {
        return "Error: Invalid integer.";
    }
};

int getNodeToDelete(LinkedList* list) {
    PersonNode* nodeToReturn = new PersonNode();
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
    i = 0;
    string choice;
    cout << "Select id to delete: ";
    getline(cin, choice);
    int nodeToFind = stoi(choice);
    return nodeToFind;
}

PersonNode* createNode() {
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

void mainMenu(LinkedList* list) {

    string choice = "-1";
    do {
        try {
                        
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
                PersonNode* node = createNode();
                PersonNode* insertSpot = list->findInsertSpot(node);
                list->addLink(node, insertSpot);
            }
            else if (choice == "1") {
                list->displayList();
            }
            else if (choice == "2") {
                int nodeToDelete = getNodeToDelete(list);
                if (nodeToDelete == 0) {
                    list->setHead(list->getHeadPtr()->getNext());
                }
                else if (nodeToDelete == 1) {
                    list->getHeadPtr()->setNext(list->getHeadPtr()->getNext()->getNext());
                }
                else {
                    int i = 2;
                    PersonNode* prev = list->getHeadPtr()->getNext();
                    PersonNode* cur = list->getHeadPtr()->getNext()->getNext();
                    while (nodeToDelete != i)
                    {
                        prev = cur;
                        cur = cur->getNext();
                        i++;
                    }
                    prev->setNext(cur->getNext());
                }
            }
            else {
                throw customInvalidIntgerExcemption();
            }
        }
        catch (customInvalidIntgerExcemption e) {
            cout << e.what() << endl;
        }

    } while (choice != "3");
}

int main()
{
    try
    {
        LinkedList* list = new LinkedList();
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
        throw std::exception("Unknown error occured."); // create excemption to handle unknown errors 
    }
    catch (...) // catch unknown error
    {
        std::exception_ptr p = std::current_exception();
        cout << "Unknown error thrown" << endl ;
    }

    char end = getchar();
}