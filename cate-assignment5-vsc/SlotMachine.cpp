#include "SlotMachine.h"
#include <iostream>

SlotMachine::SlotMachine() { 
    reels = { Reel(), Reel(), Reel() };
}
void SlotMachine::displayFaces() {
    for (int i = 0; i < 3 ; i++)
    {
        cout << "*" << reels[i].getFace() << "";
    }
    cout << " *\n";           
}

void SlotMachine::play() {
    displayFaces();
}