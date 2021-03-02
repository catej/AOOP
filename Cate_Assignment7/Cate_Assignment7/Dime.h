#ifndef Dime_H
#define Dime_H
#include "Coin.h"

class Dime : public Coin 
{
	const double value = .10;
	public :
		Dime();
};
#endif
