#include <iostream>
#include <ctime>
#include "Coin.h"
#include "Dime.h"
#include "Quarter.h"
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

	Coin dime = Dime();
	Coin quarter = Quarter();


	char end = getchar();
	return 0;
}