#include "Date.h"

Date::Date():day(0),month(0),year(0)
{
}

Date::Date(const int day, const int month, const int year):day(day),month(month),year(year)
{
}

string Date::toString()
{
	stringstream ss;
	ss << day << "." << month << "." << year;
	return ss.str();
}
