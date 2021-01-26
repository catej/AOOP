#include <iostream>
#include <vector>
#include <string>
#include "Student.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 3
*/

Student GetStudent()
{
    string name;
    int age;
    double gpa;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your age(int): ";
    cin >> age;

    cout << "Please enter your gpa(double): ";
    cin >> gpa;

    Student student = Student(name, age, gpa);
    return student;
}

int main()
{
    cout << "Assignment 3 \n"
            "------------\n"
            "1) Create a class\n"
            "2) Instantiate objects\n"
            "3) Add objects to vector\n"
            "4) Create static class to display vector\n\n" ;

    Student student1 = Student("Ron", 70, 4.0);
    Student student2 = Student("Curtis", 65, 2.698);
    vector<Student> students{student1, student2};
    students.push_back(GetStudent());
    for(Student student : students){
        student.Display();
    }


    getchar();
    return 0;
}
