#pragma once
#include "Command.h"

class RCommand : public Command
{
public:
	RCommand() {};
	~RCommand() {};
	virtual void execute() override
	{
		std::cout << "R";
	};
	virtual void undo() override
	{
		std::cout << "Undo R" << std::endl;
	};
	virtual void redo() override
	{
		std::cout << "Redo R" << std::endl;
	};

private:

};
