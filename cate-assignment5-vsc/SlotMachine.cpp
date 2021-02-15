#include "SlotMachine.h"
#include <iostream>

SlotMachine::SlotMachine() { 
    reels = { Reel(), Reel(), Reel() };
}
void SlotMachine::displayFaces() {
    for (Reel r: reels)
    {
        cout << "*" << r.getFace() << "";
    }
    cout << " *\n";           
}

void SlotMachine::play() {
    displayFaces();
}