#ifndef SlotMachine_H
#define SlotMachine_H
#include "Reel.h"
#include <array>

using namespace std;

class SlotMachine {
    public:
        SlotMachine();
        array<Reel, 3> reels;
        void play();

    private:
        void displayFaces();
};
#endif