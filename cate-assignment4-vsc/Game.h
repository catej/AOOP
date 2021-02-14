#include <iostream>
#include <iomanip>
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
        void displayResults() {

            cout << fixed << setprecision(2)
                 << "      Game Over: " << (gameOver ? "True" : "False") << "\n "
                 << "        Winner: " << (   isWin ? "True" : "False") << "\n "
                 << "Player balance: " << playerBalance << "\n";
        }
        void displayResults(Coin coin) {
            cout << fixed << setprecision(2)
                 << "Coin" << "\n"
                 << " Value: " << coin.getValue() << "\n"
                 << "isHead: " << coin.getHeads() << "\n"
                 << "sideUp: " << coin.getSideUp() << "\n";
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

        }
};