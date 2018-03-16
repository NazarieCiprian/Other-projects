#pragma once

#include "Question.h"
#include <fstream>

using namespace std;

class Repository
{
private:
	vector<Question> questions;
	string filename;

public:

	Repository(const string& filename);
	

	int findQuestion(const Question& q);
	void addQuestion(const Question& q);

	vector<Question> getAll() { return this->questions; }
	


private:
	void readFromFile();
	void writeToFile();
};