#ifndef Player_H
#define Player_H
#include "Die.h"

using namespace std;

class Player
{
	private:
		Die dice[20];
		int playerNumber;
		int sumOfDice;
	public:
        void setPlayerNumber(int);
        Player();
        int getNumberOfDice();
        int getPlayerNumber();
        int getSingleDieValue(Die);
        int getSumOfDice();
        Player& getWinner();
        void displayWinner();

};
#endif