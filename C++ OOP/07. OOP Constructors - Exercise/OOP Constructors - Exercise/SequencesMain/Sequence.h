#ifndef SEQUENCE_H
#define SEQUENCE_H

#include<sstream>
#include<string>
#include<vector>
#include<climits>

template<class  T, class Generator>
class Sequence
{
	typedef std::vector<T> Data;
	Data data;
	Generator generator;

public:

	class Iterator
	{
		unsigned long m_index;
		Data& m_data;

	public:
		Iterator(Data& data, unsigned long index)
			: m_data(data), m_index(index)
		{
		}

		T& operator*() const
		{
			return m_data[m_index];
		}

		Iterator& operator++()
		{
			m_index++;
			return *this;
		}

		bool operator==(const Iterator& other) const
		{
			if (&this->m_data != &other.m_data)
			{
				return false;
			}

			if (this->IsAtTheEnd() && other.IsAtTheEnd())
			{
				return true;
			}

			return this->m_index == other.m_index;
		}

		bool operator!=(const Iterator& other) const
		{
			return !(*this == other);
		}

	private:
		bool IsAtTheEnd() const
		{
			return m_index >= m_data.size();
		}
	};

	Iterator begin()
	{
		return Iterator(data, 0);
	}

	Iterator end()
	{
		return Iterator(data, ULONG_MAX);
	}

	void generateNext(int numToGenerate)
	{
		while (numToGenerate--)
		{
			data.push_back(generator());
		}
	}
};

#endif // !SEQUENCE_H
