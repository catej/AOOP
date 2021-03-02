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
	Coin dime = Dime();


	char end = getchar();
	return 0;
}