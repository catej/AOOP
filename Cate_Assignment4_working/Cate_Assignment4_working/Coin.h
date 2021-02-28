#include <string>

using namespace std;

class Coin {
private:
    bool heads;
    string sideUp;
    double value;

public:
    Coin() {}
    Coin(double v) {
        value = v;
        sideUp = (rand() % 10000000) % 2 == 0 ? "HEADS" : "tails";
        heads = sideUp == "HEADS" ? true : false;
    }
    bool getHeads() {
        return heads;
    }
    string getSideUp() {
        return sideUp;
    }
    double getValue() {
        return value;
    }
    void toss() {
        sideUp = (rand() % 10000000) % 2 == 0 ? "HEADS" : "tails";
        heads = sideUp == "HEADS" ? true : false;
    }

};