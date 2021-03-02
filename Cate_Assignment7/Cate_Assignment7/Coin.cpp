#include "Coin.h"

using namespace std;

Coin::Coin(double value) {
	this->value = value;
	toss();
}

double Coin::getBalance() {
	return balance;
}

bool Coin::getHeads() {
	return heads;
}

string Coin::getSideUp() {
	return sideUp;
}

void Coin::toss() {
	sideUp = ((rand() % 10000) % 2 == 0 ? HEADS : TAILS);
	heads = sideUp == HEADS ? true : false;
}