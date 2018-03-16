#pragma once
#include "Repository.h"

class Controller
{
private:
	Repository repo;

public:
	
	Controller(const Repository& r);

	void addQuestion(const Question& q);
	vector<Question> getAll();
	vector<Question> getQuestsByDifficulty(string difficulty);

	int getScore(vector<Question> answered);
};