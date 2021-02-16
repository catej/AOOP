#include "SlotMachine.h"
#include <iostream>

SlotMachine::SlotMachine() { 
    reels = { Reel(), Reel(), Reel() };
    playerIsWinner = false;
}
void SlotMachine::displayFaces() {
    cout << "**************************************************" << endl;
    for (Reel r: reels)
    {
        cout << "*" << r.getFace() << "";
    }
    cout << " *\n";
    cout << "**************************************************\n" << endl;
    if (playerIsWinner) {
        cout << "Winner!!!!\n" << endl;
    }
}

void SlotMachine::play() {
    pullLever();
    checkForWinner();
    displayFaces();
}

bool SlotMachine::getPlayerIsWinner() {
    return playerIsWinner;
}

void SlotMachine::pullLever() {
    for (Reel r : reels) {
        r.spin();
    }
}

void SlotMachine::checkForWinner() {
    playerIsWinner = ( reels[0].getFace() == reels[1].getFace() && 
                       reels[1].getFace() == reels[2].getFace()) ? true : false;
}