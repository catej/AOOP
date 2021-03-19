#include <iostream>
#include "LinkedList.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 8 - Contact List
*/

void mainMenu(LinkedList * list) {
    int choice = -1;
    do {
        cout << "    MAIN MENU    \n"
             << "~~~~~~~~~~~~~~~~~\n"
             << "0) Add contact\n"
             << "1) Exit\n" 
             << "~~~~~~~~~~~~~~~~~\n"
             << "choice: ";
        cin >> choice;
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
    LinkedList * list = new LinkedList();
    mainMenu(list);

    char end = getchar();
    end = getchar();
}