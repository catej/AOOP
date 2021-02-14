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
        void flipEachCoin() {
            quarter.toss();
            dime.toss();
            nickel.toss();
        }
        void evaluateCoinFlips() {
            playerBalance += quarter.getHeads() ? quarter.getValue() : 0;
            playerBalance += dime.getHeads() ? dime.getValue() : 0;
            playerBalance += nickel.getHeads() ? nickel.getValue() : 0;
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

            for (int i = 0; i < 11; i++)
            {
                flipEachCoin();
                displayResults(quarter);
                displayResults(dime);
                displayResults(nickel);
                evaluateCoinFlips();

                cout << "\n\nPlayer balance: " << playerBalance << "\n\n";
            }
        }
};