#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() {
	length = 0;
	width = 0;
	areEqual = false;
}

void Rectangle::calculateArea(double length) {
	area = length * length;
}

void Rectangle::calculateArea(double l, double w) {
	area = l * w;
}

void Rectangle::setLength(double length) {
	this->length = length;
}

double Rectangle::getLength() {
	return length;
}

void Rectangle::setWidth(double width) {
	this->width = width;
}

double Rectangle::getWidth() {
	return width;
}

void Rectangle::setAreEqual(bool areEqual) {
	this->areEqual = areEqual;
}

bool Rectangle::getAreEqual() {
	return areEqual;
}
