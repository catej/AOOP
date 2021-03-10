#include "Item.h"

double Item::getTip() {
	return tip;
}

void Item::setTip(double tip) {
	Item::tip = tip;
}

double Item::getDelivery() {
	return delivery;
}

void Item::setDelivery(double delivery) {
	Item::delivery = delivery;
}

string Item::getName() {
	return name;
}

void Item::setName(string name) {
	this->name = name;
}

double Item::getPrice() {
	return price;
}

void Item::setPrice(double price) {
	this->price = price;
}