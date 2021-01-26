#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Student {
    public:
        Student(string name, int age, double gpa) { // Constructor with parameters
            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }
        void Display(){
            cout << "Student: " << name << "\n"
                <<  "    Age: " << age << "\n"
                << fixed << setprecision(2) << "    Gpa: " << gpa << "\n";
        }
    private:
        string name;  // Attribute
        int age;  // Attribute
        double gpa;      // Attribute

};