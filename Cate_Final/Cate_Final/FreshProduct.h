#pragma once
#include "Item.h"

using namespace std;

class FreshProduct : public Item
{
private:
	double pounds;
public:
	double calcFullPrice();
	double getPounds();
	void setPounds(double);
	int Amount();
	FreshProduct();
};

