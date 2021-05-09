#pragma once
#include "Item.h"
class MeasuredProduct : public Item
{
private:
	double quantity;
public:
	double calcFullPrice();
	void setQuantity(double);
	double getQuantity();
	MeasuredProduct();
	int Amount();
};