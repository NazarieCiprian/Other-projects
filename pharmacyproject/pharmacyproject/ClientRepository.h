#pragma once
#include "Medication.h"
#include <fstream>
class ClientRepository
{
private:
	vector<Medication> medications;
	double bill;

public:

	ClientRepository();
	void addMedication(const Medication& med);
	vector<Medication> getAll() { return this->medications; }
	double getBill()const { return this->bill; }

	void writeToFile(const string& filename);
};