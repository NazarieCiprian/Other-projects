#ifndef PHARMACYPROJECT_H
#define PHARMACYPROJECT_H

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include "ui_pharmacyproject.h"
#include "Controller.h"
class pharmacyproject : public QMainWindow,public Observer
{
	Q_OBJECT
private:
	Controller& ctrl;
public:
	pharmacyproject(Controller& c,QWidget *parent = 0);
	~pharmacyproject();
	void update()override;

private:
	Ui::pharmacyprojectClass ui;

	void populateList(vector<Medication> medications);
	int getSelectedIndex();
	void connectSignalsAndSlots();

private slots:
	void listItemChanged();
	void addMedication();
	void updateMedication();
	void removeMedication();
	void searchMedication();
};

#endif // PHARMACYPROJECT_H
