#pragma once
#include "Command.h"


class WCommand : public Command
{
public:
	WCommand() {};
	~WCommand() {}; 
	virtual void execute() override
	{
		std::cout << "W";
	};
	virtual void undo() override
	{
		std::cout << "Undo W" << std::endl;
	};
	virtual void redo() override
	{
		std::cout << "Redo W" << std::endl;
	};

private:

};