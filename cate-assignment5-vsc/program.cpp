#include <iostream>
#include "Reel.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 5 - Slot Machine
*/

int main() {

    srand(time(0));

    Reel reel = Reel();
    cout << reel.getFace() << "\n";

    for (int  i = 0; i < 10; i++)
    {
        reel.spin();
        cout << reel.getFace() << "\n";
    }

    getchar();
    return 0;
}