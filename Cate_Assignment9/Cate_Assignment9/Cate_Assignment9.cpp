#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;


/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 9 - The Presentation (Abstract Class, Virtual function, Polymorphism)
*/

void rectangleFactory() {
    system("cls");
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
        rectangle.setLength(stod(answer));
        rectangle.setWidth(stod(answer));
        rectangle.calculateArea(rectangle.getLength());
        cout << endl;
    }
    else {
        cout << "What length of the rectangle? ";
        getline(cin, answer);
        rectangle.setLength(stod(answer));
        cout << "What width of the rectangle? ";
        getline(cin, answer);
        rectangle.setWidth(stod(answer));
        rectangle.calculateArea(rectangle.getLength(), rectangle.getWidth());
        cout << endl;
    }

    cout << "           Results            " << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "Side are equal : " << (rectangle.getAreEqual() ? "True" : "False") << endl
         << "        Length : " << rectangle.getLength() << endl;
    if (equal == false) {
        cout << "         Width : " << rectangle.getWidth() << endl;
    }
    cout << "          Area : " << rectangle.getArea() << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}

void circleFactory() {

    system("cls");
    cout << "            Circle           " << endl
        << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    Circle circle = Circle();
    string answer;
    cout << "Circle(1) or Cylinder(2)? ";

    getline(cin, answer);
    circle.setShape((stoi(answer) == 1) ? "circle" : "clyinder");
    
    if (circle.getShape() == "circle") {
        cout << "What is the radius? ";
        getline(cin, answer);
        circle.setRadius(stod(answer));
        cout << endl;
        circle.calculateArea(circle.getRadius());
    }
    else { 
        cout << "What radius of the circle? ";
        getline(cin, answer);
        circle.setRadius(stod(answer));
        cout << "What height of the Cylinder? ";
        getline(cin, answer);
        circle.setHeight(stod(answer));
        circle.calculateArea(circle.getRadius(), circle.getHeight());
        cout << endl;
    }

    cout << "           Results            " << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "Circle or Clyinder : " << circle.getShape() << endl
         << "            Radius : " << circle.getRadius() << endl;
    if (circle.getShape() == "clyinder") {
        cout << "            Height : " << circle.getHeight() << endl;
    }
    cout << "              Area : " << circle.getArea() << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
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
                circleFactory();
                break;
        }
        cout << "press <enter> to cycle again...";
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