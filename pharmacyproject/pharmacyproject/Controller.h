#pragma once

#include "Repository.h"
#include "ClientRepository.h"
#include "Observer.h"
#include <time.h>

class Controller:public Observable
{
private:
	Repository repo;
	ClientRepository clientrepo;

public:
	Controller(const Repository& r,const ClientRepository& cr);


	void addMedication(const Medication& med);
	void removeMedication(const Medication& med);
	void updateMedication(const Medication& med);

	void addToBasket(Medication med);
	double getBill() { return this->clientrepo.getBill(); }
	void saveToFile(const string& filename);

	vector<Medication> getAll();
	vector<Medication> getClientAll() { return this->clientrepo.getAll(); }

	vector<Medication> getSearched(string item);
};