#ifndef Quarter_H
#define Quarter_H
#include "Coin.h"

class Quarter : public Coin
{
	double q_value = .25;
	public:
		Quarter();
};
#endif 

