#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
	protected:
		void setDimensions();
		void calculateArea(double);
		void calculateArea(double, double);
};

