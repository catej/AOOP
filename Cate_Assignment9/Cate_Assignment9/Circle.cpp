#include "Circle.h"

Circle::Circle() {
	radius = 0;
	height = 0;
}

void Circle::calculateArea(double radius) {
	area = M_PI * pow(radius, 2); // Circle
}

void Circle::calculateArea(double radius, double height) {
	double lateralArea = (2 * M_PI * radius) * height; // Cylinder
	double baseArea = 2 * M_PI * pow(radius, 2);
	area = lateralArea + baseArea;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}

double Circle::getRadius() {
	return radius;
}

void Circle::setHeight(double height) {
	this->height = height;
}
double Circle::getHeight() {
	return height;
}

void Circle::setShape(string shape) {
	this->shape = shape;
}

string Circle::getShape() {
	return shape;
}