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
    int num = -1;
    int count = 0;
    while (num != 0)
    {
        num = rand() % 20;
        count++;
    }
        cout << num << " | count: " << count;
    /*
    SlotMachine machine = SlotMachine();

    int tries = 0;

    while (!machine.getPlayerIsWinner()) {
        machine.play();
        tries++;
    }
    cout << tries << "to win.\n";
    */
    getchar();
    return 0;
}