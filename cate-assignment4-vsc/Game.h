#include <iostream>
#include <string>
#include "Coin.h"

using namespace std;

class Game {
    private:
        const string HEADS = "HEADS";
        const string tails = "tails";
        bool gameOver;
        double playerBalance;
        Coin quarter;
        Coin dime;
        Coin nickel;

        
    public:
        Game(){
            quarter = Coin(.25);
            dime = Coin(.10);
            nickel = Coin(.05);
            playerBalance = 0;
            gameOver = false;
        }
};