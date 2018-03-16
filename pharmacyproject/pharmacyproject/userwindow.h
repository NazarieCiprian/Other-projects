#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QWidget>
#include <qmessagebox.h>
#include "ui_userwindow.h"
#include "Controller.h"

class UserWindow : public QWidget,public Observer
{
	Q_OBJECT
private:
	Controller& ctrl;
public:
	UserWindow(Controller& c,QWidget *parent = 0);
	~UserWindow();
	void update()override;

private:
	Ui::UserWindow ui;
	void populateList(vector<Medication> meds);
	void populateClientList(vector<Medication> clientmeds);
	void connectSignalsAndSlots();
	int getSelectedIndex();

private slots:
	void searchMed();
	void buyMed();
	void saveToFile();
};

#endif // USERWINDOW_H
