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

void displayMainMenu() {

	int choice = -1;

	while (choice < 0 || choice > 3) {
		cout << "(1) Pick up\n"
			 << "(2) Delivery\n"
			 << "(3) Exit\n"
			 << "Your selection: ";
		
		cin >> choice; 

		if (choice < 0 || choice > 3) {
			cout << "Invaid selection! Please try again.\n";
		}
	}

	if (choice == 2) {
		Item::delivery = 20;
		Item::tip = 5;
	}
}

int main()
{
	displayMainMenu();
	
	cout << "Tip: " << Item::tip << "\n"
		 << "Delivery: " << Item::delivery << "\n";
	
	char end = getchar();
	end = getchar();
	return 0; 
}