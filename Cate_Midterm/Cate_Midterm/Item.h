#pragma once
#include <string>

using namespace std;

class Item
{
	private:
		static double tip;
		static double delivery;
	
	protected: 
		string name;
		double price;

	public:
		static void setDelivery(double);
		static double getDelivery();
		static void setTip(double);
		static double getTip();
		void setName(string);
		string getName();
		void setPrice(double);
		double getPrice();
		Item(string);
};

