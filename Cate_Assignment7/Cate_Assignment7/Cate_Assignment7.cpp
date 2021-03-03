#include "Cate_Assignment7.h"
#include <ctime>
#include <iostream>
#include "Coin.h"
#include "Quarter.h"
#include "Dime.h"
#include "Nickel.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 7 - Dice Game w/ Inheritance
*/

double Coin::balance = 0;

void evaluateToss(Coin& coin) {
	coin.toss();
	if (coin.getHeads()) {
		coin.addBalance();
	}
}

int main() {

	srand((unsigned int)time(0));

	bool gameOver = false;

	Coin quarter = Quarter();
	Coin dime = Dime();
	Coin nickel = Nickel();

	char end = getchar();
	return 0;
}

//cout << "q: " << quarter.getSideUp() << " : " << quarter.getValue() << endl
	//	 << "n: " << nickel.getSideUp()  << " : " << nickel.getValue() << endl
	//	 << "d: " << dime.getSideUp()	 << " : " << dime.getValue() << endl;
