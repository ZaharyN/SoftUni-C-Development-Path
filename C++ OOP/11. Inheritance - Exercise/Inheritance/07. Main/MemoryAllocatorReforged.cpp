#include "Defines.h"

#include<string>
#include<sstream>
#include<vector>
#include <iostream>

class Command
{
protected:
	std::vector<MemoryNode>& memory;
	static int allocatedMemory;

public:
	Command(std::vector<MemoryNode>& memory) : memory(memory) {}
};

int Command::allocatedMemory = 0;

class MemoryTypeCommand : public Command
{
protected:
	MemoryType memoryType;
	int index;

public:
	MemoryTypeCommand(std::vector<MemoryNode>& memory, std::istringstream& istr) : Command(memory)
	{
		std::string memoryType;

		istr >> memoryType >> index;

		if (memoryType == "Single")
		{
			this->memoryType = MemoryType::SINGLE;
		}
		else if (memoryType == "Multiple")
		{
			this->memoryType = MemoryType::MULTIPLE;
		}
	}
};

class AllocateCommand : MemoryTypeCommand
{
public:
	AllocateCommand(std::vector<MemoryNode>& memory, std::istringstream& input)
		: MemoryTypeCommand(memory, input)
	{
	}

	ErrorCode execute()
	{
		if (memory[index].rawMemory != nullptr)
		{
			return ErrorCode::MEMORY_LEAK;
		}

		memory[index].rawMemory = &allocatedMemory;
		memory[index].memoryType = this->memoryType;

		return ErrorCode::EXECUTE_SUCCESS;
	}
};

class DeallocateCommand : MemoryTypeCommand
{
public:
	DeallocateCommand(std::vector<MemoryNode>& memory, std::istringstream& input) : MemoryTypeCommand(memory, input)
	{

	}

	ErrorCode execute()
	{
		if (memory[index].rawMemory == nullptr)
		{
			return ErrorCode::DOUBLE_FREE;
		}

		if (memory[index].memoryType != this->memoryType)
		{
			return ErrorCode::ALLOCATE_DEALLOCATE_MISMATCH;
		}

		memory[index].rawMemory = nullptr;
		memory[index].memoryType = MemoryType::UNKNOWN;

		return ErrorCode::EXECUTE_SUCCESS;
	}
};

ErrorCode executeCommand(const std::string& command,
	std::vector<MemoryNode>& memory)
{
	std::string commandType;
	std::istringstream reader(command);

	reader >> commandType;

	if (commandType == "Allocate")
	{
		AllocateCommand allCommand(memory, reader);
		return allCommand.execute();
	}
	else if (commandType == "Deallocate")
	{
		DeallocateCommand deallCommand(memory, reader);
		return deallCommand.execute();
	}
}

void printResult(const ErrorCode errorCode,
	const std::string& command)
{
	std::ostringstream output;

	output << command << " - ";

	switch (errorCode)
	{
		case ErrorCode::EXECUTE_SUCCESS:
			output << "success";
			break;
		case ErrorCode::ALLOCATE_DEALLOCATE_MISMATCH:
			output << "Warning allocate/deallocate mismatch, will skip this deallocation";
			break;
		case ErrorCode::DOUBLE_FREE:
			output << "system crash prevented, will skip this deallocation";
			break;
		case ErrorCode::MEMORY_LEAK:
			output << "memory leak prevented, will not make allocation";
			break;
	}

	std::cout << output.str() << std::endl;
}