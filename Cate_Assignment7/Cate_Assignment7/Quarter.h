#ifndef Quarter_H
#define Quarter_H
#include "Coin.h"
class Quarter : public Coin
{
	const double value = .25;
	public:
		Quarter();
};
#endif 

