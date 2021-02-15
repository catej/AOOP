#include "Reel.h"
#include <iostream>

class SlotMachine {
    private:
        Reel reels[3] = { Reel(), Reel(), Reel() };

    public:
        void displayFaces() {
            for (int i = 0; i < 3 ; i++)
            {
                cout << "*" << reels[i].getFace() << "";
            }
            cout << " *\n";           
        }
        
};