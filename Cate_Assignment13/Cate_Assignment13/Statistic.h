#pragma once
#include <string>

using namespace std;

class Statistic
{
	private:
		string monthYear;
		int searches;
	public:
		void setMonghYear(string);
		string getMonthYear();
		void setSearches(string);
		int getSearches();
};

