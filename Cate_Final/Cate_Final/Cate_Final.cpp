#include <iostream>
#include <iomanip>
#include <ctime>
#include "Item.h"
#include "FreshProduct.h"
#include "MeasuredProduct.h"
#include <vector>

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : Final
*/

using namespace std;

double Item::delivery = 0;
double Item::tip = 0;
vector<Item*> cart;
double total = 0;

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
		if (num < 0) {
			system("cls");
			cout << "Invalid amount";
		}
	}
	item->setCount(num);
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
	item->setCount(num);
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
			product->setPrice(3.99);
			break;
		case 2:
			product->setName("Bananas");
			product->setPrice(.49);
			break;
		case 3:
			product->setName("Grapes");
			product->setPrice(2.99);
			break;
		}

		if (choice < 1 || choice > 4) {
			cout << "Invaid selection! Please try again.\n";
		}
		else  if (choice != 4) {
			getAmount("lbs", product);
			total += product->calcFullPrice();
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
			product->setPrice(6.99);
			break;
		case 2:
			product->setName("Ground beef");
			product->setPrice(4.99);
			break;
		case 3:
			product->setName("Salmon");
			product->setPrice(9.99);
			break;
		}

		if (choice < 1 || choice > 4) {
			cout << "Invaid selection! Please try again.\n";
		}
		else  if (choice != 4) {
			getAmount("lbs", product);
			total += product->calcFullPrice();
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
			product->setPrice(6.99);
			break;
		case 2:
			product->setName("Pizza");
			product->setPrice(4.99);
			break;
		case 3:
			product->setName("Popsicles");
			product->setPrice(2.99);
			break;
		}

		if (choice < 1 || choice > 4) {
			cout << "Invaid selection! Please try again.\n";
		}
		else  if (choice != 4) {
			getAmount(product);
			total += product->calcFullPrice();
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
	} while (choice != 4);
	/*for (Item* item : cart) {
		total += item->getPrice();
	}*/
}

int main()
{	
	displayDeliveryMenu();
	total += Item::getTip() + Item::getDelivery();
	displayMainMenu();


	for (Item* item : cart) {
		cout << fixed
			 << setprecision(2) << setw(14) << item->getName()
			 << ":  $" << item->getPrice() << setw(8) 
			 << "  x"<< item->Amount() << setw(8)
			 << "$ " << item->getPrice()*item->Amount() << setw(7) << endl;
	}

	cout << fixed << setprecision(2) << "\n"
		 << setw(15) << "Tip:" << "  $" << setw(7) << Item::getTip() << "\n"
		 << setw(15) << "Delivery:" << "  $" << setw(7) << Item::getDelivery() << "\n"
		 << "\t _________________\n"
		 << setprecision(2) << setw(18) << "Total:  $" << setw(7) << total;

	char end = getchar();
	end = getchar();
	return 0;
}
