#include <fstream>

using namespace std;

class Order {
private:
	// quantity variables
	int spoolsToOrder;
	int spoolsReadyToShip;
	int backOrder;
	// cost variables
	double shipping;
	double totalSpoolCharges;
	double shippingAndHandlingCharges;
	double totalThisShipment;

public:
	// Setters
	// quantity variables
	void SetSpoolsToOrder(int s) {
		spoolsToOrder = s;
	}
	void SetSpoolsReadyToShip(int s) {
		spoolsReadyToShip = s;
	}
	void SetBackOrder(int b) {
		backOrder = b;
	}
	// cost variables
	void SetShippingAndHandlingCharges(double s) {
		shippingAndHandlingCharges = s;
	}
	void SetTotalThisShipment(double t) {
		totalThisShipment = t;
	}
	void SetTotalSpoolCharges(double t) {
		totalSpoolCharges = t;
	}
	void SetShipping(double s) {
		shipping = s;
	}

	// Getters
	// quantity variables
	int GetSpoolsToOrder() {
		return spoolsToOrder;
	}
	int GetSpoolsReadyToShip() {
		return spoolsReadyToShip;
	}
	int GetBackOrder() {
		return backOrder;
	}
	// cost variables
	double GetShippingAndHandlingCharges() {
		return shippingAndHandlingCharges;
	}
	double GetTotalThisShipment() {
		return totalThisShipment;
	}
	double GetTotalSpoolCharges() {
		return totalSpoolCharges;
	}
	double GetShipping() {
		return shipping;
	}
};