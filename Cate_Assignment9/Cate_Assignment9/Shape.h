#pragma once
class Shape
{
	protected:
		int sides;
		bool areEqual;
		double area;
		void virtual calculateArea(double) = 0;
		void virtual calculateArea(double, double) = 0;

};

