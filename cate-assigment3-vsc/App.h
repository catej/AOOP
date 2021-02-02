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
            Menu();
            TakeOrder();
        }

    private:
    string stockPath = "Inventory.txt";

    void Menu()
    {
        cout << "Welcome to Wires\'R\'US\n" << "---------------------\n\n";
        cout << "Spools Available: " << GetStock() << "\n";
    }
    int GetStock()
    {
        fstream stockFile(stockPath);
        int stock;
        stockFile >> stock;
        stockFile.close();
        return stock;
    }
    void TakeOrder()
    {
        int spoolsToOrder;
        cout << "Spools to order: ";
        cin >> spoolsToOrder;
    }

};