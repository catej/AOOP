#include <iostream>
#include <ctime>
#include "Player.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 6 - Dice Game
*/

int main() {

    srand(time(0));

    getchar();
    return 0;
}

void displayWinner(Player winner) {
    cout << "Winner is Player#: " << winner.getPlayerNumber() << endl
         << "Total: "<< winner.getSumOfDice() << endl;
}
