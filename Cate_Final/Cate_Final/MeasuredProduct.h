#pragma once
#include "Item.h"
class MeasuredProduct : public Item
{
private:
	double quantity;
public:
	void calcPrice();
	void setQuantity(double);
	double getQuantity();
	MeasuredProduct();
};