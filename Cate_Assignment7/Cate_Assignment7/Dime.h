#ifndef Dime_H
#define Dime_H
#include "Coin.h"

class Dime : public Coin 
{
	double d_value = .1;
	public :
		Dime();
};
#endif
