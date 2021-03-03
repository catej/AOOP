#ifndef Nickel_H
#define Nickel_H
#include "Coin.h"
class Nickel : public Coin
{
	double n_value = .05;
	public:
		Nickel();
};
#endif