#include <iostream>
#include "SlotMachine.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 5 - Slot Machine
*/

int main() {

    srand(time(0));

    SlotMachine machine = SlotMachine();
    machine.displayFaces();

    getchar();
    return 0;
}