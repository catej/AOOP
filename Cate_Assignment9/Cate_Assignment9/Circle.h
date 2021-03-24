#pragma once
#include "Shape.h"
#define _USE_MATH_DEFINES
#include<cmath>

class Circle : public Shape
{
	protected:
		double radius;
		double height;
	public:
		Circle();
		void calculateArea(double);
		void calculateArea(double, double);

};

