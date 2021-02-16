#include <iostream>
#include "SlotMachine.h"
#include <ctime>
#include <iostream>

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 5 - Slot Machine
*/

int main() {

    srand(time(0));
    SlotMachine machine = SlotMachine();

    int tries = 0;

    while (!machine.getPlayerIsWinner()) {
        machine.play();
        cout << "-\n";
        tries++;
    }
    cout << tries << "to win.\n";
    
    getchar();
    return 0;
}