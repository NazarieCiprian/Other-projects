#include "Controller.h"

Controller::Controller(const Repository & r, const ClientRepository& cr):repo(r),clientrepo(cr)
{
}

void Controller::addMedication(const Medication & med)
{
	this->repo.addMedications(med);
	this->notify();
}

void Controller::removeMedication(const Medication & med)
{
	time_t theTime= time(NULL);
	struct tm *atime = localtime(&theTime);
	int day = atime->tm_mday;
	int month = atime->tm_mon + 1;
	int year = atime->tm_year + 1900;
	if (med.getValability().getYear() < year)
	{
		this->repo.removeMedication(med);
	}
	else if (med.getValability().getYear() == year)
	{
		if (med.getValability().getMonth() < month)
		{
			this->repo.removeMedication(med);
		}
		else if (med.getValability().getMonth() == month)
		{
			if (med.getValability().getDay() < day)
			{
				this->repo.removeMedication(med);
			}
		}
	}
	this->notify();
}

void Controller::updateMedication(const Medication & med)
{
	this->repo.updateMedications(med);
}

void Controller::addToBasket(Medication  med)
{
	if (med.getStock() <= 0)
	{
		throw Exception("Stock is empty -- addToBasket");
	}
	med.setStock(med.getStock() - 1);
	this->repo.updateMedications(med);
	this->clientrepo.addMedication(med);
	this->notify();
	
}

void Controller::saveToFile(const string & filename)
{
	this->clientrepo.writeToFile(filename);
}

vector<Medication> Controller::getAll()
{
	return this->repo.getAll();
	this->notify();
}

vector<Medication> Controller::getSearched(string item)
{
	vector<Medication> items;
	for (auto it : this->getAll())
	{
		if (it.getMedicationName().find(item) != string::npos)
		{
			items.push_back(it);
		}
	}
	return items;
}
