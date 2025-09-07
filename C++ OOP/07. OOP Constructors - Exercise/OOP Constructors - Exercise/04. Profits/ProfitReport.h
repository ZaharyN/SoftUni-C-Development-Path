#ifndef PROFIT_REPORT_H
#define PROFIT_REPORT_H

#include "Company.h"
#include "ProfitCalculator.h"

#include <map>
#include <sstream>

std::string getProfitReport(Company* begin, Company* end, std::map<int, ProfitCalculator>& companies)
{
	std::ostringstream writer;
	
	for (; begin <= end; begin++)
	{
		int currentCompanyId = begin->getId();

		writer << begin->getName() << " = " << companies[currentCompanyId].calculateProfit(*begin) << std::endl;
	}

	return writer.str();
}

#endif // !PROFIT_REPORT_H
