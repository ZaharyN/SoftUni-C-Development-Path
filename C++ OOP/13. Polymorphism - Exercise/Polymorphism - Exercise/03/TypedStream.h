#pragma once

#include<string>
#include<vector>

template<typename T>
class TypedStream
{
protected:
	std::istringstream stream;

	TypedStream(const std::string& input) : stream(input){}

	virtual TypedStream<T>& operator>>(T& s)
	{
		return *this;
	}

	virtual ~TypedStream() = default;

public:
	const std::vector<T> readToEnd()
	{
		std::vector<T> elements;
		T currentEl;
		
		while (true)
		{
			*this >> currentEl;

			if ((bool)stream == false) break;

			elements.push_back(currentEl);
		}

		return elements;
	}
};