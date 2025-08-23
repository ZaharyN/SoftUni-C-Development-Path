#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class SentenceShifter
{
	vector<string> words;
public:
	void read(istream& input);
	void getShiftedSentence(int steps);
	void print();
};

void SentenceShifter::read(istream& reader)
{
	string word;
	while (reader >> word)
	{
		words.push_back(word);
	}
}

void SentenceShifter::getShiftedSentence(int steps)
{
	while (steps--)
	{
		words.insert(words.begin(), words.back());
		words.pop_back();
	}
}

void SentenceShifter::print()
{
	for (const string& word : words)
	{
		cout << word << endl;
	}
}

int main()
{
	string input;
	getline(cin, input);
	stringstream reader(input);

	SentenceShifter sentenceShifter;
	sentenceShifter.read(reader);

	int n;
	cin >> n;

	sentenceShifter.getShiftedSentence(n);
	sentenceShifter.print();

	return 0;
}