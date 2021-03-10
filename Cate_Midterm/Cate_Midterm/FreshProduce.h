#pragma once
#include "Item.h"
class FreshProduce : public Item
{
	private:
		double pounds;
	public:
		void calcPrice();
		double getPounds();
		void setPounds(double);
		FreshProduce();
};						   

