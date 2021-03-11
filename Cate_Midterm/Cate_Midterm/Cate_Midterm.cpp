#include <iostream>
#include <ctime>
#include "Item.h"
#include "FreshProduct.h"
#include "MeasuredProduct.h"
#include <vector>

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : Midterm
*/

using namespace std;

double Item::delivery = 0;
double Item::tip = 0;
vector<Item *> cart;

void displayDeliveryMenu() {

	system("cls");

	int choice = -1;
	
	while (choice < 1 || choice > 3) {
		cout << "-- Delivery Menu --\n"
			 << "(1) Pick up\n"
			 << "(2) Delivery\n"
			 << "(3) Exit\n"
			 << "-------------------\n"
			 << "Your selection: ";
		
		cin >> choice; 

		system("cls");

		if (choice < 1 || choice > 3) {
			cout << "Invaid selection! Please try again.\n";
		}
	}

	if (choice == 2) {
		Item::setDelivery(20);
		Item::setTip(5);
	}
}

void getAmount(string quantity, FreshProduct* item) {
	double num = -1;
	while (num < 0)
	{
		cout << "How many " << quantity << " of " << item->getName() << endl;
		cin >> num;
		if (num < 0){
			system("cls");
			cout << "Invalid amount";
		}
	}
	item->setPounds(num);
}
void getAmount(MeasuredProduct* item) {
	double num = -1;
	while (num < 0)
	{
		cout << "How many " << item->getName() << endl;
		cin >> num;
		if (num < 0) {
			system("cls");
			cout << "Invalid amount";
		}
	}
	item->setQuantity(num);
}

void displayFresh() {
	system("cls");
	int choice = -1;

	do {
		cout << "-------- Fresh Menu -------\n" 
			 << "(1) Gala Apples    $3.99/lb\n"
			 << "(2) Banana         $0.48/lb\n"
			 << "(3) Grapes         $2.99/lb\n"
			 << "(4) Return to Main Menu\n"
			 << "---------------------------\n"
			 << "Your selection: ";

		cin >> choice;

		system("cls");

		FreshProduct* product = new FreshProduct();
		switch (choice) {
			case 1:
				product->setName("Gala Apples");
				product->setCost(3.99);
				break;
			case 2:
				product->setName("Bananas");
				product->setCost(.48);
				break;
			case 3:
				product->setName("Grapes");
				product->setCost(2.99);
				break;
		}

		if (choice < 1 || choice > 4) {
			cout << "Invaid selection! Please try again.\n";
		}
		else  if (choice !=4) {
			getAmount("lbs", product);
			product->calcPrice();
			cart.push_back(product);
		}
	} while (choice != 4);
}

void displayMeat() {
	system("cls");
	int choice = -1;

	do {
		cout << "-------- Meat Menu -------\n"
			<< "(1) Whole Chicken  $6.99/lb\n"
			<< "(2) Ground beef    $4.99/lb\n"
			<< "(3) Salmon         $9.99/lb\n"
			<< "(4) Return to Main Menu\n"
			<< "---------------------------\n"
			<< "Your selection: ";

		cin >> choice;

		system("cls");

		FreshProduct* product = new FreshProduct();
		switch (choice) {
		case 1:
			product->setName("Whole Chicken");
			product->setCost(6.99);
			break;
		case 2:
			product->setName("Ground beef");
			product->setCost(4.99);
			break;
		case 3:
			product->setName("Salmon");
			product->setCost(9.99);
			break;
		}

		if (choice < 1 || choice > 4) {
			cout << "Invaid selection! Please try again.\n";
		}
		else  if (choice != 4) {
			getAmount("lbs", product);
			product->calcPrice();
			cart.push_back(product);
		}
	} while (choice != 4);
}

void displayFrozen() {
	system("cls");
	int choice = -1;

	do {
		cout << "------- Frozen Menu ------\n"
			<< "(1) Waffles           $6.99/lb\n"
			<< "(2) Pizza             $4.99/lb\n"
			<< "(3) Popsicles         $2.99/lb\n"
			<< "(4) Return to Main Menu\n"
			<< "---------------------------\n"
			<< "Your selection: ";

		cin >> choice;

		system("cls");

		MeasuredProduct* product = new MeasuredProduct();
		switch (choice) {
		case 1:
			product->setName("Waffles");
			product->setCost(6.99);
			break;
		case 2:
			product->setName("Pizza");
			product->setCost(4.99);
			break;
		case 3:
			product->setName("Popsicles");
			product->setCost(2.99);
			break;
		}

		if (choice < 1 || choice > 4) {
			cout << "Invaid selection! Please try again.\n";
		}
		else  if (choice != 4) {
			getAmount(product);
			product->calcPrice();
			cart.push_back(product);
		}
	} while (choice != 4);
}

void displayMainMenu() {
	system("cls");
	int choice = -1;

	do {
		cout << "----- Main Menu ----\n" 
			 << "(1) Fresh Produce\n"
			 << "(2) Meat and Seafood\n"
			 << "(3) Frozen Foods\n"
			 << "(4) Check Out\n"
			 << "--------------------\n"
			 << "Your selection: ";
		
		cin >> choice;

		system("cls");


		switch (choice) {
			case 1:
				displayFresh();
				break;
			case 2:
				displayMeat();
				break;
			case 3:
				displayFrozen();
				break;
		}

		if (choice < 1 || choice > 4) {
			cout << "Invaid selection! Please try again.\n";
		}
	} while(choice != 4);
}

int main()
{

	displayDeliveryMenu();
	displayMainMenu();
	for (Item *item : cart) {
		cout << item->getName() << " " << item->getPrice() << endl;
	}

	cout << "     Tip: " << Item::getTip() << "\n"
		 << "Delivery: " << Item::getDelivery() << "\n";
	
	char end = getchar();
	end = getchar();
	return 0; 
}