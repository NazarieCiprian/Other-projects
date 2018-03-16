#pragma once

#include <fstream>
#include "Medication.h"
#include "Exception.h"
using namespace std;

class Repository
{
private:
	vector<Medication> medications;

public:
	Repository();
	

	int findMedication(const Medication& med);
	void addMedications(const Medication& med);
	void updateMedications(const Medication& med);
	void removeMedication(const Medication& med);

	vector<Medication> getAll() { return this->medications; }

private:
	void readFromFile();
	void writeToFile();
};