#include <string>

using namespace std;

class Reel {
    public:
        Reel() {
            spin();
        }
        string getFace() {
            return face;
        }
        void spin() {
            face = faces[rand() % 20 +1];
        }

    private:
        string faces[20] = {
            "   LEMON       ",
            "   CHERRY      ",
            "   BANANA      ",
            "   SEVEN       ",
            "   DIAMOND     ",
            "   BELL        ",
            "   HEART       ",
            "   STAR        ",
            "   STRAWBERRY  ",
            "   GRAPE       ",
            "   BELL        ",
            "   HORSESHOE   ",
            "   HEART       ",
            "   PEAR        ",
            "   ORANGE      ",
            "   TEN         ",
            "   KING        ",
            "   QUEEN       ",
            "   JACK        ",
            "   JOKER       "
        };
        string face;

};