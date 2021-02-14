#include <iostream>
#include <iomanip>
#include <string>
#include "Coin.h"

using namespace std;

class Game {
    private:
        int round;
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
                 << "        Winner: " << (checkForWin() ? "True" : "False") << "\n "
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
        void playRound() {
            flipEachCoin();
            evaluateCoinFlips();
            round++;
        }
        void displayRound() {
            displayResults(quarter);
            displayResults(dime);
            displayResults(nickel);
            cout << "Player balance: " << playerBalance << "\n";
        }
    public:
        Game(){
            quarter = Coin(.25);
            dime = Coin(.10);
            nickel = Coin(.05);
            playerBalance = 0;
            gameOver = false;
            isWin = false;
            round = 1;
        }
        void playGame() {
            while(!gameOver) {
                cout << "\n\nRound " << round << "\n";
                playRound();
                gameOver = checkIfGameOver();
                displayRound();
            }
            displayResults();
        }
};