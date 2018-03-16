#include "pharmacyproject.h"
#include "userwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repository repo;
	ClientRepository clientRepo;
	Medication med{ "zinat","15mg","gsk",20,Date(10,10,2010),100,true};
	//repo.addMedications(med);
	Controller ctrl{ repo,clientRepo };
	pharmacyproject w{ ctrl };
	UserWindow user{ ctrl };

	w.show();
	user.show();
	return a.exec();
}
