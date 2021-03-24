#pragma once
#include "Shape.h"
#define _USE_MATH_DEFINES
#include<cmath>
#include <string>

using namespace std;

class Circle : public Shape
{
	protected:
		double radius;
		double height;
		string shape;

	public:
		Circle();
		void calculateArea(double);
		void calculateArea(double, double);
		void setRadius(double);
		double getRadius();
		void setHeight(double);
		double getHeight();
		void setShape(string);
		string getShape();

};

