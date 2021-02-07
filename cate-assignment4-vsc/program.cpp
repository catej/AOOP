#include "Game.h"

// for testing only
#include <iostream> 
#include "Coin.h"
/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 4 - Coin Game
*/

int main()
{
    // Game game = Game()
    // game.playGame()



    // for testing only
    cout << "Hello\n\n";
    Coin quarter = Coin(.25);

    cout << "Quarter Created\n\n";
    double total = 0;
    for (double i = 0; i < 100; i++){
        quarter.toss();
        if(quarter.getHeads()) {
            total += quarter.getValue();
            if( i < 10){
                cout << "Toss 0" <<  i << " | Heads: " << quarter.getHeads() << " | sideUp: "  << quarter.getSideUp() << " | value: " << total << "\n"; 
            }
            else{
                cout << "Toss " <<  i << " | Heads: " << quarter.getHeads() << " | sideUp: "  << quarter.getSideUp() << " | value: " << total << "\n"; 
            }
        }
    }

    

    char exit = getchar();
    return 0;
}
