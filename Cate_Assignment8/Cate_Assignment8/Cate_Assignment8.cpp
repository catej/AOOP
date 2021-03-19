#include <iostream>
#include "LinkedList.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 8 - Contact List
*/

void mainMenu() {
    cout << "Main Menu" << endl;
}

int main()
{
    cout << "main()" << endl;
    mainMenu();
    LinkedList list = LinkedList();

    list.createNode();
    list.createNode();

    char end = getchar();
    end = getchar();
}