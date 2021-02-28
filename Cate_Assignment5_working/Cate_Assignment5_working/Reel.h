#ifndef Reel_H
#define Reel_H
#include <array>
#include <string>

using namespace std;

class Reel {
public:
    Reel();
    string getFace();
    void spin();

private:
    string face;
    array<string, 20> faces;

};
#endif