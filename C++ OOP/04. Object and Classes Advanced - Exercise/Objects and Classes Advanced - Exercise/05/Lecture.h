#include<iostream>
#include<string>
#include<map>

namespace SoftUni
{
	class Lecture
	{
		std::set<Resource> resources;

	public:
		Lecture(){}

		Lecture& operator<<(const Resource& r)
		{
			std::set<Resource>::iterator it = resources.find(r);

			if (it != resources.end())
			{
				resources.erase(it);
			}
			resources.insert(r);
			
			return *this;
		}

		std::set<Resource> getResources() const { return resources; }
		std::set<Resource>::iterator begin() { return resources.begin(); }
		std::set<Resource>::iterator end() { return resources.end(); }

		int operator[](const ResourceType& rt)
		{
			int counter = 0;

			for (const Resource& r : resources)
			{
				if (r.getType() == rt)
				{
					counter++;
				}
			}

			return counter;
		}
	};

	std::vector<ResourceType>& operator<<(std::vector<ResourceType>& v1, const Lecture& l)
	{
		std::set<ResourceType> uniqueTypes;

		for (const Resource& r : l.getResources())
		{
			uniqueTypes.insert(r.getType());
		}

		v1.clear();

		for (const ResourceType& rt : uniqueTypes)
		{
			v1.push_back(rt);
		}

		return v1;
	}
} 