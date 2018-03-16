#include "ClientRepository.h"

ClientRepository::ClientRepository()
{
	this->bill = 0;
}

void ClientRepository::addMedication(const Medication & med)
{
	this->medications.push_back(med);
	this->bill = this->bill + med.getPrice();
}

void ClientRepository::writeToFile(const string & filename)
{
	ofstream file(filename);

	if (!file.is_open())
		return;
	for (auto it : this->medications)
	{
		file << it;
	}
	this->medications.clear();
	this->bill = 0;
	file.close();
}
