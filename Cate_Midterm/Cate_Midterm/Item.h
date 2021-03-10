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
		double cost;

	public:
		Item();
		static void setTip(double);
		static double getTip();
		static void setDelivery(double);
		static double getDelivery();
		void setName(string);
		string getName();
		void setPrice(double);
		double getPrice();
		void setCost(double);
		double getCost();
};

