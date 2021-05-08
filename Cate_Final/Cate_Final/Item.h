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
	int count;
	double cost;
	
public:
	Item();
	void setCount(int);
	int getCount();
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

	// UPDATES FOR FINAL: Item is now an abstract class
	virtual double calcFullPrice() = 0;
	virtual int Amount() = 0;

};

