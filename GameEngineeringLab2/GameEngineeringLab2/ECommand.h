#pragma once
#include "Command.h"

class ECommand : public Command
{
public:
	ECommand() {};
	~ECommand() {};
	virtual void execute() override
	{
		std::cout << "E";
	};
	virtual void undo() override
	{
		std::cout << "Undo E" << std::endl;
	};
	virtual void redo() override
	{
		std::cout << "Redo E" << std::endl;
	};
private:

};
