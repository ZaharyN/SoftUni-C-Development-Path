#pragma once
#ifndef WORDS_H
#define WORDS_H

#include <map>
#include <string>


class Word
{
	static std::map<std::string, int> wordsCount;
	std::string current;

public:
	Word(const std::string& input)
		: current(input)
	{
		wordsCount[current]++;
	}

	const std::string& getWord() const
	{
		return current;
	}

	const int getCount() const
	{
		int count = wordsCount[current];
		wordsCount.erase(current);
		return count;
	}

	bool operator<(const Word& other) const
	{
		return this->getWord() < other.getWord();
	}
};






#endif // !WORDS_H
