#include "Question.h"


Question::Question() : question(""), answera(""), answerb(""), answerc(""), answerd(""), userAnswer(""), correctAnswer(""),difficulty(""), points(0)
{
}

Question::Question(const string & question, const string & answera, const string & answerb, const string & answerc, const string & answerd, const string & user, const string & correct,const string& diff, const int points) : question(question), answera(answera), answerb(answerb), answerc(answerc), answerd(answerd), userAnswer(user), correctAnswer(correct),difficulty(diff), points(points)
{
}

istream & operator >> (istream & is, Question & q)
{
	string line;
	getline(is,line);

	vector<string> tokens = tokenize(line, ',');
	if (tokens.size() != 9)
		return is;
	;
	q.question = tokens[0];
	q.answera = tokens[1];
	q.answerb = tokens[2];
	q.answerc = tokens[3];
	q.answerd = tokens[4];
	q.userAnswer = tokens[5];
	q.correctAnswer = tokens[6];
	q.difficulty = tokens[7];
	q.points = stoi(tokens[8]);
	return is;


}

ostream & operator<<(ostream & os, Question & q)
{
	os << q.question << "," << q.answera << "," << q.answerb << "," << q.answerc << "," << q.answerd << "," << q.userAnswer << "," << q.correctAnswer << "," <<q.difficulty<<","<< q.points << "\n";
	return os;
}

