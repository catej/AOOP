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

int main() {

    srand(time(0));

    Player players[100];
    cout << players[0].getNumberOfDice();
    char end = getchar();
    return 0;
}

void setPlayerNumber(Player team[]) {
    
}