#include "Medication.h"


Medication::Medication():medicationName(""),concentration(""),producer(""),stock(0),valability(Date(0,0,0)),price(0),isOtc(false)
{
}



Medication::Medication(const string & med, const string & conc, const string & prod, const int stock, const Date & val, const double price, bool otc):medicationName(med),concentration(conc),producer(prod),stock(stock),valability(val),price(price),isOtc(otc)
{
}

string Medication::toString()
{
	stringstream ss;
	ss << this->medicationName << "," << this->concentration << "," << this->producer;
	return ss.str();
}

istream & operator >> (istream & is, Medication & med)
{
	string line;
	getline(is, line);
	vector<string> tokens = tokenize(line, ',');
	if (tokens.size() != 7)
		return is;

	med.medicationName = tokens[0];
	med.concentration = tokens[1];
	med.producer = tokens[2];
	med.stock = stoi(tokens[3]);
	vector<string> datetokens = tokenize(tokens[4], '.');
	if (datetokens.size() != 3)
		return is;
	med.valability = Date(stoi(datetokens[0]), stoi(datetokens[1]), stoi(datetokens[2]));
	med.price = stod(tokens[5]);
	med.isOtc = stoi(tokens[6]);
	return is;
}

ostream & operator<<(ostream & os, Medication & med)
{
	os << med.medicationName << "," << med.concentration << "," << med.producer << "," << med.stock << "," << med.valability.toString() << "," << med.price << "," << med.isOtc << "\n";
	return os;
}
