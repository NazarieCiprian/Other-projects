#include "Controller.h"

Controller::Controller(const Repository & r):repo(r)
{
}

void Controller::addQuestion(const Question& q)
{
	this->repo.addQuestion(q);
}

vector<Question> Controller::getAll()
{
	return this->repo.getAll();
}

vector<Question> Controller::getQuestsByDifficulty(string difficulty)
{
	vector<Question> questions;
	int nr = 6;
	vector<Question> temp;
	for (auto it : this->getAll())
	{
		if(it.getDifficulty()==difficulty)
		temp.push_back(it);
	}
	while (nr > 0)
	{
		int index = rand() % temp.size();
		int ok = 0;
		for (auto it : questions)
			if (it.getQuestion() == temp[index].getQuestion())
				ok = 1;
		if (ok == 0)
		{
			questions.push_back(temp[index]);
			nr--;
		}
	}
	return questions;
}

int Controller::getScore(vector<Question> answered)
{
	int score=0;
	for (auto it : answered)
	{
		if (it.getUserAnswer() == it.getCorrectAnswer())
			score = score + it.getPoints();
	}
	return score;

}
