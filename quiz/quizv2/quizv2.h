#ifndef QUIZV2_H
#define QUIZV2_H

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include "ui_quizv2.h"
#include "Controller.h"
class quizv2 : public QMainWindow
{
	Q_OBJECT
private:
	Controller& ctrl;
	vector<Question> questionaire;
	vector<Question> answered;
public:
	quizv2(Controller& c,QWidget *parent = 0);
	~quizv2();

private:
	Ui::quizv2Class ui;

	void populateList(vector<Question> quests);
	void connectSignalsAndSlots();
	int getSelectedIndex();

private slots:
	void addQuestion();
	void showEasyQuest();
	void showMediumQuest();
	void showHardQuest();
	void listItemChanged();
	void submitQuestion();
	void finishQuiz();
};

#endif // QUIZV2_H
