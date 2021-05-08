#include "Item.h"

Item::Item() {
	this->price = 0;
	this->count = 0;
}

void Item::setTip(double tip) {
	Item::tip = tip;
}

double Item::getTip() {
	return tip;
}

void Item::setDelivery(double delivery) {
	Item::delivery = delivery;
}

double Item::getDelivery() {
	return delivery;
}

void Item::setName(string name) {
	this->name = name;
}

string Item::getName() {
	return name;
}

void Item::setPrice(double price) {
	this->price = price;
}

double Item::getPrice() {
	return price;
}

int Item::getCount() {
	return count;
}
void Item::setCount(int count) {
	this->count = count;
}
void Item::setCost(double cost) {
	this->cost = cost;
}

double Item::getCost() {
	return cost;
}

