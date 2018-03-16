#include "utils.h"

vector<string> tokenize(const string & line, char delimiter)
{
	stringstream ss(line);
	string token;
	vector<string> tokens;

	while (getline(ss, token, delimiter))
	{
		tokens.push_back(token);
	}
	return tokens;
}
