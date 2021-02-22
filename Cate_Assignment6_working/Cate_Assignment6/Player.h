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
        void setPlayerNumber();
	public:
        Player();
        Player(Player&);
        int getNumberOfDice();
        int getPlayerNumber(array<Player,99> Players);
        int getSingleDieValue(Die d);
        int getSumOfDice();
        Player& getWinner();
        void displayWinner();

};
#endif