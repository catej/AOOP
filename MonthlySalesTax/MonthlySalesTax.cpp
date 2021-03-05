#include<iostream>

using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name <<  "!\n";
    int ageInTen = age + 10;
    cout << "You will be " << ageInTen << " in 10 years.\n";

    return 0;
}