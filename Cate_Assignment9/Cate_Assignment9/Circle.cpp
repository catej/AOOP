#include "Circle.h"

void Circle::calculateArea(double radius) {
	double baseArea = 2 * M_PI * pow(radius, 2);
}

void Circle::calculateArea(double radius, double height) {
	double lateralArea = (2 * M_PI * radius) * height;
	double baseArea = 2 * M_PI * pow(radius, 2);
	area = lateralArea + baseArea;
}
