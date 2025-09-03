#ifndef VECTOR_COMPARISON_H
#define VECTOR_COMPARISON_H

#include "Vector.h"

template<typename T, typename Comparer> 
class ReverseComparer
{
	Comparer c;
public:
	
	bool operator()(const Vector& v1, const Vector& v2) const
	{
		return !c(v1, v2);
	}
};


class VectorLengthComparer
{
public:
	bool operator()(const Vector& v1, const Vector& v2) const
	{
		return v1.getLength() < v2.getLength();
	}
};


#endif // !VECTOR_COMPARISON_H