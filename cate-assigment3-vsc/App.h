#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Order.h"

using namespace std;

// shipping 10/spool;
// cost = 100/spool;

class App {
    public:
        void Run()
        {
            GetCurrentInventory();
            DisplayMenu();
            TakeOrder();
        }

    private:
        string stockPath = "Inventory.txt";
        Order order = Order();
        void DisplayMenu()
        {
            cout << "Welcome to Wires\'R\'US\n"
                 << "---------------------\n\n";

            cout << "Spools Available: " << "\n";
        }

        void GetCurrentInventory()
        {
            fstream stockFile(stockPath);
            if (stockFile.is_open())
            {
                int inventory;
                stockFile >> inventory;
                order.SetInventory(inventory);
                stockFile.close();
            }
        }
        void SetCurrentInventory(int currentInventory)
        {

        }
        void TakeOrder()
        {
            int spoolsToOrder, backOrder;
            cout << "Spools to order: ";
            cin >> spoolsToOrder;
        }
};