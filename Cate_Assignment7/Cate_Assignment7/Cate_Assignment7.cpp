#include <iostream>
#include <ctime>
#include "Coin.h"
#include "Dime.h"
#include "Quarter.h"
#include "Nickel.h"
#include "Cate_Assignment7.h"
using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 7 - Dice Game w/ Inheritance
*/

double Coin::balance = 0;

int main() {

	srand((unsigned int)time(0));

	Coin quarter = Quarter();
	Dime dime = Dime();
	Coin nickel = Nickel();
	

	quarter.toss();
	dime.toss();
	nickel.toss();

	cout << "q: " << quarter.getSideUp() << " : " << quarter.getValue() << endl
		 << "n: " << nickel.getSideUp()  << " : " << nickel.getValue() << endl
		 << "d: " << dime.getSideUp()	 << " : " << dime.getValue() << endl;

	char end = getchar();
	return 0;
}