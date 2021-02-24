#ifndef Player_H
#define Player_H
#include "Die.h"
#include <array>

using namespace std;

class Player
{
	private:
                array<Die, 19> dice;
                int playerNumber;
                int sumOfDice;
	public:
                Player();
                int getPlayerNumber();
                int getNumberOfDice();
                int getSingleDieValue(Die d);
                int getSumOfDice();
                Player& getWinner();
                void displayWinner();

};
#endif