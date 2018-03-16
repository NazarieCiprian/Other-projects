#include "userwindow.h"

UserWindow::UserWindow(Controller& c,QWidget *parent)
	:ctrl(c), QWidget(parent)
{
	ui.setupUi(this);
	this->ctrl.addObserver(this);
	this->populateList(ctrl.getAll());
	this->connectSignalsAndSlots();
}

UserWindow::~UserWindow()
{
	this->ctrl.removeObserver(this);
}

void UserWindow::update()
{
	this->populateList(this->ctrl.getAll());
}

void UserWindow::populateList(vector<Medication> meds)
{
	if (this->ui.medicationList->count() > 0)
		this->ui.medicationList->clear();

	for (auto it : meds)
	{
		QString itemInList = QString::fromStdString(it.toString());
		this->ui.medicationList->addItem(itemInList);
	}

	if (this->ui.medicationList->count() > 0)
		this->ui.medicationList->setCurrentRow(0);
}

void UserWindow::populateClientList(vector<Medication> clientmeds)
{	
	if (this->ui.clientList->count() > 0)
		this->ui.clientList->clear();
	for (auto it : clientmeds)
	{
		QString itemInList = QString::fromStdString(it.toString());
		this -> ui.clientList->addItem(itemInList);
	}

}

void UserWindow::connectSignalsAndSlots()
{
	QObject::connect(ui.searhButton, SIGNAL(clicked()), this, SLOT(searchMed()));
	QObject::connect(ui.addToClients, SIGNAL(clicked()), this, SLOT(buyMed()));
	QObject::connect(ui.saveClients, SIGNAL(clicked()), this, SLOT(saveToFile()));
}

int UserWindow::getSelectedIndex()
{
	if (this->ui.medicationList->count() == 0)
		return -1;
	QModelIndexList index = this->ui.medicationList->selectionModel()->selectedIndexes();
	if (index.size() == 0)
	{
		
		return -1;
	}
	return index.at(0).row();
}

void UserWindow::buyMed()
{
	int index = this->getSelectedIndex();
	if (index == -1)
		return;
	try
	{
		this->ctrl.addToBasket(this->ctrl.getAll()[index]);
		this->populateClientList(this->ctrl.getClientAll());
	}
	catch (Exception& e)
	{
		QMessageBox messagebox;
		messagebox.critical(0, "Error", QString::fromStdString(e.getMessage()));
	}
}

void UserWindow::saveToFile()
{
	double bill = this->ctrl.getBill();
	int nr = rand() % 10000;
	stringstream ss;
	ss << "user" << nr<<".txt";
	this->ctrl.saveToFile(ss.str());
	this->populateClientList(this->ctrl.getClientAll());
	QMessageBox messagebox;
	messagebox.information(0, "Information", QString::number(bill));
}

void UserWindow::searchMed()
{
	string search = this->ui.searchLineEdit->text().toStdString();
	vector<Medication> meds = this->ctrl.getSearched(search);
	this->populateList(meds);
}
