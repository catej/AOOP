#pragma once
#include "Item.h"

using namespace std;

class FreshProduct : public Item
{
	private:
		double pounds;
	public:
		void calcPrice();
		double getPounds();
		void setPounds(double);
		FreshProduct();
};						   

