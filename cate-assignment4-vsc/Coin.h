#include <string>

using namespace std;

class Coin {
    private: 
        bool heads;
        string sideUp;
        double value;
        const string HEADS = "HEADS";
        const string tails = "tails";

    public:
        Coin() {}
        Coin(double v) {
            value = v;
            toss();
        }
        bool getHeads(){
            return heads;
        }
        string getSideUp() {
            return sideUp;
        }
        double getValue() {
            return value;
        }
        void toss() {
            sideUp = rand() % 2 == 0 ? HEADS : tails;
            heads = sideUp == HEADS ? true: false;
        }

};