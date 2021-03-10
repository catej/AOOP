#include "FreshProduct.h"

double FreshProduct::getPounds() {
	return pounds;
}
 
void FreshProduct::setPounds(double pounds) {
	this->pounds = pounds;
}

void FreshProduct::calcPrice() {
	setPrice(cost * pounds);
}