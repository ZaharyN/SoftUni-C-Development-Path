#include<iostream>
#include<string>
#include<map>

namespace SoftUni
{
	class Lecture
	{
		std::map<int, Resource> resources;

	public:
		Lecture(){}

		Lecture& operator<<(const Resource& r)
		{
			resources[r.getId()] = r;
		}

		
	};
}