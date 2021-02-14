#include "Game.h"

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 4 - Coin Game
*/

int main()
{
    unsigned int seed = time(0);
    srand(seed);

    Game game = Game();
    game.playGame();

    char exit = getchar();
    return 0;
}
