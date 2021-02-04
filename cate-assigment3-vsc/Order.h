#include <fstream>


using namespace std;

class Order {
	private:
		int backOrder;
		int spoolsToOrder;
		int spoolsReadyToShip;
		int shippingAndHandling;
		
	public:
		// Setters
		void SetBackOrder(int b) {
			backOrder = b;
		}
		void SetSpoolsToOrder(int s) {
			spoolsToOrder = s;
		}
		void SetSpoolsReadyToShip(int s) {
			spoolsReadyToShip = s;
		}
		void SetShippingAndHandling(int s) {
			shippingAndHandling = s;
		}

		// Getters
		int GetBackOrder() {
			return backOrder;
		}
		int GetSpoolsToOrder() {
			return spoolsToOrder;
		}
		int GetSpoolsReadyToShip() {
			return spoolsReadyToShip;
		}
		int GetShippingAndHandling() {
			return shippingAndHandling;
		}
};