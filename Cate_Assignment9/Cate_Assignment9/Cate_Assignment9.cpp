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

    cout << "Welcome to the Area Calculator" << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl
         
         << "What kind of shape?" << endl
         << "0) Rectangle" << endl
         << "1) Circle" << endl
         << "2) Triangle" << endl
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
            // shape = new Circle();
            break;
        case 3:
            // shape = new Triangle();
            break;
    }
}

int main()
{
    mainMenu();


    string end;
    getline(cin, end);
}
