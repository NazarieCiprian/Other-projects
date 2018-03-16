#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include "Date.h"
#include "utils.h"
using namespace std;

class Medication
{
private:
	string medicationName;
	string concentration;
	string producer;
	int stock;
	Date valability;
	double price;
	bool isOtc;

public:

	Medication();
	Medication(const string& med, const string& conc, const string& prod, const int stock, const Date& val, const double price, bool otc);

	string getMedicationName()const { return this->medicationName; }
	string getConcentration()const { return this->concentration; }
	string getProducer()const { return this->producer; }
	int getStock()const { return this->stock; }
	Date getValability()const { return this->valability; }
	double getPrice()const { return this->price; }
	bool getOtc() { return this->isOtc; }

	void setStock(int stock) { this->stock = stock; }
	void setIsOtc(bool otc) { this->isOtc = otc; }
	void setPrice(double price) { this->price = price; }

	string toString();

private:
	friend istream& operator >> (istream& is, Medication& med);
	friend ostream& operator<<(ostream& os, Medication& med);
	
};