#include <iostream>
#include <fstream>
#include "Order.h"

using namespace std;

// shipping 10/spool;
// cost = 100/spool;

class Store {
    public:
        // ctor
        Store() {
            order = Order();

        }

        void Open()
        {
            GetCurrentInventory();
            DisplayMenu();
            TakeOrder();
            //ProcessOrder();
            DisplayOrderSummery();
        }

    private:
        string stockPath = "Inventory.txt";
        Order order;
        int inventory;
        int quantityOrdered;
        int shippingCost;

        void GetCurrentInventory()
        {
            fstream stockFile(stockPath);
            if (stockFile.is_open())
            {
                int inventory;
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
        //
        void TakeOrder()
        {
            cout << "Spools to order: ";
            cin >> quantityOrdered;
            cout << "Amount of any special shipping charges (per spool)\n"
                << "above the regular $10.00 per spool rate (0 for none): ";
            cin >> shippingCost;
        }
        void SetCurrentInventory(int currentInventory)
        {
            ofstream stockFile(stockPath);
            if (stockFile.is_open()) {
                
            }
        }
        void DisplayOrderSummery() {
            cout << "Spools in stock: " << inventory << "\n";
            cout << "Remaining inventory: " << (inventory - order.GetSpoolsToOrder()) << "\n" ;
        }
};