#include "Cate_Assignment7.h"
#include <ctime>
#include <iomanip>
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

// plays each round: tossCoin => checkHeads => addBalance
void evaluateToss(Coin& coin) {
	coin.toss();
	if (coin.getHeads()) {
		coin.addBalance();
	}
	// displays data after each flip
	cout << fixed << setprecision(2) << (coin.getHeads() == 0 ? "false" : "true ") << " : " << coin.getValue() << " | balance: " << Coin::getBalance() << endl;
}

int main() {

	srand((unsigned int)time(0));

	bool gameOver = false;

	// initialize coins
	Coin quarter = Quarter();
	Coin dime = Dime();
	Coin nickel = Nickel();

	while (!gameOver) {
		evaluateToss(quarter);
		evaluateToss(dime);
		evaluateToss(nickel);

		//check if the game is over
		if (Coin::getBalance() >= 1) {
			gameOver = true;
		}
	}

	// display results of the game
	cout << "\nYou "
		 << (Coin::getBalance() == 1 ? "won!!" : "lost.") << endl
		 << "balance: " << Coin::getBalance() << endl;

	char end = getchar();
	return 0;
}
