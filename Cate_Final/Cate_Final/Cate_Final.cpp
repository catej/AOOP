#include <iostream>
#include <iomanip>
#include <ctime>
#include "Item.h"
#include "FreshProduct.h"
#include "MeasuredProduct.h"
#include <vector>
#include <exception>

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


class myLimitException : public exception {
public:
	const char* what() const noexcept override {
		return "error detected!\nIncorrect integer input. Please try again.\n";
	}
};
class NotAValidNumber : public exception {
public:
	const char* what() const noexcept override {
		return "error detected!\nInput not an integer. Application will close.\n";
	}
};

bool displayDeliveryMenu() {

	system("cls");

	int choice;
	string answer;
	bool valid = false;
	while (!valid) {
		cout << "-- Delivery Menu --\n"
			<< "(1) Pick up\n"
			<< "(2) Delivery\n"
			<< "(3) Exit\n"
			<< "-------------------\n"
			<< "Your selection: ";

		cin >> answer;
		
		system("cls");
		
		try 
		{
			choice = stoi(answer);
			switch (choice) {
				case 1:
					valid = true;
					break;
				case 2:
					Item::setDelivery(20);
					Item::setTip(5);
					total += Item::getTip() + Item::getDelivery();
					valid = true;
					break;
				case 3:
					return false;
					break;
				default:
					throw myLimitException();
					break;
			}
			return true;
		}
		catch(myLimitException mLE)
		{
			cout << mLE.what();
		}
		catch(...){
			throw NotAValidNumber();
		}
	}
}

void getAmount(string quantity, FreshProduct* item) {
	bool valid = false;
	double num;
	string answer;
	while (!valid)
	{
		try {

			cout << "How many " << quantity << " of " << item->getName() << endl;
			cin >> answer;
			num = stoi(answer);
			if (num < 0) {
				throw myLimitException();
			}
			item->setCount(num);
			item->setPounds(num);
			valid = true;
		}
		catch (myLimitException e){
			cout << e.what();
		}
		catch (...) {
			throw NotAValidNumber();
		}
	}
}
void getAmount(MeasuredProduct* item) {
	double num;
	string answer;
	bool valid = false;
	while (!valid)
	{
		try {
			cout << "How many " << item->getName() << endl;
			cin >> answer;
			num = stoi(answer);
			if (num < 0) {
				throw myLimitException();
			}
			item->setCount(num);
			item->setQuantity(num);
			valid = true;
		}
		catch (myLimitException e) {
			cout << e.what();
		}
		catch (...) {
			throw NotAValidNumber();
		}
	}
}

void displayFresh() {
	int choice;
	string answer;
	bool valid = false;
	
	do {
		cout << "-------- Fresh Menu -------\n"
			 << "(1) Gala Apples    $3.99/lb\n"
			 << "(2) Banana         $0.48/lb\n"
			 << "(3) Grapes         $2.99/lb\n"
			 << "(4) Return to Main Menu\n"
			 << "---------------------------\n"
			 << "Your selection: ";

		cin >> answer;

		system("cls");
		FreshProduct* product = new FreshProduct();

		try {
			choice = stoi(answer);
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
				case 4:
					valid = true;
					break;
				default:
					throw myLimitException();
					break;

			}
			if (choice != 4) {
				getAmount("lbs", product);
				total += product->calcFullPrice();
				cart.push_back(product);
			}
		}
		catch (myLimitException mLE)
		{
			cout << mLE.what();
		}
		catch (...) {
			throw NotAValidNumber();
		}
		
	} while (!valid);
}

void displayMeat() {
	system("cls");
	int choice = -1;
	string answer;
	bool valid = false;

	do {
		cout << "-------- Meat Menu -------\n"
			<< "(1) Whole Chicken  $6.99/lb\n"
			<< "(2) Ground beef    $4.99/lb\n"
			<< "(3) Salmon         $9.99/lb\n"
			<< "(4) Return to Main Menu\n"
			<< "---------------------------\n"
			<< "Your selection: ";

		cin >> answer;

		system("cls");

		FreshProduct* product = new FreshProduct();
		try
		{
			choice = stoi(answer);

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
				case 4:
					valid = true;
					break;
				default:
					throw myLimitException();
					break;
			}
			if (choice != 4) {
				getAmount("lbs", product);
				total += product->calcFullPrice();
				cart.push_back(product);
			}
		}
		catch (myLimitException mLE)
		{
			cout << mLE.what();
		}
		catch (...) {
			throw NotAValidNumber();
		}
	} while (!valid);
}

void displayFrozen() {
	system("cls");
	int choice = -1;
	string answer;
	bool valid = false;

	do {
		cout << "------- Frozen Menu ------\n"
			<< "(1) Waffles           $6.99/lb\n"
			<< "(2) Pizza             $4.99/lb\n"
			<< "(3) Popsicles         $2.99/lb\n"
			<< "(4) Return to Main Menu\n"
			<< "---------------------------\n"
			<< "Your selection: ";

		cin >> answer;

		system("cls");
		MeasuredProduct* product = new MeasuredProduct();

		try
		{
			choice = stoi(answer);

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
				case 4:
					valid = true;
					break;
				default:
					throw myLimitException();
					break;
			}
			if (choice != 4) {
				getAmount(product);
				total += product->calcFullPrice();
				cart.push_back(product);
			}
		}
		catch (myLimitException mLE)
		{
			cout << mLE.what();
		}
		catch (...) {
			throw NotAValidNumber();
		}
	} while (!valid);
}

void displayMainMenu() {

	system("cls");
	bool valid = false;
	do {
		int choice;
		string answer;

		cout << "----- Main Menu ----\n"
			<< "(1) Fresh Produce\n"
			<< "(2) Meat and Seafood\n"
			<< "(3) Frozen Foods\n"
			<< "(4) Check Out\n"
			<< "--------------------\n"
			<< "Your selection: ";

		cin >> answer;
		
		system("cls");

		try
		{
			choice = stoi(answer);

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
				case 4:
					valid = true;
					break;
				default:
					throw myLimitException();
					break;
			}
		}
		catch (myLimitException mLE)
		{
			cout << mLE.what();
		}
		catch (...) {
			throw NotAValidNumber();
		}
	} while (!valid);
}

int main()
{
	// display menu works according to exception directions
	try {

		if (displayDeliveryMenu()) {
			
			displayMainMenu();
			
			if (!cart.empty()){
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
			}
			else {
				cout << "Cart is empty. ";
				cout << "Sorry to see you go.";
			}
		}
		else {
			cout << "Sorry to see you go.";
		}
	}
	catch (NotAValidNumber e)
	{
		cout << e.what();
	}
	catch (...) {
		cout << "Unhandled exception. Application will close...";
	}
	char end = getchar();
	end = getchar();

	return 0;
}
