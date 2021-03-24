#pragma once
class Shape
{
	protected:
		void virtual setDimensions() = 0;
		void virtual calculateArea(double) = 0;
		void virtual calculateArea(double, double) = 0;

};

