#include "commands.h"

// EndCommand:

void EndCommand::process()
{
	GasReservoir& reservior = GasReservoir::get();

	outputTicks(std::cout) << ": Final gas quantity: " << reservior.getQuantity() << " kg3" << std::endl;
}

// InitCommand:

InitCommand::InitCommand(std::istream& istr) : Command(istr)
{
	istr >> initQ;
}

void InitCommand::process()
{
	GasReservoir& reservior = GasReservoir::get();
	reservior.setQuantity(initQ);

	outputTicks(std::cout) << ": Gas quantity: " << reservior.getQuantity() << " kg3" << std::endl;
}

InitCommand::~InitCommand() {}

//InCommand:

InCommand::InCommand(std::istream& istr) : TwoParametersCommand(istr) {}

void InCommand::process()
{
	GasReservoir& reservior = GasReservoir::get();

	int quantity = getPar1();
	int hours = getPar2();
	int gasAdded = quantity * hours;

	reservior.addCycles(hours);
	reservior.setQuantity(reservior.getQuantity() + gasAdded);

	outputTicks(std::cout) << ": Pumping in " << quantity << " kg3 for " << hours
		<< " hours, remaining " << reservior.getQuantity() << " kg3" << std::endl;
}

InCommand::~InCommand() {}

// OutCommand

OutCommand::OutCommand(std::istream& istr) : TwoParametersCommand(istr) {}

void OutCommand::process()
{
	GasReservoir& reservior = GasReservoir::get();

	int quantity = getPar1();
	int hours = getPar2();
	int currentQuantiy = reservior.getQuantity();

	reservior.addCycles(hours);

	if (currentQuantiy <= 0)
	{
		outputTicks(std::cout) << ": Gas Storage Empty." << std::endl;
		return;
	}

	int requestedAmount = quantity * hours;
	int quantityToDeliver = std::min(currentQuantiy, requestedAmount);

	int shortage = requestedAmount - quantityToDeliver;

	reservior.setQuantity(currentQuantiy - quantityToDeliver);

	outputTicks(std::cout) << ": Delivering out " << quantityToDeliver << " kg3";

	if (shortage > 0)
	{
		std::cout << " (shortage " << shortage << " kg3)";
	}

	std::cout << ", remaining " << reservior.getQuantity() << " kg3" << std::endl;
}

OutCommand::~OutCommand() {}

// DemandCommand:

DemandCommand::DemandCommand(std::istream& istr) : TwoParametersCommand(istr) {}

void DemandCommand::process()
{
	GasReservoir& reservior = GasReservoir::get();
	int quantity = getPar1();
	int hours = getPar2();
	int currentQuanity = reservior.getQuantity();

	outputTicks(std::cout) << ": CHECK: ";

	if (currentQuanity == 0)
	{
		std::cout << "Gas Storage Empty." << std::endl;
		return;
	}

	int demandedAmount = quantity * hours;

	if (demandedAmount < reservior.getQuantity())
	{
		std::cout << "OK." << std::endl;
	}
	else
	{
		int shortage = demandedAmount - currentQuanity;
		int quantityAvailable = currentQuanity / hours;

		std::cout << "Shortage of " << shortage << ": availability "
			<< quantityAvailable << " for " << getPar2() << " hours" << std::endl;
	}
}

DemandCommand::~DemandCommand() {}
