#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
	public:
		Rectangle();
	protected:
		void calculateArea(double);
		void calculateArea(double, double);
};

