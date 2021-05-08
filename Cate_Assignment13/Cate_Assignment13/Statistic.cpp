#include "Statistic.h"

void Statistic::setMonghYear(string monthYear)
{
	this->monthYear = monthYear;
}

string Statistic::getMonthYear()
{
	return monthYear;
}

void Statistic::setSearches(string searches)
{
	this->searches = stoi(searches);
}

int Statistic::getSearches()
{
	return searches;
}
