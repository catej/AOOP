#include <iostream>
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
    cout << "~~~ Winner ~~~" << endl
         << "The winning player is player"<< winner.getPlayerNumber() << endl
         << endl;
    for (Die d : winner.dice) {
        cout << "die: " << winner.getSingleDieValue(d) << endl;
    }

}

Player& getWinner(Player players[], int size) {
    Player& player = players[0];
    for (int i = 0; i <= size; i++) {
        if (players[i].getSumOfDice() > player.getSumOfDice()) {
            player = players[i];
        }
    }
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

    

    char end = getchar();
    return 0;
}
