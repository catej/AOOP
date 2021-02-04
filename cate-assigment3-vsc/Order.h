#include <iostream>

using namespace std;

class Order {
	private:
		int inventory;
		int backOrder;
		int spoolsToOrder;

	public:
		Order(int i) {
			inventory = i;
		}
		Order()
		{

		}
		// Getters
		void SetInventory(int i) {
			inventory = i;
		}
		void SetBackOrder(int b) {
			backOrder = b;
		}
		void SetSpoolsToOrder(int s) {
			spoolsToOrder = s;
		}

		// Setters
		int GetInventory() {
			return inventory;
		}
		int GetBackOrder() {
			return backOrder;
		}
		int GetSpoolsToOrder() {
			return spoolsToOrder;
		}

};