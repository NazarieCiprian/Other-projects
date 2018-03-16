#include "Repository.h"

Repository::Repository(const string & filename)
{
	this->readFromFile();
}



int Repository::findQuestion(const Question & q)
{
	for (unsigned int i = 0; i < this->questions.size(); i++)
	{
		if (this->questions[i].getQuestion() == q.getQuestion())
			return i;
	}
	return -1;
}

void Repository::addQuestion(const Question & q)
{
	int pos = this->findQuestion(q);
	if (pos == -1)
	{
		this->questions.push_back(q);
		this->writeToFile();
	}
}

void Repository::readFromFile()
{
	ifstream file("questions.txt");
	Question q;

	while (file >> q)
	{
		this->questions.push_back(q);
	}
	file.close();
}

void Repository::writeToFile()
{
	ofstream file("questions.txt");

	for (auto it : this->questions)
	{
		file << it;
	}
	file.close();
}
