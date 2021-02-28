#ifndef SlotMachine_H
#define SlotMachine_H
#include "Reel.h"
#include <array>

class SlotMachine {
public:
    SlotMachine();
    void play();
    bool getPlayerIsWinner();

private:
    array<Reel, 3> reels;
    bool playerIsWinner;
    void checkForWinner();
    void pullLever();
    void displayFaces();


};
#endif