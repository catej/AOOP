#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;


/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 9 - The Presentation (Abstract Class, Virtual fulction, Polymorphism)
*/


void mainMenu() {
    int choice = -1;
    Shape *shape;

    while (choice != 0)
    {
        system("cls");
        cout << "Welcome to the Area Calculator" << endl
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl
         
             << "What kind of shape?" << endl
             << "1) Rectangle" << endl
             << "2) Circle" << endl
             << "3) Triangle" << endl << endl

             << "0) Exit" << endl
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
             << "Choice: ";

        string answer;
        getline(cin, answer);
        choice = stoi(answer);

        switch (choice)
        {
            case 1:
                cout << "Rectangle" << endl;
                shape = new Rectangle();
                break;
            case 2:
                cout << "Circle" << endl;
                // shape = new Circle();
                break;
            case 3:
                cout << "Triangle" << endl;
                // shape = new Triangle();
                break;
        }
        getchar();
    }
    system("cls");
}

int main()
{
    mainMenu();

    cout << "Press <enter> to exit program...";

    string end;
    getline(cin, end);
}
