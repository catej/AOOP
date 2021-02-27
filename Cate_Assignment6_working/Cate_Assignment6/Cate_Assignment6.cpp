#include <iostream>
#include <iomanip>
#include <ctime>
#include "Player.h"
#include "Die.h"
#include "Cate_Assignment6.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 6 - Dice Game
*/

void displayWinner(Player &winner) {
    cout << "The winning player is player"<< winner.getPlayerNumber() << " amount = " << winner.getSumOfDice() << endl
         << endl;
    for (Die d : winner.dice) {
        cout << "die: " << winner.getSingleDieValue(d) << endl;
    }

}
void displayPlayers(Player players[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 6 == 0) {
            cout << fixed << setprecision(12) 
                 << players[i].getPlayerNumber() << ": " << players[i].getSumOfDice() << endl;
        }
        else {
            cout << fixed << setprecision(12)
                 << players[i].getPlayerNumber() << ": " << players[i].getSumOfDice() << "    ";
        }
    }
    cout << endl;
}

Player& getWinner(Player players[], int size) {
    Player &winner = players[0];
    for (int i = 0; i < size; i++) {
        players[i].play();
        if (players[i].getSumOfDice() > winner.getSumOfDice()) {
            winner = players[i];
        }
    }
    Player& player = winner;
    return player;
}

void setPlayerNumbers(Player team[], int size) {
    for (int i = 0; i < size; i++) {
        team[i].setPlayerNumber(i);
    }
}

int main() {

    srand((unsigned int)time(0));
    const int playersSize = 100;

    Player players[playersSize];
    setPlayerNumbers(players, playersSize);
    Player winner = getWinner(players, playersSize);
    displayPlayers(players, playersSize);
    displayWinner(winner);

    

    char end = getchar();
    return 0;
}
