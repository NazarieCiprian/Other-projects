#include "utils.h"

vector<string> tokenize(string line, char delimiter)
{
	stringstream ss(line);
	vector<string> tokens;
	string token;
	while (getline(ss, token, delimiter))
	{
		tokens.push_back(token);
	}
	return tokens;
}
