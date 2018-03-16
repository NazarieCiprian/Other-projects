#include "Repository.h"

Repository::Repository()
{
	this->readFromFile();
}



int Repository::findMedication(const Medication & med)
{
	for (unsigned int i = 0 ; i < this->medications.size(); i++)
	{
		if (this->medications[i].getMedicationName() == med.getMedicationName() && this->medications[i].getConcentration() == med.getConcentration() && this->medications[i].getProducer() == med.getProducer())
		{
			return i;
		}
	}
	return -1;
}

void Repository::addMedications(const Medication & med)
{
	int pos = this->findMedication(med);
	if (pos == -1)
		this->medications.push_back(med);
	else
	{
		int stock = this->medications[pos].getStock();
		this->medications[pos].setStock(stock + med.getStock());
	}
	this->writeToFile();
}

void Repository::updateMedications(const Medication & med)
{
	int pos = this->findMedication(med);
	if (pos == -1)
		throw Exception("Medication not in list -- updateMedication");
	this->medications[pos] = med;
	this->writeToFile();
}

void Repository::removeMedication(const Medication & med)
{
	int pos = this->findMedication(med);
	if (pos == -1)
		throw Exception("Medication not in list -- removeMedication");
	this->medications.erase(this->medications.begin() + pos);
	this->writeToFile();
}

void Repository::readFromFile()
{
	ifstream file("medications.txt");

	if (!file.is_open())
		return;
	Medication med;
	while (file >> med)
	{
		this->medications.push_back(med);
	}
	file.close();

}

void Repository::writeToFile()
{
	ofstream file("medications.txt");

	Medication med;
	for (auto it : this->medications)
	{
		file << it;
	}
	file.close();
}
