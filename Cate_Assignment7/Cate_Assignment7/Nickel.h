#ifndef Nickel_H
#define Nickel_H
#include "Coin.h"
class Nickel : public Coin
{
	const double value = .05;
	public:
		Nickel();
};
#endif