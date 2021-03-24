#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() {
	this->sides = 4;
}

void Rectangle::calculateArea(double length) {
	cout << "Rectangle one parameter";
	area = length * length;
}

void Rectangle::calculateArea(double l, double w) {
	cout << "Rectangle two parameters";
	area = l * w;
}

void Rectangle::setLength(double length) {
	this->length = length;
}

double Rectangle::getLength() {
	return length;
}