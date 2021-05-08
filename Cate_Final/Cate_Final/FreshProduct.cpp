#include "FreshProduct.h"

FreshProduct::FreshProduct() {
	this->pounds = 0;
	this->count = 0;
}

double FreshProduct::getPounds() {
	return pounds;
}

void FreshProduct::setPounds(double pounds) {
	this->pounds = pounds;
}

double FreshProduct::calcFullPrice() {
	return price * count;
}

int FreshProduct::Amount() {
	return pounds;
}