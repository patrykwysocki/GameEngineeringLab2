#pragma once
#include "Command.h"

class TCommand : public Command
{
public:
	TCommand() {};
	~TCommand() {};
	virtual void execute() override
	{
		std::cout << "T";
	};
	virtual void undo() override
	{
		std::cout << "Undo T" << std::endl;
	};
	virtual void redo() override
	{
		std::cout << "Redo T" << std::endl;
	};

private:

};
