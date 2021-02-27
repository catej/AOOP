#ifndef Player_H
#define Player_H
#include "Die.h"

using namespace std;

class Player
{
	private:
		int playerNumber;
		int sumOfDice;
	public:
		Die dice[20];
        Player();
        void setPlayerNumber(int);
        int getNumberOfDice();
        int getPlayerNumber();
        int getSingleDieValue(Die d);
        void sumDice();
        int getSumOfDice();
};
#endif