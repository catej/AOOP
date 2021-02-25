#include <iostream>
#include <ctime>
#include "Player.h"
#include "Cate_Assignment6.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 6 - Dice Game
*/

void setPlayerNubmers(Player team[], int size) {
    for (int i = 1; i <= size; i++) {
        team[i - 1].setPlayerNumber(i);
    }
}

int main() {

    srand((unsigned int)time(0));

    Player players[100];
    setPlayerNubmers(players, 100);

    char end = getchar();
    return 0;
}
