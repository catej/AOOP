#include "FreshProduct.h"

FreshProduct::FreshProduct() {
	this->pounds = 0;
}

double FreshProduct::getPounds() {
	return pounds;
}

void FreshProduct::setPounds(double pounds) {
	this->pounds = pounds;
}

void FreshProduct::calcPrice() {
	setPrice(cost * pounds);
}