#include "MeasuredProduct.h"

MeasuredProduct::MeasuredProduct() {
	this->quantity = 0;
}

void MeasuredProduct::setQuantity(double quantity) {
	this->quantity = quantity;
}

double MeasuredProduct::getQuantity() {
	return quantity;
}

void MeasuredProduct::calcPrice() {
	setPrice(cost * quantity);
}