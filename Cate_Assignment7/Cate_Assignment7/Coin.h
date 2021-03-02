#ifndef Coin_H
#define Coin_H
#include <string>

using namespace std;

class Coin
{
	private:
		static double balance;
	protected:
		string sideUp;
		bool heads;
		double value;
		const string HEADS = "HEADS";
		const string TAILS = "tails";
	public:
		Coin(double v);
		void addBalance();
		static double getBalance();
		void toss();
		bool getHeads();
		string getSideUp();
};
#endif

