#pragma once

#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

#include "utils.h"
using namespace std;
class Question
{
private:
	string question;
	string answera, answerb, answerc, answerd;
	string userAnswer;
	string correctAnswer;
	string difficulty;
	int points;

public:
	Question();
	Question(const string& question, const string& answera, const string& answerb, const string& answerc, const string& answerd, const string& user, const string& correct, const string& diff, const int points);


	string getQuestion()const { return this->question; }
	string getAnswerA()const { return this->answera; }
	string getAnswerB()const { return this->answerb; }
	string getAnswerC()const { return this->answerc; }
	string getAnswerD()const { return this->answerd; }
	string getUserAnswer()const { return this->userAnswer; }
	string getCorrectAnswer()const { return this->correctAnswer; }
	string getDifficulty()const { return this->difficulty; }
	int getPoints()const { return this->points; }

	void setUserAnswer(const string& correct) { this->userAnswer = correct; }
	

	friend istream& operator >> (istream& is, Question& q);
	friend ostream& operator <<(ostream& os, Question& q);
};