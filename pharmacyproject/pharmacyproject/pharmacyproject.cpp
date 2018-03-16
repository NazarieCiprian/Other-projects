#include "pharmacyproject.h"

pharmacyproject::pharmacyproject(Controller& c,QWidget *parent)
	: ctrl(c),QMainWindow(parent)
{
	ui.setupUi(this);
	this->populateList(this->ctrl.getAll());
	this->connectSignalsAndSlots();
}

pharmacyproject::~pharmacyproject()
{

}

void pharmacyproject::update()
{
	this->populateList(this->ctrl.getAll());
}

void pharmacyproject::populateList(vector<Medication> medications)
{
	if (this->ui.adminMedicationList->count() > 0)
		this->ui.adminMedicationList->clear();
	for (auto it : medications)
	{
		QString itemInList = QString::fromStdString(it.toString());
		this->ui.adminMedicationList->addItem(itemInList);
	}

	if (this->ui.adminMedicationList->count() > 0)
		this->ui.adminMedicationList->setCurrentRow(0);
}

int pharmacyproject::getSelectedIndex()
{
	if (this->ui.adminMedicationList->count() == 0)
		return -1;
	QModelIndexList index = this->ui.adminMedicationList->selectionModel()->selectedIndexes();
	if (index.size() == 0)
	{
		this->ui.medicationLineEdit->clear();
		this->ui.concentrationLineEdit->clear();
		this->ui.producerLineEdit->clear();
		this->ui.stockLineEdit->clear();
		this->ui.valabilityDayLineEdit->clear();
		this->ui.valabilityMonthLineEdit->clear();
		this->ui.valabilityYearLineEdit->clear();
		this->ui.priceLineEdit->clear();
		return -1;
	}
	return index.at(0).row();

}

void pharmacyproject::connectSignalsAndSlots()
{
	QObject::connect(ui.adminMedicationList, SIGNAL(itemSelectionChanged()), this, SLOT(listItemChanged()));
	QObject::connect(ui.addButton, SIGNAL(clicked()), this, SLOT(addMedication()));
	QObject::connect(ui.updateButton, SIGNAL(clicked()), this, SLOT(updateMedication()));
	QObject::connect(ui.removeButton, SIGNAL(clicked()), this, SLOT(removeMedication()));
	QObject::connect(ui.searhButton, SIGNAL(clicked()), this, SLOT(searchMedication()));
}

void pharmacyproject::listItemChanged()
{
	int idx = this->getSelectedIndex();
	if (idx == -1)
		return;
	vector<Medication> meds = this->ctrl.getAll();
	Medication m = meds[idx];
	this->ui.medicationLineEdit->setText(QString::fromStdString(m.getMedicationName()));
	this->ui.concentrationLineEdit->setText(QString::fromStdString(m.getConcentration()));
	this->ui.producerLineEdit->setText(QString::fromStdString(m.getProducer()));
	this->ui.stockLineEdit->setText(QString::number(m.getStock()));
	this->ui.valabilityDayLineEdit->setText(QString::number(m.getValability().getDay()));
	this->ui.valabilityMonthLineEdit->setText(QString::number(m.getValability().getMonth()));
	this->ui.valabilityYearLineEdit->setText(QString::number(m.getValability().getYear()));
	this->ui.priceLineEdit->setText(QString::number(m.getPrice()));


}
void pharmacyproject::addMedication()
{
	string medicationName;
	string concentration;
	string producer;
	int stock;
	int day, month, year;
	double price;
	bool otc;
	medicationName = this->ui.medicationLineEdit->text().toStdString();
	concentration = this->ui.concentrationLineEdit->text().toStdString();
	producer = this->ui.producerLineEdit->text().toStdString();
	stock = stoi(this->ui.stockLineEdit->text().toStdString());
	day = stoi(this->ui.valabilityDayLineEdit->text().toStdString());
	month = stoi(this->ui.valabilityMonthLineEdit->text().toStdString());
	year = stoi(this->ui.valabilityYearLineEdit->text().toStdString());
	price = stod(this->ui.priceLineEdit->text().toStdString());
	QMessageBox::StandardButton reply;
	reply = QMessageBox::question(this, "Otc", "Is this med otc?", QMessageBox::Yes | QMessageBox::No);
	if (reply == QMessageBox::Yes)
		otc = true;
	else
		otc = false;

	Medication m{ medicationName,concentration,producer,stock,Date(day,month,year),price,otc };
	this->ctrl.addMedication(m);
	this->populateList(this->ctrl.getAll());

	
}

void pharmacyproject::updateMedication()
{
	string medicationName;
	string concentration;
	string producer;
	int stock;
	int day, month, year;
	double price;
	bool otc;
	medicationName = this->ui.medicationLineEdit->text().toStdString();
	concentration = this->ui.concentrationLineEdit->text().toStdString();
	producer = this->ui.producerLineEdit->text().toStdString();
	stock = stoi(this->ui.stockLineEdit->text().toStdString());
	day = stoi(this->ui.valabilityDayLineEdit->text().toStdString());
	month = stoi(this->ui.valabilityMonthLineEdit->text().toStdString());
	year = stoi(this->ui.valabilityYearLineEdit->text().toStdString());
	price = stod(this->ui.priceLineEdit->text().toStdString());
	QMessageBox::StandardButton reply;
	reply = QMessageBox::question(this, "Otc", "Is this med otc?", QMessageBox::Yes | QMessageBox::No);
	if (reply == QMessageBox::Yes)
		otc = true;
	else
		otc = false;
	try {


		Medication m{ medicationName,concentration,producer,stock,Date(day,month,year),price,otc };
		this->ctrl.updateMedication(m);
		this->populateList(this->ctrl.getAll());
	}
	catch (Exception& exc)
	{
		QMessageBox messagebox;
		messagebox.critical(0, "Error", QString::fromStdString(exc.getMessage()));
	}
}

void pharmacyproject::removeMedication()
{
	for (auto it : this->ctrl.getAll())
	{	
		this->ctrl.removeMedication(it);
	}
	this->populateList(this->ctrl.getAll());
}

void pharmacyproject::searchMedication()
{
	string search = this->ui.searchLineEdit->text().toStdString();
	vector<Medication> meds = this->ctrl.getSearched(search);
	this->populateList(meds);
}
