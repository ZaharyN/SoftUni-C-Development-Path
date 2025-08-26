#ifndef SUMOFVECTORS_H
#define SUMOFVECTORS_H
#include <vector>
#include <string>

using namespace std;

vector<string> operator+(const vector<string>& v1, const vector<string>& v2)
{
	vector<string> result;
	result.reserve(v2.size());

	for (int i = 0; i < v2.size(); i++)
	{
		string curr = v1[i] + " " + v2[i];
		result.push_back(curr);
	}

	return result;
}

#endif // !SUMOFVECTORS_H
