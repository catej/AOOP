#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
	public:
		Rectangle();
		void calculateArea(double);
		void calculateArea(double, double);
};

