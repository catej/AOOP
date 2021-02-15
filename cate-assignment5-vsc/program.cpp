#include <iostream>
#include "SlotMachine.h"
#include <ctime>

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 5 - Slot Machine
*/

int main() {

    srand(time(0));

    SlotMachine machine = SlotMachine();
    machine.play();

    getchar();
    return 0;
}