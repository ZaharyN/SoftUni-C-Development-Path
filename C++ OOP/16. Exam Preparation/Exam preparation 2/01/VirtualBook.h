#pragma once

#include "VirtualPage.h"
#include<map>
#include<vector>
#include<iostream>

class VirtualBook
{
	//std::map<int, VirtualPage> book;
	std::vector<VirtualPage> book;

public:
	void addPage(const VirtualPage& page)
	{
		book.push_back(page);
	}

	void printContent()
	{
		int pageCounter = 1;

		for (const VirtualPage& page : book)
		{
			page.printContent();
			pageCounter++;
		}
	}

	void removeLastPage()
	{
		if (!book.empty())
		{
			book.pop_back();
		}
	}

	void removeAllPages()
	{
		book.clear();
	}
};