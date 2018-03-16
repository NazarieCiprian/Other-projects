#include "quizv2.h"

quizv2::quizv2(Controller& c, QWidget *parent)
	: ctrl(c),QMainWindow(parent)
{
	ui.setupUi(this);
	this->ui.submitButton->setDisabled(true);
	this->ui.finishButton->setDisabled(true);
	this->populateList(ctrl.getAll());
	this->connectSignalsAndSlots();
}

quizv2::~quizv2()
{

}

void quizv2::populateList(vector<Question> quests)
{
	if (this->ui.questionList->count() > 0)
		this->ui.questionList->clear();

	for (auto it : quests)
	{
		QString itemInList = QString::fromStdString(it.getQuestion());
		this->ui.questionList->addItem(itemInList);
	}

	if (this->ui.questionList->count() > 0)
		this->ui.questionList->setCurrentRow(0);
}

void quizv2::connectSignalsAndSlots()
{
	QObject::connect(ui.questionList, SIGNAL(itemSelectionChanged()), this, SLOT(listItemChanged()));
	//connect buttons with their action functions
	QObject::connect(ui.addButton, SIGNAL(clicked()), this, SLOT(addQuestion()));
	QObject::connect(ui.easyButton, SIGNAL(clicked()), this, SLOT(showEasyQuest()));
	QObject::connect(ui.mediumButton, SIGNAL(clicked()), this, SLOT(showMediumQuest()));
	QObject::connect(ui.hardButtom, SIGNAL(clicked()), this, SLOT(showHardQuest()));
	QObject::connect(ui.submitButton, SIGNAL(clicked()), this, SLOT(submitQuestion()));
	QObject::connect(ui.finishButton, SIGNAL(clicked()), this, SLOT(finishQuiz()));
}

int quizv2::getSelectedIndex()
{
	if (this->ui.questionList->count() == 0)
		return -1;
	QModelIndexList index = this->ui.questionList->selectionModel()->selectedIndexes();
	if (index.size() == 0)
	{
		this->ui.aLineEdit->clear();
		this->ui.bLineEdit->clear();
		this->ui.cLineEdit->clear();
		this->ui.dLineEdit->clear();
		return -1;
	}
	int idx = index.at(0).row();
	return idx;

}

void quizv2::showEasyQuest()
{
	//show a questionaire that has easy questions
	this->ui.submitButton->setDisabled(false);
	this->ui.finishButton->setDisabled(false);
	this->questionaire.clear();
	this->questionaire = this->ctrl.getQuestsByDifficulty("easy");
	this->populateList(this->questionaire);
	this->ui.addButton->setDisabled(true);
	this->ui.mediumButton->setDisabled(true);
	this->ui.hardButtom->setDisabled(true);
}

void quizv2::showMediumQuest()
{
	//show a questionaire that has medium questions
	this->ui.submitButton->setDisabled(false);
	this->ui.finishButton->setDisabled(false);
	this->questionaire.clear();
	this->questionaire = this->ctrl.getQuestsByDifficulty("medium");
	this->populateList(this->questionaire);
	this->ui.easyButton->setDisabled(true);
	this->ui.hardButtom->setDisabled(true);
	this->ui.addButton->setDisabled(true);
}

void quizv2::showHardQuest()
{
	//show a questionaire that has hard questions
	this->ui.submitButton->setDisabled(false);
	this->ui.finishButton->setDisabled(false);
	this->questionaire.clear();
	this->questionaire = this->ctrl.getQuestsByDifficulty("hard");
	this->populateList(this->questionaire);
	this->ui.easyButton->setDisabled(true);
	this->ui.hardButtom->setDisabled(true);
	this->ui.addButton->setDisabled(true);
}

void quizv2::listItemChanged()
{
	int idx = this->getSelectedIndex();
	if (idx == -1)
		return;
	if (idx >= this->questionaire.size())
		return;
	Question q = questionaire[idx];
	this->ui.aLineEdit->setText(QString::fromStdString(q.getAnswerA()));
	this->ui.bLineEdit->setText(QString::fromStdString(q.getAnswerB()));
	this->ui.cLineEdit->setText(QString::fromStdString(q.getAnswerC()));
	this->ui.dLineEdit->setText(QString::fromStdString(q.getAnswerD()));

	
}

void quizv2::submitQuestion()
{
	string answer="";
	//we consider only one answer correct so the last one checked is taken into account even though the use checked more 
	if (this->ui.acheck->isChecked())
		answer = this->ui.aLineEdit->text().toStdString();
	else if (this->ui.bcheck->isChecked())
		answer = this->ui.bLineEdit->text().toStdString();
	else if (this->ui.ccheck->isChecked())
		answer = this->ui.ccheck->text().toStdString();
	else
		answer = this->ui.dcheck->text().toStdString();

	Question q = this->questionaire[this->getSelectedIndex()];
	q.setUserAnswer(answer);
	this->answered.push_back(q);
	//remove from the list the questions that have been already answered
	this->questionaire.erase(this->questionaire.begin() + this->getSelectedIndex());
	this->populateList(this->questionaire);

	//setting any checked box back to unchecked
	this->ui.acheck->setChecked(false);
	this->ui.bcheck->setChecked(false);
	this->ui.ccheck->setChecked(false);
	this->ui.dcheck->setChecked(false);
}

void quizv2::finishQuiz()
{
	int score = this->ctrl.getScore(answered);
	stringstream message;
	message << "You're score is:" << score;
	QMessageBox messagebox;
	messagebox.information(0, "Score", QString::fromStdString(message.str()));
	this->answered.clear();
	this->questionaire.clear();
	this->populateList(ctrl.getAll());
	this->ui.easyButton->setDisabled(false);
	this->ui.mediumButton->setDisabled(false);
	this->ui.hardButtom->setDisabled(false);
	this->ui.addButton->setDisabled(false);
	this->ui.submitButton->setDisabled(true);
	this->ui.finishButton->setDisabled(true);
}

void quizv2::addQuestion()
{
	string question;
	string answera;
	string answerb;
	string answerc;
	string answerd;
	string correct;
	string difficulty;
	int points;
	question = this->ui.questionLineEdit->text().toStdString();
	answera = this->ui.answerALineEdit->text().toStdString();
	answerb = this->ui.answerBLineEdit->text().toStdString();
	answerc = this->ui.answerCLineEdit->text().toStdString();
	answerd = this->ui.answerDLineEdit->text().toStdString();
	correct = this->ui.correctAnswerLineEdit->text().toStdString();
	difficulty = this->ui.difficultyLineEdit->text().toStdString();
	points = stoi(this->ui.pointsLineEdit->text().toStdString());
	Question q{ question,answera,answerb,answerc,answerd,"",correct,difficulty,points };
	this->ctrl.addQuestion(q);
	this->ui.questionLineEdit->clear();
	this->ui.answerALineEdit->clear();
	this->ui.answerBLineEdit->clear();
	this->ui.answerCLineEdit->clear();
	this->ui.answerDLineEdit->clear();
	this->ui.correctAnswerLineEdit->clear();
	this->ui.difficultyLineEdit->clear();
	this->ui.pointsLineEdit->clear();
	this->populateList(ctrl.getAll());

}
