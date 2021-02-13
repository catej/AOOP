#include <iostream>
#include <string>
#include "Coin.h"

using namespace std;

class Game {
    private:
        const string HEADS = "HEADS";
        const string tails = "tails";
        bool gameOver;
        bool isWin;
        double playerBalance;
        Coin quarter;
        Coin dime;
        Coin nickel;

        bool checkIfGameOver() {
            return playerBalance >= 1.00 ? true : false;
        }
        bool checkForWin() {
            return playerBalance == 1.00 ? true : false;
        }

    public:
        Game(){
            quarter = Coin(.25);
            dime = Coin(.10);
            nickel = Coin(.05);
            playerBalance = 0;
            gameOver = false;
            isWin = false;
        }
        void test(){
            
            playerBalance = 1;
            cout << "1: " << checkForWin() << "\n";

            playerBalance = 1.00;
            cout << "1: " << checkForWin() << "\n";

            playerBalance = 1.0;
            cout << "1: " << checkForWin() << "\n";

            playerBalance = .99;
            cout << "0: " << checkForWin() << "\n";

            playerBalance = 1.05;
            cout << "0: " << checkForWin() << "\n";

            playerBalance = 1.10;
            cout << "0: " << checkForWin() << "\n";

            playerBalance = 1.25;
            cout << "0: " << checkForWin() << "\n";

            playerBalance = 1.15;
            cout << "0: " << checkForWin() << "\n";


        }
};