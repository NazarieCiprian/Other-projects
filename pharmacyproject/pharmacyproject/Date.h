#pragma once
#include <string>
#include <sstream>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public:

	Date();
	Date(const int day, const int month, const int year);

	int getDay()const { return this->day; }
	int getMonth()const { return this->month; }
	int getYear()const { return this->year; }

	string toString();
};