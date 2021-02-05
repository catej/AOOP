#include <iostream>
#include <fstream>
#include <iomanip>
#include "Order.h"

using namespace std;

// shipping 10/spool;
// cost = 100/spool;

class Store {
    public:
        // ctor
        Store() {
            order = Order();
            inventory = 0;
            quantityOrdered = 0;
            shippingCost = 0;
            
        }

        void Open()
        {
            GetCurrentInventory();
            DisplayMenu();
            TakeOrder(quantityOrdered, shippingCost);
            //
            // REQUIREMENT 3: (Default argument) determine whether to use default argument or input
            //
            ProcessOrder(quantityOrdered);
            if (shippingCost > 0) {
                shippingCost += 10;
                order = ComputeTotal(order, inventory, shippingCost);
            }
            else {
                order = ComputeTotal(order, inventory);
            }
            DisplayOrderSummery();
        }

    private:
        string stockPath = "Inventory.txt";
        Order order;
        int inventory, quantityOrdered, shippingCost;

        void GetCurrentInventory()
        {
            fstream stockFile(stockPath);
            if (stockFile.is_open())
            {
                stockFile >> inventory;
                stockFile.close();
            }
        }
        void DisplayMenu()
        {
            cout << "Welcome to Wires\'R\'US\n"
                 << "---------------------\n\n";
        }
        //
        // REQUIREMENT 1: (Function) Store input values in reference perameters.
        // * spools in stock stored in "Inventory.txt"
        //
        void TakeOrder(int& quantity, int& shipping)
        {
            cout << "Spools to order: ";
            cin >> quantity;
            cout << "Amount of any special shipping charges (per spool)\n"
                << "above the regular $10.00 per spool rate (0 for none): ";
            cin >> shipping;
        }

        // Ordinarily I would set order.SetSpoolsToOrder() from TakeOrder(),
        // but to fufill requirement 1 I use this method to update the order object
        // that uses abstraction and encapsulateion with the use of getters/setters 
        // which cannot be passed as referece like so:  TakeOrder(int& order.SetSpoolsToOrder() ...)
        void ProcessOrder(int spoolsOrdered) {
            order.SetSpoolsToOrder(spoolsOrdered);
            order.SetShipping(shippingCost);
        }
        //
        // REQUIREMENT 2: (Function) get values and compute
        // * "Order order" contains additional encapsulated data required to make calculations.
        //
        // REQUIREMENT 3: (Default argument implemented here)
        //
        Order ComputeTotal(Order orderToTotal, int inventoryOnHand, int shipping = 10) {
            //Calculate quantity totals
            if (orderToTotal.GetSpoolsToOrder() > inventory)
            {
                orderToTotal.SetBackOrder(orderToTotal.GetSpoolsToOrder() - inventory);
                orderToTotal.SetSpoolsReadyToShip(inventory);
            }
            else
            {
                orderToTotal.SetSpoolsReadyToShip(orderToTotal.GetSpoolsToOrder());
            }
            // calculate cost variables
            orderToTotal.SetTotalSpoolCharges(100 * orderToTotal.GetSpoolsReadyToShip());
            orderToTotal.SetShippingAndHandlingCharges(shipping * orderToTotal.GetSpoolsReadyToShip());
            orderToTotal.SetTotalThisShipment(orderToTotal.GetTotalSpoolCharges() + orderToTotal.GetShippingAndHandlingCharges());
            return orderToTotal;
        }
        void SetCurrentInventory(int currentInventory)
        {
            ofstream stockFile(stockPath);
            if (stockFile.is_open()) {
                cout << "ofsream opened\n";
                stockFile.close();
            }
        }
        void DisplayOrderSummery() {
            cout << "\n\n"
                
                 <<"---------------------------------\n"
                 << "THIS SECTION SHOULD BE FORMATTED \n"
                 << "ACCORDING TO THE OUTPUT IMAGES!! \n"
                 << "---------------------------------\n\n"

                 << "How many spools were ordered? " << order.GetSpoolsToOrder() << "\n"
                 << "How many spools are in stock? " << inventory << "\n\n"
                 << "Amount of any special shipping charges (per spool)\n"
                 << "above the regular $10.00 per spool rate (0 for none): " << order.GetShipping() << "\n\n"
                 
                 << "   *** Order Summary ***\n\n"
                 
                 << "Spools ordered :          " << order.GetSpoolsToOrder() << "\n"
                 << "Spools in this shipment:  " << order.GetSpoolsReadyToShip() << "\n";
              
            if (order.GetBackOrder() > 0){
                cout << "Spools back ordered:      " << order.GetBackOrder() << "\n";
            }

            cout << "\n" << fixed << setprecision(2)
                 << "   Charges for this shipment\n"
                 << "   -------------------------\n" 
                 << "Spool charges:         $" << setw(8) << order.GetTotalSpoolCharges() << "\n"
                 << "Shipping charges:      $" << setw(8) << order.GetShippingAndHandlingCharges() << "\n"
                 << "Total this shipment:   $" << setw(8) << order.GetTotalThisShipment() << "\n";
            
        }
};