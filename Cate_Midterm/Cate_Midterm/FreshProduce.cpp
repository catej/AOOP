#include "FreshProduce.h"

double FreshProduce::getPounds() {
	return pounds;
}
 
void FreshProduce::setPounds(double pounds) {
	this->pounds = pounds;
}

void FreshProduce::calcPrice() {
	setPrice(cost * pounds);
}