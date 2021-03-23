#include <iostream>
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

    cout << "Welcome to the Area Calculator" << endl;
    switch (choice)
    {
        case 1:
            shape = new Rectangle();
            break;
    }
}

int main()
{
    mainMenu();
    char end = getchar();
}
