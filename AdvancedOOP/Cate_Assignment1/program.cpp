#include <iostream>
#include <iomanip> 

using namespace std;

/*
*        STUDENT : Jeff Cate 
*       COURSE # : ITDEV185-900
*   ASSIGNEMNT # : 1
*/
int main()
{
    string month;
    int year;
    double totalCollected;
    double totalTax;
    double sales;
    double stateTax;
    double countyTax;
    string dash;
    dash = "-----------------------------";
    cout << "Enter the month, year, and amount collected(\"string int double \"): ";
    cin >> month >> year >> totalCollected;

    // calculations
    sales = totalCollected / 1.06;
    countyTax = sales * .02;
    stateTax = sales * .04;
    totalTax = sales * .06;

    // format/display output
    cout << fixed << setprecision(2);
    string header;
    header = "Month : " + month + " " + to_string(year) + "\n\n" + dash + "\n\n";
    cout << endl;

    cout<< header 
        << "Total Collected:  $ " << totalCollected << "\n\n"
        << "Sales:            $ " << sales << "\n\n"
        << "County Sales Tax: $ " << countyTax << "\n\n"
        << "State Sales Tax:  $ " << stateTax << "\n\n"
        << "Total Sales Tax:  $ " << totalTax;

    getchar();
    getchar();

    return 0; 
}