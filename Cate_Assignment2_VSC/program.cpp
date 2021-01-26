#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/*
*        STUDENT : Jeff Cate 
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 2
*/

int main()
{
    string courses[3];
    courses[0] =  "Intro to OOP";
    courses[1] =  "Advanced OOP"; 
    courses[2] =  "Web Development";
    int coursesLength;
    coursesLength = sizeof(courses)/ sizeof(courses[0]);
    
    int selectedCourse;
    selectedCourse = -1;
    
    while (selectedCourse < 0 || selectedCourse > coursesLength)
    {
        // menu
        cout << "Course List" << "\n"
            << "-----------"<< "\n";
        for (int i = 0; i <  coursesLength; ++i) 
        {   
            cout << i << ") " << courses[i] << "\n";
        }

        // choose file to read 
        cout << "Select a course(0-2): ";
        cin >> selectedCourse;

        // Error Message if invalid choice
        if (selectedCourse < 0 || selectedCourse > coursesLength)
        {
            cout << "Invalid selection! Try Again.\n";
        }
    }

    // assing filePath | assign course for display.
    string filePath;
    string course;
    switch (selectedCourse)
    {
    case 0:
        filePath = "rosters/Intro-To-Oop.txt";
        course = courses[0];
        break;
    case 1:
        filePath = "rosters/Advanced-Oop.txt";
        course = courses[1];
        break;
    case 2:
        filePath = "rosters/Web-Development.txt";
        course = courses[2];
        break;
    }

    ifstream rosterFile(filePath);

    string line;
    int rosterSize;
    rosterSize = -1;
    int fileSize;
    fileSize = 0;

    if(rosterFile.is_open())
    {
        //count lines
        while(getline(rosterFile, line))
        {
            fileSize++;
        }
        rosterFile.close();
        rosterFile.open(filePath);
        //get all lines
        string roster[fileSize];
        for (int i = 0; i < fileSize; i++)
        { 
            getline(rosterFile, roster[i]);
        }

        //prompt for roster size
        while (rosterSize < 2 || rosterSize > fileSize)
        {
            cout << "Please enter a roster size(2 - " << fileSize << "): ";
            cin >> rosterSize;
            cout << "\n";
        }
        
        
        cout << "Course Id: " << selectedCourse << "\n"
            << "Course Name: " << course << "\n"
            << "First Student: " << roster[0] << "\n"
            << "Last Student: " << roster[rosterSize-1] << "\n";
    }
    else
    {
        cout << "Something went wrong!\n";
    }

    // getchar();
    return 0;
}