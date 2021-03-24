#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
	protected:
		double length;
		double width;
		bool areEqual;
	public:
		Rectangle();
		void calculateArea(double);
		void calculateArea(double, double);
		void setLength(double);
		double getLength();
		void setWidth(double);
		double getWidth();
		void setAreEqual(bool);
		bool getAreEqual();
};

