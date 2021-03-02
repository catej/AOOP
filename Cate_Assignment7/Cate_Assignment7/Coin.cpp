#include "Coin.h"

Coin::Coin(double v) {
	value = v;
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