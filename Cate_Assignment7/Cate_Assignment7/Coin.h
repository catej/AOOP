#ifndef Coin_H
#define Coin_H
#include <string>

using namespace std;

class Coin
{
	private:
		static double balance;
		string sideUp;
		bool heads;
		double value;
		const string heads = "HEADS";
		const string tails = "tails";
	public:
		Coin(double v);
		void addBalance();
		static double getBalance();
		void toss();
		bool getHeads();
		string getSideUp();
};
#endif

