#include <iostream>
#include <ctime>
#include "Item.h"
#include <vector>

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : Midterm
*/

double Item::delivery = 0;
double Item::tip = 0;
vector<Item*> cart;

void displayDeliveryMenu() {

	int choice = -1;

	while (choice < 1 || choice > 3) {
		system("cls");
		cout << "(1) Pick up\n"
			 << "(2) Delivery\n"
			 << "(3) Exit\n"
			 << "Your selection: ";
		
		cin >> choice; 

		system("cls");

		if (choice < 1 || choice > 3) {
			cout << "Invaid selection! Please try again.\n";
		}
	}

	if (choice == 2) {
		Item::delivery = 20;
		Item::tip = 5;
	}
}

void displayMainMenu() {
	system("cls");
	int choice = -1;

	while (choice != 4) {
		cout << "(1) Fresh Produce\n"
			 << "(2) Meat and Seafood\n"
			 << "(3) Frozen Foods\n"
			 << "(4) Check Out\n"
			 << "Your selection: ";
		
		cin >> choice;

		system("cls");


		switch (choice) {
			case 1:
				//displayFresh();
				cout << "Not Implimented" << endl;
				break;
			case 2:
				cout << "Not Implimented" << endl;
				//displayMeat();
				break;
			case 3:
				cout << "Not Implimented" << endl;
				//displayFrozen();
				break;
		}

		if (choice < 1 || choice > 4) {
			cout << "Invaid selection! Please try again.\n";
		}
	}
}


int main()
{
	displayDeliveryMenu();
	displayMainMenu();
	cout << "Tip: " << Item::tip << "\n"
		 << "Delivery: " << Item::delivery << "\n";
	
	char end = getchar();
	end = getchar();
	return 0; 
}