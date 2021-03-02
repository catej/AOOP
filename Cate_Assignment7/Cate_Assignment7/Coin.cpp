#include "Coin.h"

using namespace std;

Coin::Coin(double v) {
	value = v;
	heads = false;
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
	
}