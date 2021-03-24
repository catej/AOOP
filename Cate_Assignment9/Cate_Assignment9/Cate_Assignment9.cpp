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

void rectangleFactory() {
    cout << "           Rectangle          " << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    Rectangle rectangle = Rectangle();
    bool equal;
    string answer;

    cout << "Are all sides equal(y,n)? ";
    getline(cin, answer);
    equal = answer == "y" ? true : false;
    rectangle.setAreEqual(equal);

    if (equal) {
        cout << "What length are the sides? ";
        getline(cin , answer);
        rectangle.setLength((stod(answer));
        rectangle.calculateArea(rectangle.getLength());
    }
    else {

    }

    cout << "           Results            " << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "Side are equal : "<< (rectangle.getAreEqual() ? true : false) << endl
         << "        Length : " << rectangle.getLength() << endl
         << "         Width : " << rectangle.getWidth() << endl
         << "          Area : " << rectangle.getArea() << endl;


    getchar();

}

void mainMenu() {
    int choice = -1;

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
                rectangleFactory();
                break;
            case 2:
                cout << "Circle" << endl;
                //circleFactory();
                break;
            case 3:
                cout << "Triangle" << endl;
                //triangleFactory();
                break;
        }
        cout << "press enter to cycle again...";
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