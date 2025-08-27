#ifndef RESOURCE_H
#define RESOURCE_H

#include "ResourceType.h"
#include<string>
#include<iostream>

namespace SoftUni
{
	class Resource
	{
		int id;
		ResourceType resourceType;
		std::string link;


	public:
		Resource() {};

		Resource(int id, const ResourceType& resourceType, const std::string& link) :
			id(id), resourceType(resourceType), link(link) { }

		ResourceType getType() const { return resourceType; }
		int getId() const { return id; }
		std::string getLink() const { return link; }

		bool operator<(const Resource& other) const
		{
			return id < other.getId();
		}
	};

	std::istream& operator>>(std::istream& reader, ResourceType& resourceType)
	{
		std::string typeAsString;
		reader >> typeAsString;

		if (typeAsString == "Presentation")
			resourceType = ResourceType::PRESENTATION;
		else if (typeAsString == "Demo")
			resourceType = ResourceType::DEMO;
		else if (typeAsString == "Video")
			resourceType = ResourceType::VIDEO;

		return reader;
	}

	std::istream& operator>>(std::istream& reader, Resource& r)
	{
		int id;
		ResourceType type;
		std::string link;

		reader >> id;
		reader >> type;
		reader >> link;

		r = Resource(id, type, link);

		return reader;
	}

	std::ostream& operator<<(std::ostream& writer, const Resource& r)
	{
		writer << r.getId() << " " << r.getType() << " " << r.getLink();

		return writer;
	}
}


#endif // !RESOURCE_H 
